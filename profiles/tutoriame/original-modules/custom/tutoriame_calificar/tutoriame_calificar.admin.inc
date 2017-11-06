<?php

function tutoriame_calificar_admin_settings() {
  $form = array();

  $form['settings'] = array(
    '#type' => 'vertical_tabs',
  );

  /**
   * Roles que podrán calificar
   */
  $form['roles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Roles'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 10,
    '#group' => 'settings',
  );
  $roles = user_roles();
  $form['roles']['tutoriame_calificar_roles_califican'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Roles que pueden calificar'),
    '#description' => t('Seleccione los roles cuyos usuarios podrán calificar nodos.'),
    '#default_value' => variable_get('tutoriame_calificar_roles_califican', array()),
    '#options' => $roles,
  );

  /**
   * Tipos de contenido para los cuales calificar
   */
  $form['node_types'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tipos de contenido'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 20,
    '#group' => 'settings',
  );
  $form['node_types']['tutoriame_calificar_tipos_contenido'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Tipos de contenido para los cuales calificar'),
    '#description' => t('Tipos de contenido para los cuales se podrá calificar a otros usuarios.'),
    '#default_value' => variable_get('tutoriame_calificar_tipos_contenido', array()),
    '#options' => node_type_get_names(),
  );

  $form['#submit'][] = 'tutoriame_calificar_admin_settings_submit';

  return system_settings_form($form);
}

function tutoriame_calificar_admin_settings_submit() {
  drupal_theme_rebuild();
}

