<?php
/**
 * @file
 * taxonomias.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomias_taxonomy_default_vocabularies() {
  return array(
    'auspicios' => array(
      'name' => 'Auspicios',
      'machine_name' => 'auspicios',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
