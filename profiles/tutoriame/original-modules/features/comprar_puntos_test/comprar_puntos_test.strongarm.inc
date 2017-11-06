<?php
/**
 * @file
 * comprar_puntos_test.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function comprar_puntos_test_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_payment_credit_gateway';
  $strongarm->value = 'test_gateway';
  $export['uc_payment_credit_gateway'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_pg_test_gateway_cc_txn_type';
  $strongarm->value = 'auth_capture';
  $export['uc_pg_test_gateway_cc_txn_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_pg_test_gateway_enabled';
  $strongarm->value = 1;
  $export['uc_pg_test_gateway_enabled'] = $strongarm;

  return $export;
}
