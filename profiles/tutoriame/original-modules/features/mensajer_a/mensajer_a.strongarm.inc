<?php
/**
 * @file
 * mensajer_a.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mensajer_a_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_privatemsg_pattern';
  $strongarm->value = 'consultar/[user:profile-main:field_apellido]-[user:profile-main:field_nombres]';
  $export['pathauto_tutoriame_privatemsg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_email_notify_body';
  $strongarm->value = 'Hola [privatemsg_message:recipient],

Este es un aviso automático desde [site:name]. Has recibido un nuevo mensaje de [privatemsg_message:author].

Para leerlo, utiliza el siguiente enlace:
[privatemsg_message:url_tutoriame]
';
  $export['pm_email_notify_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_email_notify_from';
  $strongarm->value = '';
  $export['pm_email_notify_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_email_notify_subject';
  $strongarm->value = 'Nuevo mensaje en [site:name].';
  $export['pm_email_notify_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_default_redirect';
  $strongarm->value = '<new-message>';
  $export['privatemsg_default_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_default_redirect_reply';
  $strongarm->value = 0;
  $export['privatemsg_default_redirect_reply'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_disabled_message';
  $strongarm->value = 0;
  $export['privatemsg_display_disabled_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_fields';
  $strongarm->value = array(
    'subject' => TRUE,
    'participants' => 0,
    'thread_started' => 0,
    'count' => 0,
    'last_updated' => TRUE,
  );
  $export['privatemsg_display_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_fields_weights';
  $strongarm->value = array(
    'subject' => '-20',
    'participants' => '-15',
    'thread_started' => '-10',
    'count' => '-5',
    'last_updated' => '20',
  );
  $export['privatemsg_display_fields_weights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_link_self';
  $strongarm->value = 0;
  $export['privatemsg_display_link_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_loginmessage';
  $strongarm->value = 0;
  $export['privatemsg_display_loginmessage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_on_comments';
  $strongarm->value = 0;
  $export['privatemsg_display_on_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_on_teaser';
  $strongarm->value = 0;
  $export['privatemsg_display_on_teaser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_preview_button';
  $strongarm->value = 0;
  $export['privatemsg_display_preview_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_display_profile_links';
  $strongarm->value = 0;
  $export['privatemsg_display_profile_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_flush_days';
  $strongarm->value = '30';
  $export['privatemsg_flush_days'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_flush_enabled';
  $strongarm->value = 0;
  $export['privatemsg_flush_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_flush_max';
  $strongarm->value = '200';
  $export['privatemsg_flush_max'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_link_node_types';
  $strongarm->value = array(
    'calificacion' => 0,
    'articulo' => 0,
    'contrato' => 0,
    'destacado' => 0,
    'evento' => 0,
    'noticia' => 0,
    'product' => 0,
    'proyecto' => 0,
    'pagina' => 0,
    'forum' => 0,
    'webform' => 0,
  );
  $export['privatemsg_link_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_per_page';
  $strongarm->value = '10';
  $export['privatemsg_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_setting_email_notify_level';
  $strongarm->value = '12';
  $export['privatemsg_setting_email_notify_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_setting_email_notify_only_user';
  $strongarm->value = 0;
  $export['privatemsg_setting_email_notify_only_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_setting_show_sender_mail';
  $strongarm->value = 0;
  $export['privatemsg_setting_show_sender_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_view_default_amount';
  $strongarm->value = '10';
  $export['privatemsg_view_default_amount'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_view_max_amount';
  $strongarm->value = 'unlimited';
  $export['privatemsg_view_max_amount'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_view_use_max_as_default';
  $strongarm->value = 0;
  $export['privatemsg_view_use_max_as_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'private_message_view_template';
  $strongarm->value = 'privatemsg-view';
  $export['private_message_view_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_duracion_conversacion';
  $strongarm->value = '2';
  $export['tutoriame_privatemsg_duracion_conversacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_flush';
  $strongarm->value = 1;
  $export['tutoriame_privatemsg_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_flush_max';
  $strongarm->value = '200';
  $export['tutoriame_privatemsg_flush_max'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_flush_ttl';
  $strongarm->value = '90';
  $export['tutoriame_privatemsg_flush_ttl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_largo_mensaje';
  $strongarm->value = '255';
  $export['tutoriame_privatemsg_largo_mensaje'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_reminders';
  $strongarm->value = 1;
  $export['tutoriame_privatemsg_reminders'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_reminders_emprendedor_body';
  $strongarm->value = 'Te recomendamos contactar a otros tutores.';
  $export['tutoriame_privatemsg_reminders_emprendedor_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_reminders_emprendedor_subject';
  $strongarm->value = 'El tutor aún no ha respondido tu consulta';
  $export['tutoriame_privatemsg_reminders_emprendedor_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_reminders_interval';
  $strongarm->value = '2';
  $export['tutoriame_privatemsg_reminders_interval'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_reminders_tutor_body';
  $strongarm->value = 'Por favor, respóndele a la brevedad.';
  $export['tutoriame_privatemsg_reminders_tutor_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_reminders_tutor_subject';
  $strongarm->value = 'Tienes una consulta de un emprendedor sin responder';
  $export['tutoriame_privatemsg_reminders_tutor_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_roles_contactados';
  $strongarm->value = array(
    4 => '4',
    8 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    2 => 0,
    1 => 0,
  );
  $export['tutoriame_privatemsg_roles_contactados'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_roles_contactan';
  $strongarm->value = array(
    3 => '3',
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    2 => 0,
    1 => 0,
  );
  $export['tutoriame_privatemsg_roles_contactan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_privatemsg_urls_base_url';
  $strongarm->value = 'mis-conversaciones';
  $export['tutoriame_privatemsg_urls_base_url'] = $strongarm;

  return $export;
}
