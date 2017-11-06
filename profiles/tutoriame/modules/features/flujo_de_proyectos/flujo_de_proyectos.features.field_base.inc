<?php
/**
 * @file
 * flujo_de_proyectos.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function flujo_de_proyectos_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_estado_adm_proyecto'
  $field_bases['field_estado_adm_proyecto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_estado_adm_proyecto',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'workflowfield',
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'allowed_values_string' => '10 | (creation)
11 | Calificado
12 | Facturado
13 | Pagado',
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => 0,
          3 => 0,
          4 => 0,
          8 => 0,
        ),
      ),
      'profile2_private' => FALSE,
      'watchdog_log' => 1,
      'wid' => 3,
      'widget' => array(
        'comment' => 0,
        'name_as_title' => 1,
        'options' => 'select',
        'schedule' => 0,
        'schedule_timezone' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'workflow',
  );

  // Exported field_base: 'field_estado_del_contrato'
  $field_bases['field_estado_del_contrato'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_estado_del_contrato',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'workflowfield',
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'allowed_values_string' => '5 | (creation)
6 | Pendiente
7 | Aceptado
8 | Rechazado',
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => 0,
          3 => 0,
          4 => 0,
          8 => 0,
        ),
      ),
      'profile2_private' => FALSE,
      'watchdog_log' => 1,
      'wid' => 2,
      'widget' => array(
        'comment' => 0,
        'name_as_title' => 1,
        'options' => 'select',
        'schedule' => 0,
        'schedule_timezone' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'workflow',
  );

  // Exported field_base: 'field_estado_del_proyecto'
  $field_bases['field_estado_del_proyecto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_estado_del_proyecto',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'workflowfield',
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'allowed_values_string' => '1 | (creation)
2 | Abierto
3 | En curso
4 | Finalizado
9 | Vencido',
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => 0,
          3 => 0,
          4 => 0,
          8 => 0,
        ),
      ),
      'profile2_private' => FALSE,
      'watchdog_log' => 1,
      'wid' => 1,
      'widget' => array(
        'comment' => 0,
        'name_as_title' => 1,
        'options' => 'select',
        'schedule' => 0,
        'schedule_timezone' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'workflow',
  );

  return $field_bases;
}
