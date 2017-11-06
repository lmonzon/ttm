<?php
/**
 * @file
 * usuarios.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function usuarios_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'validar_cuit_cuil';
  $rule->name = 'valida_cuit_cuil';
  $rule->field_name = 'field_empresa_cuit_cuil';
  $rule->col = 'value';
  $rule->entity_type = 'profile2';
  $rule->bundle = 'emprendedor';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if(!validar_cuit_cuil($this->value)){
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
  $rule->error_message = 'La CUIT/CUIL ingresada en [field-name] no es válida.';
  $export['valida_cuit_cuil'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'validar_cuit_cuil';
  $rule->name = 'validador_cuit_cuil';
  $rule->field_name = 'field_cuit_cuil';
  $rule->col = 'value';
  $rule->entity_type = 'profile2';
  $rule->bundle = 'emprendedor';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if(!validar_cuit_cuil($this->value)){
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
  $rule->error_message = 'La CUIT/CUIL ingresada en [field-name] no es válida.';
  $export['validador_cuit_cuil'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'validar_cbu';
  $rule->name = 'validar_cbu';
  $rule->field_name = 'field_cbu';
  $rule->col = 'value';
  $rule->entity_type = 'field_collection_item';
  $rule->bundle = 'field_datos_cuenta_bancaria';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if(!validarCBU($this->value)){
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      6 => 0,
      7 => 0,
      5 => 0,
      8 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'La CBU ingresada no es válida';
  $export['validar_cbu'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'validar_cuit_cuil';
  $rule->name = 'validar_cuit_cuil';
  $rule->field_name = 'field_cuit_cuil';
  $rule->col = 'value';
  $rule->entity_type = 'profile2';
  $rule->bundle = 'tutor';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if(!validar_cuit_cuil($this->value)){
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
  $rule->error_message = 'La CUIT/CUIL ingresada en [field-name] no es válida.';
  $export['validar_cuit_cuil'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validar Fecha Nacimiento';
  $rule->name = 'validar_fecha_nacimiento';
  $rule->field_name = 'field_fecha_de_nacimiento';
  $rule->col = 'value';
  $rule->entity_type = 'profile2';
  $rule->bundle = 'emprendedor';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if (!validar_fecha_nacimiento($this->value, $this->instance, $this->field)) {
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
  $rule->error_message = 'El valor ingresado en [field-name] no es válido.';
  $export['validar_fecha_nacimiento'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Validar Fecha Nacimiento';
  $rule->name = 'validar_fecha_nacimiento_tutor';
  $rule->field_name = 'field_fecha_de_nacimiento';
  $rule->col = 'value';
  $rule->entity_type = 'profile2';
  $rule->bundle = 'tutor';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if (!validar_fecha_nacimiento($this->value, $this->instance, $this->field)) {
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
  $rule->error_message = 'El valor ingresado en [field-name] no es válido.';
  $export['validar_fecha_nacimiento_tutor'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'validar_nro_cuenta';
  $rule->name = 'validar_nro_cuenta';
  $rule->field_name = 'field_numero_cuenta';
  $rule->col = 'value';
  $rule->entity_type = 'field_collection_item';
  $rule->bundle = 'field_datos_cuenta_bancaria';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if(strlen($this->value) > 0 && !is_numeric($this->value)){
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      6 => 0,
      7 => 0,
      5 => 0,
      8 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'El número de cuenta contiene caracteres inválidos';
  $export['validar_nro_cuenta'] = $rule;

  return $export;
}
