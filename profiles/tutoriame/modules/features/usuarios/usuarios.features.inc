<?php
/**
 * @file
 * usuarios.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function usuarios_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
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
  if ($module == "password_policy" && $api == "default_password_policy") {
    return array("version" => "1");
  }
  if ($module == "profile2_regpath" && $api == "profile2_regpath") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function usuarios_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function usuarios_default_profile2_type() {
  $items = array();
  $items['emprendedor'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "emprendedor",
    "label" : "Emprendedor",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['institucion'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "institucion",
    "label" : "Institucion",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true }
  }');
  $items['tutor'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "tutor",
    "label" : "Tutor",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}
