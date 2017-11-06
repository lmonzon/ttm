<?php

/**
 * @file
 * Views 3 support for Location piso.
 */

/**
 * Implements hook_views_data().
 */
function location_piso_views_data() {
  // ----------------------------------------------------------------
  // location_piso table -- basic table information.

  // Define the base group of this table. Fields that don't
  // have a group defined will go into this field by default.

  $data['location_piso']['table']['group'] = t('Location', array(), array('context' => 'geolocation'));

  // Join location_piso to all the tables that would be useful
  $data['location_piso']['table']['join'] = array(
    // location_piso links to location via lid.
    'location' => array(
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_piso links to node through location_instance via lid.
    'node' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_piso links to node_revision through location_instance via lid.
    'node_revision' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_piso links to users through location_instance via lid.
    'users' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
  );

  // ----------------------------------------------------------------
  // location_piso table -- fields

  $data['location_piso']['piso'] = array(
    'title' => t('piso'),
    'help' => t('The piso number of the selected location.'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'empty field name' => t('None'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'allow empty' => TRUE,
    ),
  );

  return $data;
}
