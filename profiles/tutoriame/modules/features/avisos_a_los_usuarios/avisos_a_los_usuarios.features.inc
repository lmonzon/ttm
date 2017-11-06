<?php
/**
 * @file
 * avisos_a_los_usuarios.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function avisos_a_los_usuarios_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
