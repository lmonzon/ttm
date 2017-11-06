<?php
/**
 * @file
 * pagina.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pagina_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pagina_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pagina_node_info() {
  $items = array(
    'pagina' => array(
      'name' => t('Página'),
      'base' => 'node_content',
      'description' => t('Contenido estático'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
