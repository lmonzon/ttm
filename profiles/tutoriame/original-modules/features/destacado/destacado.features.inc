<?php
/**
 * @file
 * destacado.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function destacado_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function destacado_node_info() {
  $items = array(
    'destacado' => array(
      'name' => t('Destacado'),
      'base' => 'node_content',
      'description' => t('Contenidos destacados'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
