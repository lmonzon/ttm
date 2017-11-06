<?php
/**
 * @file
 * contrato.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function contrato_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validar Fecha Fin Contrato';
  $rule->name = 'validar_fecha_fin_contrato';
  $rule->field_name = 'field_fecha_acordada';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'contrato';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if (!validar_fecha_fin_contrato($this->value, $this->instance, $this->field, $this->entity)) {
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
  $rule->error_message = 'La fecha de fin acordada debe ser mayor al día de la fecha y previa a la finalización del proyecto.';
  $export['validar_fecha_fin_contrato'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validar Fecha Fin Videoconferencia';
  $rule->name = 'validar_fecha_fin_videoconferenc';
  $rule->field_name = 'field_fechas_videoconferencia';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'contrato';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if (!validar_fecha_fin_videoconferencia($this->value, $this->instance, $this->field, $this->entity)) {
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
  $rule->error_message = 'La fecha de fin de la videoconferencia debe ser mayor al día de la fecha y previa a la finalización del contrato.';
  $export['validar_fecha_fin_videoconferenc'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validar Fecha Inicio Contrato';
  $rule->name = 'validar_fecha_inicio_contrato';
  $rule->field_name = 'field_fecha_acordada';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'contrato';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if (!validar_fecha_inicio_contrato($this->value, $this->instance, $this->field, $this->entity)) {
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
  $rule->error_message = 'La fecha de inicio acordada debe ser mayor al día de la fecha y posterior al inicio del proyecto.';
  $export['validar_fecha_inicio_contrato'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validar Fecha Inicio Videoconferencia';
  $rule->name = 'validar_fecha_inicio_videoconfer';
  $rule->field_name = 'field_fechas_videoconferencia';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'contrato';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if (!validar_fecha_inicio_videoconferencia($this->value, $this->instance, $this->field, $this->entity)) {
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
  $rule->error_message = 'La fecha de inicio de las videoconferencias deben ser mayores al día de la fecha y posterior al inicio del contrato.';
  $export['validar_fecha_inicio_videoconfer'] = $rule;

  return $export;
}
