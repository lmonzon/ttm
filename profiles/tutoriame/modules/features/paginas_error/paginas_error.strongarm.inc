<?php
/**
 * @file
 * paginas_error.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function paginas_error_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'acceso-denegado';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'contenido-no-encontrado';
  $export['site_404'] = $strongarm;

  return $export;
}
