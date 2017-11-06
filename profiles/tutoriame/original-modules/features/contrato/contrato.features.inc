<?php
/**
 * @file
 * contrato.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contrato_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function contrato_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
