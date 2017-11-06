<?php
/**
 * @file
 * foros.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function foros_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-forums-field_institucion'
  $field_instances['taxonomy_term-forums-field_institucion'] = array(
    'bundle' => 'forums',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_institucion',
    'label' => 'institucion',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('institucion');

  return $field_instances;
}
