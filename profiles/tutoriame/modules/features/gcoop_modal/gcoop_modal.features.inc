<?php
/**
 * @file
 * gcoop_modal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gcoop_modal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
