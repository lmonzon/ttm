<?php
/**
 * @file
 * avisos_a_los_usuarios.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function avisos_a_los_usuarios_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MimeMailSystem',
    'uc_cart' => 'UbercartMailSystem',
    'uc_order' => 'UbercartMailSystem',
    'uc_store' => 'UbercartMailSystem',
    'mimemail' => 'MimeMailSystem',
    'ttm_rules' => 'TTMRulesMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_alter';
  $strongarm->value = FALSE;
  $export['mimemail_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_engine';
  $strongarm->value = 'mimemail';
  $export['mimemail_engine'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_format';
  $strongarm->value = 'filtered_html';
  $export['mimemail_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_incoming';
  $strongarm->value = 0;
  $export['mimemail_incoming'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_key';
  $strongarm->value = 'KdKm6JKL3QV3uGHpYgrtIqIXSFiLkSiEANLl4JBqmEM';
  $export['mimemail_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_linkonly';
  $strongarm->value = 0;
  $export['mimemail_linkonly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_mail';
  $strongarm->value = 'cristian@gcoop.coop';
  $export['mimemail_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_name';
  $strongarm->value = ' Experto Online';
  $export['mimemail_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_simple_address';
  $strongarm->value = 0;
  $export['mimemail_simple_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_sitestyle';
  $strongarm->value = 1;
  $export['mimemail_sitestyle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_textonly';
  $strongarm->value = 0;
  $export['mimemail_textonly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_aceptacion_contrato_body';
  $strongarm->value = 'El tutor [ttm_rules:tutor:name] ha aceptado el contrato de tu proyecto [ttm_rules:proyecto:title].

Ver el perfil del tutor: [ttm_rules:tutor:url:absolute]';
  $export['ttm_rules_aceptacion_contrato_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_aceptacion_contrato_subject';
  $strongarm->value = 'El tutor ha aceptado el contrato';
  $export['ttm_rules_aceptacion_contrato_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_calificacion_creada_body';
  $strongarm->value = '[ttm_rules:calificador:name] te ha calificado por el proyecto [ttm_rules:proyecto:title].

Puedes ver el proyecto en [ttm_rules:proyecto:url:absolute]';
  $export['ttm_rules_calificacion_creada_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_calificacion_creada_subject';
  $strongarm->value = 'Te han calificado';
  $export['ttm_rules_calificacion_creada_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_compra_puntos_body';
  $strongarm->value = 'Has realizado una compra de puntos por $ [uc_order:order-total] en  Experto Online.

Compraste:

[uc_order:products]

';
  $export['ttm_rules_compra_puntos_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_compra_puntos_subject';
  $strongarm->value = 'Has comprado puntos';
  $export['ttm_rules_compra_puntos_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_contratacion_body';
  $strongarm->value = 'Has sido contratado por [ttm_rules:emprendedor:name] para el proyecto [ttm_rules:proyecto:title].

Puedes verlo en [ttm_rules:proyecto:url:absolute]';
  $export['ttm_rules_contratacion_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_contratacion_subject';
  $strongarm->value = 'Has sido contratado';
  $export['ttm_rules_contratacion_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_declaracion_interes_body';
  $strongarm->value = 'El tutor [ttm_rules:tutor:name] ha declarado interés por tu proyecto [ttm_rules:proyecto:title].

Ver el perfil del tutor: [ttm_rules:tutor:url:absolute]';
  $export['ttm_rules_declaracion_interes_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_declaracion_interes_subject';
  $strongarm->value = 'Un tutor ha declarado interés';
  $export['ttm_rules_declaracion_interes_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_proyecto_creado_body';
  $strongarm->value = 'Tu proyecto [ttm_rules:proyecto:title] fue creado exitosamente.

Puedes buscar tutores en: [ttm_rules:proyecto:url_tutores]';
  $export['ttm_rules_proyecto_creado_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_proyecto_creado_subject';
  $strongarm->value = 'Has creado un proyecto';
  $export['ttm_rules_proyecto_creado_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_proyecto_creado_tutor_body';
  $strongarm->value = '[ttm_rules:emprendedor:name] ha creado el proyecto [ttm_rules:proyecto:title], el cual creemos que podría ser de tu interés.

Puedes ver más detalles en: [ttm_rules:proyecto:url:absolute]';
  $export['ttm_rules_proyecto_creado_tutor_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_proyecto_creado_tutor_subject';
  $strongarm->value = 'Han creado un proyecto que podría interesarte';
  $export['ttm_rules_proyecto_creado_tutor_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_rechazo_contrato_body';
  $strongarm->value = 'El tutor [ttm_rules:tutor:name] ha rechazado el contrato de tu proyecto [ttm_rules:proyecto:title].

Puedes ver el proyecto en [ttm_rules:proyecto:url:absolute]';
  $export['ttm_rules_rechazo_contrato_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_rules_rechazo_contrato_subject';
  $strongarm->value = 'El tutor ha rechazado el contrato';
  $export['ttm_rules_rechazo_contrato_subject'] = $strongarm;

  return $export;
}
