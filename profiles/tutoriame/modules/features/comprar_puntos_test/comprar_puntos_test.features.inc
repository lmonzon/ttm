<?php
/**
 * @file
 * comprar_puntos_test.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function comprar_puntos_test_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
