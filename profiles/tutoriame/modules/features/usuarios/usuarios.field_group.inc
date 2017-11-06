<?php
/**
 * @file
 * usuarios.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function usuarios_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_empresa|profile2|emprendedor|form';
  $field_group->group_name = 'group_datos_empresa';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'emprendedor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos de la empresa / emprendimiento',
    'weight' => '2',
    'children' => array(
      0 => 'field_consultora_si_no',
      1 => 'field_datos_cuenta_bancaria',
      2 => 'field_descripcion_empresa',
      3 => 'field_domicilio',
      4 => 'field_dotacion_empresa',
      5 => 'field_empresa_cuit_cuil',
      6 => 'field_logo_empresa',
      7 => 'field_medio_conocio_ttm',
      8 => 'field_nombre_comercial',
      9 => 'field_otro_ramo_o_actividad',
      10 => 'field_pagina_web',
      11 => 'field_ramo_o_actividad',
      12 => 'field_razon_social',
      13 => 'field_responsabilidad_ante_iva',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos de la empresa / emprendimiento',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-datos-empresa field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_datos_empresa|profile2|emprendedor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_personales_tutor|profile2|tutor|form';
  $field_group->group_name = 'group_datos_personales_tutor';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'tutor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos personales',
    'weight' => '1',
    'children' => array(
      0 => 'field_cuit_cuil',
      1 => 'field_fecha_de_nacimiento',
      2 => 'field_numero_de_documento',
      3 => 'field_puesto',
      4 => 'field_skype',
      5 => 'field_telefonos',
      6 => 'field_tipo_de_docuemento',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos personales',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-datos-personales-tutor field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_datos_personales_tutor|profile2|tutor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_personales|profile2|emprendedor|form';
  $field_group->group_name = 'group_datos_personales';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'emprendedor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos personales',
    'weight' => '1',
    'children' => array(
      0 => 'field_cuit_cuil',
      1 => 'field_fecha_de_nacimiento',
      2 => 'field_numero_de_documento',
      3 => 'field_puesto',
      4 => 'field_skype',
      5 => 'field_telefonos',
      6 => 'field_tipo_de_docuemento',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos personales',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-datos-personales field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_datos_personales|profile2|emprendedor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_experiencia_laboral|profile2|tutor|form';
  $field_group->group_name = 'group_experiencia_laboral';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'tutor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Experiencia laboral',
    'weight' => '4',
    'children' => array(
      0 => 'field_experiencia_laboral',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Experiencia laboral',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-experiencia-laboral field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_experiencia_laboral|profile2|tutor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formacion|profile2|tutor|form';
  $field_group->group_name = 'group_formacion';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'tutor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Formación',
    'weight' => '3',
    'children' => array(
      0 => 'field_formacion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Formación',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-formacion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_formacion|profile2|tutor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_servicio_tutoria|profile2|tutor|form';
  $field_group->group_name = 'group_servicio_tutoria';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'tutor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Servicio de tutoría',
    'weight' => '2',
    'children' => array(
      0 => 'field_categoria',
      1 => 'field_disponibilidad',
      2 => 'field_habilidades_requeridas',
      3 => 'field_resumen_del_servicio',
      4 => 'field_tarifa',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Servicio de tutoría',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-servicio-tutoria field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_servicio_tutoria|profile2|tutor|form'] = $field_group;

  return $export;
}
