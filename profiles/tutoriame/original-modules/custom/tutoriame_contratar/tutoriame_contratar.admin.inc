<?php

function tutoriame_contratar_admin_settings() {
  $form = array();

  $form['settings'] = array(
    '#type' => 'vertical_tabs',
  );

  /**
   * Roles que podrán contratar y ser contratados
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
  $form['roles']['tutoriame_contratar_roles_contratados'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Roles que pueden ser contratados por los usuarios'),
    '#description' => t('Seleccione los roles cuyos usuarios podrán ser contratados por otros usuarios.'),
    '#default_value' => variable_get('tutoriame_contratar_roles_contratados', array()),
    '#options' => $roles,
  );
  $form['roles']['tutoriame_contratar_roles_contratan'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Roles que pueden contratar a otros usuarios'),
    '#description' => t('Seleccione los roles cuyos usuarios podrán contratar a otros usuarios.'),
    '#default_value' => variable_get('tutoriame_contratar_roles_contratan', array()),
    '#options' => $roles,
  );

  /**
   * Tipos de contenido para los cuales contratar
   */
  $form['node_types'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tipos de contenido'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 20,
    '#group' => 'settings',
  );
  $form['node_types']['tutoriame_contratar_tipos_contenido'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Tipos de contenido para los cuales contratar'),
    '#description' => t('Tipos de contenido para los cuales se podrá contratar a otros usuarios.'),
    '#default_value' => variable_get('tutoriame_contratar_tipos_contenido', array()),
    '#options' => node_type_get_names(),
  );

  $form['#submit'][] = 'tutoriame_contratar_admin_settings_submit';

  return system_settings_form($form);
}

function tutoriame_contratar_admin_settings_submit() {
  drupal_theme_rebuild();
}

