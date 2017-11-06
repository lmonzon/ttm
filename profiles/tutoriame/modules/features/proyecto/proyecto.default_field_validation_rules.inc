<?php
/**
 * @file
 * proyecto.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function proyecto_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validar Fecha Fin Proyecto';
  $rule->name = 'validar_fecha_fin_proyecto';
  $rule->field_name = 'field_fecha_inicio';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'proyecto';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if (!validar_fecha_fin_proyecto($this->value, $this->instance, $this->field)) {
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      8 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      2 => 0,
      1 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'La fecha de fin de la ejecución del proyecto debe ser mayor al día de la fecha.';
  $export['validar_fecha_fin_proyecto'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validar Fecha Inicio Proyecto';
  $rule->name = 'validar_fecha_inicio_proyecto';
  $rule->field_name = 'field_fecha_inicio';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'proyecto';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if (!validar_fecha_inicio_proyecto($this->value, $this->instance, $this->field)) {
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      8 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      2 => 0,
      1 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'La fecha de inicio de la ejecución del proyecto debe ser mayor al día de la fecha.';
  $export['validar_fecha_inicio_proyecto'] = $rule;

  return $export;
}
