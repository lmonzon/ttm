<?php

$plugin = array(
  'title' => t('Usuarios institución'),
  'description' => t('Muestra los usuarios en la misma institución que el usuario actual.'),
  'category' => t('Tutoriame'),
  'edit form' => 'usuarios_institucion_edit_form',
  'render callback' => 'usuarios_institucion_render',
  'admin info' => 'usuarios_institucion_admin_info',
  'defaults' => array(
    'cantidad' => 5,
    'image_style_usuarios' => '',
    'image_style_logo' => '',
  ),
  'required context' => array(
    new ctools_context_required(t('User'), 'user'),
  ),
);

/**
 * Edit form callback for the content type.
 */
function usuarios_institucion_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['cantidad'] = array(
    '#type' => 'textfield',
    '#title' => t('Cantidad'),
    '#description' => t('Cantidad de usuarios a mostrar'),
    '#size' => 4,
    '#default_value' => $conf['cantidad'],
  );

  $form['image_style_usuarios'] = array(
    '#type' => 'select',
    '#title' => t('Estilo de imagen para los usuarios'),
    '#options' => image_style_options(TRUE),
    '#default_value' => $conf['image_style_usuarios'],
  );

  $form['image_style_logo'] = array(
    '#type' => 'select',
    '#title' => t('Estilo de imagen para el logo'),
    '#options' => image_style_options(TRUE),
    '#default_value' => $conf['image_style_logo'],
  );

  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function usuarios_institucion_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Renders the block.
 */
function usuarios_institucion_render($subtype, $conf, $args, $context) {
  $cantidad = intval($conf['cantidad']);
  $image_style = $conf['image_style_usuarios'];
  $image_style_logo = $conf['image_style_logo'];

  $user = $context[0]->data;
  $institucion = _usuarios_institucion_get_institucion($user->uid);
  if ($institucion) {
    $usuarios = _usuarios_institucion_get_usuarios($institucion->user->getIdentifier(), $cantidad);
    if ($usuarios) {
      foreach ($usuarios as $perfil) {
        $link = l($perfil->user->label(), 'user/' . $perfil->user->getIdentifier(), array('absolute' => TRUE));
        $image = usuarios_get_imagen($perfil->value(), $image_style, 'field_imagen_perfil');
        $rows[] = theme('usuarios_institucion_user', array('image' => render($image), 'link' => $link));
      }

      $logo = usuarios_get_imagen($institucion->value(), $image_style_logo, 'field_imagen');

      $block = new stdClass();
      $block->module = 'usuarios';
      $block->delta = $subtype;
      $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Usuarios institución');
      $block->content = theme('usuarios_institucion', array('logo' => render($logo), 'usuarios' => $rows));

      return $block;
    }
  }
}

/**
 * Devuelve la institucion del usuario, o FALSE si no tiene.
 */
function _usuarios_institucion_get_institucion($uid) {
  $perfil = profile2_load_by_user($uid, 'main');
  if ($perfil) {
    $main_profile = entity_metadata_wrapper('profile2', $perfil);
    if (
      ($main_profile->__isset('field_institucion')) &&
      (is_object($main_profile->field_institucion->value()))
    ) {
      $institucion_id = $main_profile->field_institucion->value()->uid;
      $perfil = profile2_load_by_user($institucion_id, 'institucion');
      if ($perfil) {
        return entity_metadata_wrapper('profile2', $perfil);
      }
    }
  }
  return FALSE;
}

/**
 * Devuelve el listado de usuarios de la misma institucion.
 */
function _usuarios_institucion_get_usuarios($institucion, $max) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'profile2')
    ->entityCondition('bundle', 'main')
    ->fieldCondition('field_institucion', 'target_id', $institucion, '=')
    ->propertyOrderBy('created', 'DESC')
    ->range(0, $max);
  $result = $query->execute();
  $usuarios = array();
  if (isset($result['profile2'])) {
    foreach ($result['profile2'] as $pid => $data) {
      $usuarios[] = entity_metadata_wrapper('profile2', $pid);
    }
  }
  return $usuarios;
}

