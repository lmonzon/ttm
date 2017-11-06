<?php
/**
 * @file
 * formatos_fecha.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function formatos_fecha_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_formatos_fecha_dd_de_mes_aaaa';
  $strongarm->value = 'd \\d\\e F Y';
  $export['date_format_formatos_fecha_dd_de_mes_aaaa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_formatos_fecha_dd_mm_aa';
  $strongarm->value = 'd/m/y';
  $export['date_format_formatos_fecha_dd_mm_aa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_formatos_fecha_dd_mm_aaaa';
  $strongarm->value = 'd.m.Y';
  $export['date_format_formatos_fecha_dd_mm_aaaa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_formatos_fecha_dia_dd_mm_aa';
  $strongarm->value = 'D d/m/y';
  $export['date_format_formatos_fecha_dia_dd_mm_aa'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_formatos_fecha_dia_mes_aaaa_a_las_hh_mm';
  $strongarm->value = 'd.m.Y \\a \\l\\a\\s H:i \\h\\s';
  $export['date_format_formatos_fecha_dia_mes_aaaa_a_las_hh_mm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_formatos_fecha_hh_mm';
  $strongarm->value = 'H:i';
  $export['date_format_formatos_fecha_hh_mm'] = $strongarm;

  return $export;
}
