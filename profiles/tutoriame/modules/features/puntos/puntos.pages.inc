<?php

function puntos_comprar_page($form, &$form_state) {
  global $user;

  module_load_include('inc', 'uuid', 'uuid.entitiy');
  drupal_add_js(drupal_get_path('module', 'puntos') . '/js/puntos_comprar_page.js');

  $form = array(
    'message_header' => array(
      '#type' => 'fieldset',
      '#title' => t('Comprar Créditos'),
      '#weight' => -20,
      '#attributes' => array('class' => array('comprar-puntos-titulo')),
    ),
    '#access' => user_access('access puntos comprar'),
    '#form_placeholder' => FALSE,
  );
  $form['subtitulo'] = array(
    '#type' => 'item',
    '#weight' => -18,
    '#markup' => 'Datos de Mi Cuenta',
  );

  $form['saldo_inicial'] = array(
    '#type' => 'textfield',
    '#title' => t('Saldo inicial en Créditos'),
    '#size' => 50,
    '#maxlength' => 255,
    '#weight' => -15,
    '#disabled' => TRUE,
    '#value' => userpoints_get_current_points($user->uid),
  );
  $form['puntos'] = array(
    '#type' => 'textfield',
    '#title' => t('Créditos a comprar'),
    '#size' => 50,
    '#maxlength' => 255,
    '#weight' => -10,
    '#default_value' => 0,
  );
  $form['importe'] = array(
    '#type' => 'textfield',
    '#title' => t('Importe a abonar'),
    '#size' => 50,
    '#maxlength' => 255,
    '#weight' => -5,
    '#disabled' => TRUE,
    '#value' => 0,
  );
  $form['saldo_final'] = array(
    '#type' => 'textfield',
    '#title' => t('Saldo final en Créditos'),
    '#size' => 50,
    '#maxlength' => 255,
    '#weight' => 0,
    '#disabled' => TRUE,
    '#value' => userpoints_get_current_points($user->uid),
  );

  $importe_unitario = 0;
  if (
    ($productos_punto = entity_uuid_load('node', array(PUNTOS_UUID_PRODUCTO))) &&
    (is_array($productos_punto))
  ) {
    $producto_punto = array_shift($productos_punto);
    $importe_unitario = $producto_punto->price;
  }
  $form['importe_unitario'] = array(
    '#type' => 'hidden',
    '#attributes' => array('id' => 'importe_unitario'),
    '#value' => $importe_unitario,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Pagar'),
    '#weight' => 15,
    '#validate' => array('puntos_comprar_page_validate'),
    '#submit' => array('puntos_comprar_page_submit'),
  );
  $form['#submit'] = array('puntos_comprar_page_submit');
  $form['#validate'] = array('puntos_comprar_page_validate');
  $form['actions']['cancel'] = array(
    '#type' => 'link',
    '#title' => t('Cancel'),
    '#href' => '<front>',
    '#options' => array('attributes' => array('class' => 'btn')),
    '#weight' => 200,
  );

  return $form;
}

function puntos_comprar_page_validate($form, &$form_state) {
  $puntos = intval($form_state['values']['puntos']);

  if ($puntos <= 0) {
    form_set_error('puntos', t('Debe indicar la cantidad de puntos a comprar.'));
  }
}

function puntos_comprar_page_submit($form, &$form_state) {
  if (
    ($productos_punto = entity_uuid_load('node', array(PUNTOS_UUID_PRODUCTO))) &&
    (is_array($productos_punto))
  ) {
    $producto_punto = array_shift($productos_punto);

    uc_cart_add_item($producto_punto->nid, $form_state['values']['puntos'], NULL, NULL, false);

    drupal_goto('cart/checkout');
  }
}

