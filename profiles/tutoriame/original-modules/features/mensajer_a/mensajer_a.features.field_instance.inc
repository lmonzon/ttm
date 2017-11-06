<?php
/**
 * @file
 * mensajer_a.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mensajer_a_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'privatemsg_message-privatemsg_message-field_adjunto'
  $field_instances['privatemsg_message-privatemsg_message-field_adjunto'] = array(
    'bundle' => 'privatemsg_message',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'privatemsg_message',
    'field_name' => 'field_adjunto',
    'label' => 'Archivos',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'privatemsg-adjuntos',
      'file_extensions' => 'txt pdf doc docx xls xlsx ppt pptx pps odt ods odp',
      'max_filesize' => '',
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
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'privatemsg_message-privatemsg_message-field_proyecto_consultado'
  $field_instances['privatemsg_message-privatemsg_message-field_proyecto_consultado'] = array(
    'bundle' => 'privatemsg_message',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'privatemsg_message',
    'field_name' => 'field_proyecto_consultado',
    'label' => 'Proyecto',
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivos');
  t('Proyecto');

  return $field_instances;
}
