<?php

function tutoriame_privatemsg_consultar_page($form, &$form_state, $recipient) {
  global $user;

  module_load_include('inc', 'privatemsg');

  $proyecto = 0;
  $subject = '';
  $format = NULL;
  if (isset($form_state['values'])) {
    $proyecto = $form_state['values']['proyecto'];
    $subject = $form_state['values']['subject'];
    if (array_key_exists('format', $form_state['values'])) {
      $format = $form_state['values']['format'];
    }
  }
  $form_state['recipient'] = $recipient;

  $username = format_username($recipient);
  if ($profile = profile2_load_by_user($recipient)) {
    if (!empty($profile['main'])) {
      $username = $profile['main']->field_apellido['und'][0]['value'] . ', ' . $profile['main']->field_nombres['und'][0]['value'];
    }
  }

  $form = array(
    'message_header' => array(
      '#type' => 'fieldset',
      '#title' => t('Consultar a %s', array('%s' => $username)),
      '#weight' => -20,
    ),
    'author' => array(
      '#type' => 'value',
      '#value' => $user,
    ),
    '#access' => tutoriame_privatemsg_puede_contactar($user, $recipient),
  );

  $proyectos = tutoriame_privatemsg_proyectos_activos($user);
  $form['proyecto'] = array(
    '#type' => 'select',
    '#title' => t('Proyecto'),
    '#options' => $proyectos,
    '#empty_value' => 0,
    '#empty_option' => t('Selecciona un proyecto'),
    '#default_value' => $proyecto,
    '#weight' => -10,
    '#required' => true,
  );
  $form['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#size' => 50,
    '#maxlength' => 255,
    '#default_value' => $subject,
    '#weight' => -5,
    '#required' => true,
  );
  $form['body'] = array(
    '#type' => 'text_format',
    '#title' => t('Message'),
    '#rows' => 6,
    '#weight' => -3,
    '#resizable' => true,
    '#format' => $format,
    '#after_build' => array('privatemsg_check_format_access'),
    '#required' => true,
  );

  if (
    (privatemsg_user_access('use tokens in privatemsg')) &&
    (module_exists('token'))
  ) {
    $form['token'] = array(
      '#type' => 'fieldset',
      '#title' => t('Token browser'),
      '#weight' => -1,
      '#collapsible' => true,
      '#collapsed' => true,
    );
    $form['token']['browser'] = array(
      '#theme' => 'token_tree',
      '#token_types' => array('privatemsg_message'),
    );
  }
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send message'),
    '#weight' => 15,
    '#validate' => array('tutoriame_privatemsg_consultar_page_validate'),
    '#submit' => array('tutoriame_privatemsg_consultar_page_submit'),
  );
  $form['#submit'] = array('tutoriame_privatemsg_consultar_page_submit');
  $form['#validate'] = array('tutoriame_privatemsg_consultar_page_validate');
  $form['actions']['cancel'] = array(
    '#type' => 'link',
    '#title' => t('Cancel'),
    '#href' => 'user/' . $recipient->uid,
    '#options' => array('attributes' => array('class' => 'btn')),
    '#weight' => 200,
  );

  return $form;
}

function tutoriame_privatemsg_consultar_page_validate($form, &$form_state) {
  global $user;

  if (
    (empty($form_state['recipient'])) &&
    (!is_object($form_state['recipient']))
  ) {
    form_set_error('', t('No especificó el destinatario.'));
  }

  if (
    (empty($form_state['values']['proyecto'])) ||
    (!tutoriame_privatemsg_get_proyecto_activo($form_state['values']['proyecto'], $user))
  ) {
    form_set_error('proyecto', t('El campo Proyecto es obligatorio.'));
  }
}

function tutoriame_privatemsg_consultar_page_submit($form, &$form_state) {
  global $user;

  module_load_include('module', 'privatemsg');

  $message = (object)$form_state['values'];
  $message->recipient = $form_state['recipient']->name;
  $message->mid = 0;
  $message->format = $message->body['format'];
  $message->body = $message->body['value'];
  $message->timestamp = REQUEST_TIME;
  $message->subject = trim($message->subject);

  if ($proyecto = tutoriame_privatemsg_get_proyecto_activo($message->proyecto, $user)) {
    $message->subject = format_string('@proyecto: @asunto', array('@proyecto' => $proyecto, '@asunto' => $message->subject));
  }

  list($message->recipients) = _privatemsg_parse_userstring($message->recipient);

  $message->has_tokens = privatemsg_user_access('use tokens in privatemsg', $message->author) && count(token_scan($message->subject . $message->body));

  $recipient_names = array();
  foreach ($message->recipients as $recipient) {
    $recipient_names[] = privatemsg_recipient_format($recipient);
  }

  try {
    $message = _privatemsg_send($message);
    _privatemsg_handle_recipients($message->mid, $message->recipients);
    drupal_set_message(t('A message has been sent to !recipients.', array('!recipients' => implode(', ', $recipient_names))));

    $redirect = variable_get('privatemsg_default_redirect', '<new-message>');
    if (
      ($redirect == '<new-message>') ||
      (
        (!empty($_REQUEST['destination'])) &&
        ($_REQUEST['destination'] == '[new-message]')
      )
    ) {
      $form_state['redirect'] = array(
        format_string('@base_url/@mid', array(
          '@base_url' => variable_get('tutoriame_privatemsg_urls_base_url', 'messages/view'),
          '@mid' => $message->thread_id,
        )),
        array(
          'fragment' => 'privatemsg-mid-' . $message->mid,
        ),
      );
    } elseif (!empty($redirect)) {
      $form_state['redirect'] = $redirect;
    }

    /**
     * Agrego un flag entre el proyecto y el usuario contactado
     */
    if ($flag = flag_get_flag('conversaciones')) {
      foreach ($message->recipients as $recipient) {
        $flag->flag('flag', $message->proyecto, $recipient, true);
      }
    }
  } catch (Exception $e) {
    if (error_displayable()) {
      require_once DRUPAL_ROOT . '/includes/errors.inc';
      $variables = _drupal_decode_exception($e);

      drupal_set_message(t('Failed to send a message to !recipients. %type: !message in %function (line %line of %file).', array('!recipients' => implode(', ', $recipient_names)) + $variables), 'error');
    } else {
      drupal_set_message(t('Failed to send a message to !recipients. Contact your site administrator.', array('!recipients' => implode(', ', $recipient_names))), 'error');
    }
  }
}

