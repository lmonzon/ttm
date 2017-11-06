<?php
/**
 * @file
 * usuarios.profile2_regpath.inc
 */

/**
 * Implements hook_default_profile2_regpath().
 */
function usuarios_default_profile2_regpath() {
  $export = array();

  $regpath = new stdClass();
  $regpath->disabled = FALSE; /* Edit this to true to make a default regpath disabled initially */
  $regpath->api_version = 1;
  $regpath->profile_type = 'emprendedor';
  $regpath->path = 'emprendedor';
  $regpath->roles = 'a:4:{i:3;s:1:"3";i:4;i:0;i:5;i:0;i:6;i:0;}';
  $regpath->status = 1;
  $regpath->weight = 0;
  $regpath->misc = 'a:9:{s:9:"path_type";s:8:"separate";s:8:"tab_text";s:23:"Register as emprendedor";s:13:"fieldset_wrap";i:1;s:13:"custom_titles";i:0;s:11:"login_title";s:12:"User Account";s:14:"register_title";s:12:"User Account";s:14:"password_title";s:12:"User Account";s:20:"confirmation_display";i:0;s:20:"confirmation_message";s:0:"";}';
  $export['emprendedor'] = $regpath;

  $regpath = new stdClass();
  $regpath->disabled = FALSE; /* Edit this to true to make a default regpath disabled initially */
  $regpath->api_version = 1;
  $regpath->profile_type = 'main';
  $regpath->path = '';
  $regpath->roles = 'a:3:{i:3;i:0;i:4;i:0;i:5;i:0;}';
  $regpath->status = 0;
  $regpath->weight = 0;
  $regpath->misc = 'a:9:{s:9:"path_type";s:8:"separate";s:8:"tab_text";s:16:"Register as main";s:13:"fieldset_wrap";i:0;s:13:"custom_titles";i:0;s:11:"login_title";s:12:"User Account";s:14:"register_title";s:12:"User Account";s:14:"password_title";s:12:"User Account";s:20:"confirmation_display";i:0;s:20:"confirmation_message";s:0:"";}';
  $export['main'] = $regpath;

  $regpath = new stdClass();
  $regpath->disabled = FALSE; /* Edit this to true to make a default regpath disabled initially */
  $regpath->api_version = 1;
  $regpath->profile_type = 'tutor';
  $regpath->path = 'tutor';
  $regpath->roles = 'a:4:{i:4;s:1:"4";i:3;i:0;i:5;i:0;i:6;i:0;}';
  $regpath->status = 1;
  $regpath->weight = 0;
  $regpath->misc = 'a:9:{s:9:"path_type";s:8:"separate";s:8:"tab_text";s:17:"Register as tutor";s:13:"fieldset_wrap";i:1;s:13:"custom_titles";i:0;s:11:"login_title";s:12:"User Account";s:14:"register_title";s:12:"User Account";s:14:"password_title";s:12:"User Account";s:20:"confirmation_display";i:0;s:20:"confirmation_message";s:0:"";}';
  $export['tutor'] = $regpath;

  return $export;
}
