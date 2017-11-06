<?php
/**
 * @file
 * usuarios.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function usuarios_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_forum_disabled';
  $strongarm->value = FALSE;
  $export['advanced_forum_forum_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_add_captcha_description';
  $strongarm->value = 1;
  $export['captcha_add_captcha_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_administration_mode';
  $strongarm->value = 0;
  $export['captcha_administration_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_allow_on_admin_pages';
  $strongarm->value = 0;
  $export['captcha_allow_on_admin_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge';
  $strongarm->value = 'captcha/Math';
  $export['captcha_default_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_validation';
  $strongarm->value = '1';
  $export['captcha_default_validation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_en';
  $strongarm->value = 'Please, type the following code.';
  $export['captcha_description_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_es';
  $strongarm->value = 'Por favor, ingrese el código que ve a continuación.';
  $export['captcha_description_es'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_enable_stats';
  $strongarm->value = 0;
  $export['captcha_enable_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_log_wrong_responses';
  $strongarm->value = 0;
  $export['captcha_log_wrong_responses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_persistence';
  $strongarm->value = '1';
  $export['captcha_persistence'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_default_country';
  $strongarm->value = 'ar';
  $export['location_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_use_province_abbreviation';
  $strongarm->value = '0';
  $export['location_use_province_abbreviation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_confirm_email_at_registration';
  $strongarm->value = '0';
  $export['logintoboggan_confirm_email_at_registration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_immediate_login_on_register';
  $strongarm->value = 0;
  $export['logintoboggan_immediate_login_on_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_login_successful_message';
  $strongarm->value = '0';
  $export['logintoboggan_login_successful_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_login_with_email';
  $strongarm->value = '0';
  $export['logintoboggan_login_with_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_minimum_password_length';
  $strongarm->value = '0';
  $export['logintoboggan_minimum_password_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_override_destination_parameter';
  $strongarm->value = 1;
  $export['logintoboggan_override_destination_parameter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_pre_auth_role';
  $strongarm->value = '9';
  $export['logintoboggan_pre_auth_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_purge_unvalidated_user_interval';
  $strongarm->value = '0';
  $export['logintoboggan_purge_unvalidated_user_interval'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_redirect_on_confirm';
  $strongarm->value = '';
  $export['logintoboggan_redirect_on_confirm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_redirect_on_register';
  $strongarm->value = '';
  $export['logintoboggan_redirect_on_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_unified_login';
  $strongarm->value = 0;
  $export['logintoboggan_unified_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'login_security_host_wrong_count';
  $strongarm->value = '5';
  $export['login_security_host_wrong_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_banco_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_banco_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_dotaci_n_de_la_empresa_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_dotaci_n_de_la_empresa_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_formacion_institucion_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_formacion_institucion_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_habilidades_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_habilidades_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_medio_conoci_tutoriame_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_medio_conoci_tutoriame_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_ramo_o_actividad_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_ramo_o_actividad_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_responsabilidad_ante_el_iva_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_responsabilidad_ante_el_iva_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_rol_en_tutoriame_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_rol_en_tutoriame_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tipo_de_cuenta_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tipo_de_cuenta_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tipo_de_documento_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tipo_de_documento_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tutorias_categorias_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tutorias_categorias_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'usuarios/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_enabled_fields';
  $strongarm->value = array(
    'profile2:emprendedor:field_tipo_de_docuemento' => 'profile2:emprendedor:field_tipo_de_docuemento',
    'profile2:emprendedor:field_puesto' => 'profile2:emprendedor:field_puesto',
    'profile2:emprendedor:field_skype' => 'profile2:emprendedor:field_skype',
    'profile2:emprendedor:field_nombre_comercial' => 'profile2:emprendedor:field_nombre_comercial',
    'profile2:emprendedor:field_razon_social' => 'profile2:emprendedor:field_razon_social',
    'profile2:emprendedor:field_consultora_si_no' => 'profile2:emprendedor:field_consultora_si_no',
    'profile2:emprendedor:field_pagina_web' => 'profile2:emprendedor:field_pagina_web',
    'profile2:emprendedor:field_descripcion_empresa' => 'profile2:emprendedor:field_descripcion_empresa',
    'profile2:emprendedor:field_dotacion_empresa' => 'profile2:emprendedor:field_dotacion_empresa',
    'profile2:emprendedor:field_logo_empresa' => 'profile2:emprendedor:field_logo_empresa',
    'profile2:emprendedor:field_medio_conocio_ttm' => 'profile2:emprendedor:field_medio_conocio_ttm',
    'profile2:emprendedor:field_datos_cuenta_bancaria' => 'profile2:emprendedor:field_datos_cuenta_bancaria',
    'profile2:tutor:field_categoria' => 'profile2:tutor:field_categoria',
    'profile2:tutor:field_habilidades_requeridas' => 'profile2:tutor:field_habilidades_requeridas',
    'profile2:tutor:field_resumen_del_servicio' => 'profile2:tutor:field_resumen_del_servicio',
    'profile2:tutor:field_tarifa' => 'profile2:tutor:field_tarifa',
    'profile2:tutor:field_disponibilidad' => 'profile2:tutor:field_disponibilidad',
    'profile2:tutor:field_formacion' => 'profile2:tutor:field_formacion',
    'profile2:tutor:field_experiencia_laboral' => 'profile2:tutor:field_experiencia_laboral',
    'profile2:tutor:field_cuit_cuil' => 'profile2:tutor:field_cuit_cuil',
    'profile2:emprendedor:field_numero_de_documento' => 'profile2:emprendedor:field_numero_de_documento',
    'profile2:main:field_pais' => 'profile2:main:field_pais',
    'profile2:emprendedor:field_domicilio' => 'profile2:emprendedor:field_domicilio',
    'profile2:emprendedor:field_empresa_cuit_cuil' => 'profile2:emprendedor:field_empresa_cuit_cuil',
    'profile2:emprendedor:field_cuit_cuil' => 'profile2:emprendedor:field_cuit_cuil',
    'profile2:emprendedor:field_ramo_o_actividad' => 'profile2:emprendedor:field_ramo_o_actividad',
    'profile2:emprendedor:field_telefonos' => 'profile2:emprendedor:field_telefonos',
    'profile2:emprendedor:field_fecha_de_nacimiento' => 'profile2:emprendedor:field_fecha_de_nacimiento',
    'profile2:tutor:field_fecha_de_nacimiento' => 'profile2:tutor:field_fecha_de_nacimiento',
  );
  $export['pcp_enabled_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_ajax_api';
  $strongarm->value = 0;
  $export['recaptcha_ajax_api'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_nocookies';
  $strongarm->value = 0;
  $export['recaptcha_nocookies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_tabindex';
  $strongarm->value = '';
  $export['recaptcha_tabindex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_theme';
  $strongarm->value = 'clean';
  $export['recaptcha_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_distinct:perfil_contenido';
  $strongarm->value = array(
    'panel_pane_18' => array(
      'nid' => array(
        'post_render' => 0,
        'action' => 'filter_repeats',
        'aggregate_separator' => '',
      ),
    ),
    'panel_pane_16' => array(
      'nid' => array(
        'post_render' => 0,
        'action' => 'filter_repeats',
        'aggregate_separator' => ', ',
      ),
    ),
    'panel_pane_15' => array(
      'nid' => array(
        'post_render' => 0,
        'action' => 'filter_repeats',
        'aggregate_separator' => ', ',
      ),
    ),
  );
  $export['views_distinct:perfil_contenido'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_anonymous_window';
  $strongarm->value = '-1';
  $export['votingapi_anonymous_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_calculation_schedule';
  $strongarm->value = 'immediate';
  $export['votingapi_calculation_schedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_user_window';
  $strongarm->value = '0';
  $export['votingapi_user_window'] = $strongarm;

  return $export;
}
