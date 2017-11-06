<?php

function tutoriame_contratar_contratar_page($to_user) {
  global $user;

  module_load_include('inc', 'node', 'node.pages');
  $form = node_add('contrato');

  $username = format_username($to_user);
  if ($profile = profile2_load_by_user($to_user)) {
    if (!empty($profile['main'])) {
      $username = $profile['main']->field_apellido['und'][0]['value'] . ', ' . $profile['main']->field_nombres['und'][0]['value'];
    }
  }

  $form['message_header'] = array(
    '#type' => 'fieldset',
    '#title' => t('Contratar a %s', array('%s' => $username)),
    '#weight' => -20,
  );
  $settings['form_contrato']['msg_container'] = '#contrato-msg';
  drupal_add_js($settings, 'setting');
  $form['mensajes'] = array(
    '#markup' => '<div id="contrato-msg"></div>',
    '#weight' => -18,
  );

  if (!empty($form['field_proyecto']['und']['#options'])) {
    $flag = flag_get_flag('conversaciones');

    foreach ($form['field_proyecto']['und']['#options'] as $idProyecto => $tituloProyecto) {
      if (
        ($idProyecto > 0) &&
        (!$flag->is_flagged($idProyecto, $to_user->uid))
      ) {
        unset($form['field_proyecto']['und']['#options'][$idProyecto]);
      }
    }
  }

  hide($form['field_tutor']);
  $form['field_tutor'] = array(
    '#type' => 'hidden',
    '#value' => $to_user->uid,
    '#attributes' => array(
      'id' => 'edit-field-tutor-und',
    ),
  );

  $form['actions']['cancel'] = array(
    '#type' => 'link',
    '#title' => t('Cancel'),
    '#href' => 'user/' . $to_user->uid,
    '#options' => array('attributes' => array('class' => 'btn')),
    '#weight' => 200,
  );

  return $form;
}

function tutoriame_contratar_contratar_para_page($node) {
  global $user;

  module_load_include('inc', 'node', 'node.pages');
  $form = node_add('contrato');

  $form['message_header'] = array(
    '#type' => 'fieldset',
    '#title' => t('Contratar para %s', array('%s' => $node->title)),
    '#weight' => -20,
  );

  hide($form['field_proyecto']);
  $form['field_proyecto'] = array(
    '#type' => 'hidden',
    '#value' => $node->nid,
    '#attributes' => array(
      'id' => 'edit-field-proyecto-und',
    ),
  );

  if (!empty($form['field_tutor']['und']['#options'])) {
    $idTutores = array();

    if ($conversaciones = flag_get_entity_flags('node', $node->nid, 'conversaciones')) {
      foreach ($conversaciones as $unaConversacion) {
        $idTutores[] = $unaConversacion->uid;
      }
    }

    foreach ($form['field_tutor']['und']['#options'] as $idTutor => $nombreTutor) {
      if (
        ($idTutor != '_none') &&
        ($idTutor > 0) &&
        (!in_array($idTutor, $idTutores))
      ) {
        unset($form['field_tutor']['und']['#options'][$idTutor]);
      }
    }
  }

  $form['actions']['cancel'] = array(
    '#type' => 'link',
    '#title' => t('Cancel'),
    '#href' => 'node/' . $node->nid,
    '#options' => array('attributes' => array('class' => 'btn')),
    '#weight' => 200,
  );

  return $form;
}

function tutoriame_contratar_contrato_aprobar_page($form, &$form_state, $node) {
  global $user;

  $username = $titulo = '';
  if ((is_object($node)) && ($node->type == 'contrato')) {
    if ($from_user = user_load($node->uid)) {
      $username = format_username($from_user);
      if ($profile = profile2_load_by_user($from_user)) {
        if (!empty($profile['main'])) {
          $username = $profile['main']->field_apellido['und'][0]['value'] . ', ' . $profile['main']->field_nombres['und'][0]['value'];
        }
      }
    }

    if ($proyecto = node_load($node->field_proyecto['und'][0]['target_id'])) {
      $titulo = $proyecto->title;
    }
  }

  $question = t('¿Estás seguro que deseas aprobar el contrato con %u por el proyecto %n?', array('%u' => $username, '%n' => $titulo));
  $path = array(
    'path' =>  'node/' . $node->field_proyecto['und'][0]['target_id'],
    'attributes' => array(
      'class' => 'btn',
    ),
  );
  $description = NULL;
  $yes = t('Aprobar');
  $no = t('Cancelar');

  $form = array(
    'message_header' => array(
      '#type' => 'fieldset',
      '#title' => $question,
      '#weight' => -20,
    ),
    '#access' => tutoriame_contratar_puede_aprobar_contrato($user, $node),
  );

  $form = confirm_form($form, $question, $path, $description, $yes, $no);

  return $form;
}

function tutoriame_contratar_contrato_rechazar_page($form, &$form_state, $node) {
  global $user;

  $username = $titulo = '';
  if ((is_object($node)) && ($node->type == 'contrato')) {
    if ($from_user = user_load($node->uid)) {
      $username = format_username($from_user);
      if ($profile = profile2_load_by_user($from_user)) {
        if (!empty($profile['main'])) {
          $username = $profile['main']->field_apellido['und'][0]['value'] . ', ' . $profile['main']->field_nombres['und'][0]['value'];
        }
      }
    }

    if ($proyecto = node_load($node->field_proyecto['und'][0]['target_id'])) {
      $titulo = $proyecto->title;
    }
  }

  $question = t('¿Estás seguro que deseas rechazar el contrato con %u por el proyecto %n?', array('%u' => $username, '%n' => $titulo));
  $path = array(
    'path' =>  'node/' . $node->field_proyecto['und'][0]['target_id'],
    'attributes' => array(
      'class' => 'btn',
    ),
  );
  $description = NULL;
  $yes = t('Rechazar');
  $no = t('Cancelar');

  $form = array(
    'message_header' => array(
      '#type' => 'fieldset',
      '#title' => $question,
      '#weight' => -20,
    ),
    '#access' => tutoriame_contratar_puede_rechazar_contrato($user, $node),
  );

  $form = confirm_form($form, $question, $path, $description, $yes, $no);

  return $form;
}

function tutoriame_contratar_contrato_aprobar_page_submit($form, &$form_state) {
  $contrato = $form_state['build_info']['args'][0];

  flujo_de_proyectos_aprobar_contrato($contrato);
  // lanzo el evento para las reglas

  $tutor = user_load($contrato->field_tutor['und'][0]['target_id']);
  $emprendedor = user_load($contrato->uid);
  $proyecto = node_load($contrato->field_proyecto['und'][0]['target_id']);
  rules_invoke_event('ttm_rules_tutor_acepta_contratacion', $tutor, $emprendedor, $contrato, $proyecto);

  $form_state['redirect'] = 'node/' . $contrato->field_proyecto['und'][0]['target_id'];
}

function tutoriame_contratar_contrato_rechazar_page_submit($form, &$form_state) {
  $contrato = $form_state['build_info']['args'][0];

  flujo_de_proyectos_rechazar_contrato($contrato);

  $tutor = user_load($contrato->field_tutor['und'][0]['target_id']);
  $emprendedor = user_load($contrato->uid);
  $proyecto = node_load($contrato->field_proyecto['und'][0]['target_id']);
  rules_invoke_event('ttm_rules_tutor_rechaza_contratacion', $tutor, $emprendedor, $contrato, $proyecto);

  $form_state['redirect'] = 'node/' . $contrato->field_proyecto['und'][0]['target_id'];
}

