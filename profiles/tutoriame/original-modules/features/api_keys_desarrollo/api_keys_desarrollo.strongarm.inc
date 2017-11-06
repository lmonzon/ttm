<?php
/**
 * @file
 * api_keys_desarrollo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function api_keys_desarrollo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opentok_api_key';
  $strongarm->value = '44883172';
  $export['opentok_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opentok_api_secret';
  $strongarm->value = 'd43cbfad4715b67a6fc31d5d3287f9fc52e5f4e2';
  $export['opentok_api_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opentok_staging';
  $strongarm->value = 0;
  $export['opentok_staging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_private_key';
  $strongarm->value = '6Lcmc_MSAAAAAI9RT_F_DWGOzy39JEPSZWWYWE7W';
  $export['recaptcha_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_public_key';
  $strongarm->value = '6Lcmc_MSAAAAAGex6M1rEesDmm4noF5SR2ImLZxk';
  $export['recaptcha_public_key'] = $strongarm;

  return $export;
}
