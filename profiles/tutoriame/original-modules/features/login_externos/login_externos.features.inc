<?php
/**
 * @file
 * login_externos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function login_externos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "oauthconnector" && $api == "oauthconnector") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
