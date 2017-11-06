<?php

/**
 * @file
 * Views 3 support for Location calle.
 */

/**
 * Implements hook_views_data().
 */
function location_calle_numero_views_data() {
  // ----------------------------------------------------------------
  // location_calle table -- basic table information.

  // Define the base group of this table. Fields that don't
  // have a group defined will go into this field by default.

  $data['location_calle_numero']['table']['group'] = t('Location', array(), array('context' => 'geolocation'));

  // Join location_calle to all the tables that would be useful
  $data['location_calle_numero']['table']['join'] = array(
    // location_calle links to location via lid.
    'location' => array(
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_calle links to node through location_instance via lid.
    'node' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_calle links to node_revision through location_instance via lid.
    'node_revision' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
    // location_calle links to users through location_instance via lid.
    'users' => array(
      'left_table' => 'location_instance',
      'left_field' => 'lid',
      'field' => 'lid',
    ),
  );

  // ----------------------------------------------------------------
  // location_calle table -- fields

  $data['location_calle_numero']['calle_numero'] = array(
    'title' => t('número'),
    'help' => t('The calle number of the selected location.'),
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
