<?php
/**
 * @file
 * flujo_de_proyectos.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function flujo_de_proyectos_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-contrato-field_estado_del_contrato'
  $field_instances['node-contrato-field_estado_del_contrato'] = array(
    'bundle' => 'contrato',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estado_del_contrato',
    'label' => 'Estado',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'workflowfield',
      'settings' => array(
        'comment' => 1,
        'name_as_title' => 1,
      ),
      'type' => 'workflow_default',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-proyecto-field_estado_adm_proyecto'
  $field_instances['node-proyecto-field_estado_adm_proyecto'] = array(
    'bundle' => 'proyecto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estado_adm_proyecto',
    'label' => 'Estado administrativo del Proyecto',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'comment' => 1,
        'name_as_title' => 1,
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-proyecto-field_estado_del_proyecto'
  $field_instances['node-proyecto-field_estado_del_proyecto'] = array(
    'bundle' => 'proyecto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estado_del_proyecto',
    'label' => 'Estado del Proyecto',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'comment' => 1,
        'name_as_title' => 1,
      ),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Estado');
  t('Estado administrativo del Proyecto');
  t('Estado del Proyecto');

  return $field_instances;
}
