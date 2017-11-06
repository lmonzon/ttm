<?php

function tutoriame_calificar_calificar_page($node) {
  global $user;

  module_load_include('inc', 'node', 'node.pages');
  $form = node_add('calificacion');

  $form['message_header'] = array(
    '#type' => 'fieldset',
    '#title' => t('Calificar el proyecto %s', array('%s' => $node->title)),
    '#weight' => -20,
  );

  $form['actions']['cancel'] = array(
    '#type' => 'link',
    '#title' => t('Cancel'),
    '#href' => 'node/' . $node->nid,
    '#options' => array('attributes' => array('class' => 'btn')),
    '#weight' => 200,
  );

  return $form;
}

