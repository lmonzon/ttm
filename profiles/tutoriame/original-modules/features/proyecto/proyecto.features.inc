<?php
/**
 * @file
 * proyecto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function proyecto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function proyecto_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function proyecto_node_info() {
  $items = array(
    'contrato' => array(
      'name' => t('Contrato'),
      'base' => 'node_content',
      'description' => t('Contratos entre los Emprendedores y Tutores para los Proyectos'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'proyecto' => array(
      'name' => t('Proyecto'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre del proyecto'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
