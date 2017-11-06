<?php

function tutoriame_privatemsg_admin_settings() {
  $form = array();

  $form['settings'] = array(
    '#type' => 'vertical_tabs',
  );

  /**
   * Direcciones URL para los mensajes
   */
  $form['urls'] = array(
    '#type' => 'fieldset',
    '#title' => t('Direcciones URL'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 5,
    '#group' => 'settings',
  );
  $form['urls']['tutoriame_privatemsg_urls_base_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Dirección URL de base para los mensajes'),
    '#description' => t('Ingrese la dirección URL donde los usuarios visualizarán sus mensajes.'),
    '#default_value' => variable_get('tutoriame_privatemsg_urls_base_url', 'messages/view'),
  );

  /**
   * Roles que podrán utilizar la mensajería
   */
  $form['roles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Roles'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 10,
    '#group' => 'settings',
  );
  $roles = user_roles();
  $form['roles']['tutoriame_privatemsg_roles_contactados'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Roles que pueden ser contactados por los usuarios'),
    '#description' => t('Seleccione los roles cuyos usuarios podrán ser contactados a través de mensajes privados por otros usuarios.'),
    '#default_value' => variable_get('tutoriame_privatemsg_roles_contactados', array()),
    '#options' => $roles,
  );
  $form['roles']['tutoriame_privatemsg_roles_contactan'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Roles que pueden contactar a otros usuarios'),
    '#description' => t('Seleccione los roles cuyos usuarios podrán contactar a través de mensajes privados a otros usuarios.'),
    '#default_value' => variable_get('tutoriame_privatemsg_roles_contactan', array()),
    '#options' => $roles,
  );

  /**
   * Límites
   *   Tiempo para responder
   */
  $form['limites'] = array(
    '#type' => 'fieldset',
    '#title' => t('Límites'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 20,
    '#group' => 'settings',
  );
  $duracionConversacion = array(
    '0' => t('Sin límite'),
    '1' => t('1 día'),
    '2' => t('2 días'),
    '3' => t('3 días'),
    '4' => t('4 días'),
    '5' => t('5 días'),
    '6' => t('6 días'),
    '7' => t('1 semana'),
    '15' => t('2 semanas'),
    '21' => t('3 semanas'),
    '30' => t('1 mes'),
    '60' => t('2 meses'),
    '90' => t('3 meses'),
  );
  $form['limites']['tutoriame_privatemsg_duracion_conversacion'] = array(
    '#type' => 'select',
    '#title' => t('Duración máxima de las conversaciones'),
    '#description' => t('Duración máxima de las conversaciones desde que se creo que proyecto al que se la relaciona.'),
    '#default_value' => variable_get('tutoriame_privatemsg_duracion_conversacion', 0),
    '#options' => $duracionConversacion,
  );
  $form['limites']['tutoriame_privatemsg_largo_mensaje'] = array(
    '#type' => 'textfield',
    '#title' => t('Largo máximo de los mensajes'),
    '#description' => t('Cantidad máxima de caraceres de los mensajes de las conversaciones. 0 (cero) deshabilita el límite.'),
    '#default_value' => variable_get('tutoriame_privatemsg_largo_mensaje', 0),
  );

  /**
   * Cron
   *   Recordatorios
   */
  $form['cron'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cron'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 30,
    '#group' => 'settings',
  );
  $form['cron']['reminders'] = array(
    '#type' => 'fieldset',
    '#title' => t('Recordatorios'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 10,
    '#group' => 'cron',
  );
  $interval = array(
    '0' => t('Nunca'),
    '1' => t('1 hora'),
    '2' => t('2 horas'),
    '3' => t('3 horas'),
    '4' => t('4 horas'),
    '5' => t('5 horas'),
    '6' => t('6 horas'),
    '9' => t('9 horas'),
    '12' => t('12 horas'),
    '24' => t('1 día'),
    '48' => t('2 días'),
    '72' => t('3 días'),
    '168' => t('1 semana'),
  );
  $form['cron']['reminders']['tutoriame_privatemsg_reminders'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enviar recordatorios por mensajes no leídos'),
    '#default_value' => variable_get('tutoriame_privatemsg_reminders', false),
    '#description' => t('Habilitar el envío de un recordatorio al destinatario del primer mensaje de una conversación. Requiere que cron esté habilitado.'),
  );
  $form['cron']['reminders']['tutoriame_privatemsg_reminders_interval'] = array(
    '#type' => 'select',
    '#title' => t('Intervalo de tiempo para el envío del recordatorio'),
    '#description' => t('Luego de transcurrido el tiempo seleccionado, se enviará un recordatorio del nuevo mensaje al destinatario. También se enviará otro correo sugiriendo contactar a otros usuarios'),
    '#default_value' => variable_get('tutoriame_privatemsg_reminders_interval', 12),
    '#options' => $interval,
  );
  $form['cron']['reminders']['tutoriame_privatemsg_reminders_emprendedor_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los emprendedores sugiriéndoles contactar otros tutores cuando tienen mensajes sin responder.'),
  );
  $form['cron']['reminders']['tutoriame_privatemsg_reminders_emprendedor_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('tutoriame_privatemsg_reminders_emprendedor_subject', 'El tutor aún no ha respondido tu consulta'),
  );
  $form['cron']['reminders']['tutoriame_privatemsg_reminders_emprendedor_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('tutoriame_privatemsg_reminders_emprendedor_body', 'Te recomendamos contactar a otros tutores.'),
  );
  $form['cron']['reminders']['tutoriame_privatemsg_reminders_tutor_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los tutores para recordarles que tienen mensajes sin responder.'),
  );
  $form['cron']['reminders']['tutoriame_privatemsg_reminders_tutor_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('tutoriame_privatemsg_reminders_tutor_subject', 'Tienes una consulta de un emprendedor sin responder'),
  );
  $form['cron']['reminders']['tutoriame_privatemsg_reminders_tutor_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('tutoriame_privatemsg_reminders_tutor_body', 'Por favor, respóndele a la brevedad.'),
  );
  if (module_exists('token')) {
    $form['cron']['reminders']['token'] = array(
      '#type' => 'fieldset',
      '#title' => t('Token browser'),
    );
    $form['cron']['reminders']['token']['browser'] = array(
      '#theme' => 'token_tree',
      '#token_types' => array('privatemsg_message'),
    );
  }
  /**
   *   Tiempo de vida de los Mensajes
   */
  $form['cron']['flush'] = array(
    '#type' => 'fieldset',
    '#title' => t('Mensajes antiguos'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 20,
    '#group' => 'cron',
  );
  $ttl = array(
    '0' => t('Nunca'),
    '1' => t('1 día'),
    '7' => t('1 semana'),
    '15' => t('2 semanas'),
    '30' => t('1 mes'),
    '60' => t('2 meses'),
    '90' => t('3 meses'),
    '120' => t('4 meses'),
    '180' => t('6 meses'),
  );
  $form['cron']['flush']['tutoriame_privatemsg_flush'] = array(
    '#type' => 'checkbox',
    '#title' => t('Eliminar mensajes antiguos'),
    '#default_value' => variable_get('tutoriame_privatemsg_flush', false),
    '#description' => t('Habilitar la eliminación de mensajes antiguos. Requiere que cron esté habilitado.'),
  );
  $form['cron']['flush']['tutoriame_privatemsg_flush_ttl'] = array(
    '#type' => 'select',
    '#title' => t('Tiempo de vida de los mensajes'),
    '#description' => t('Luego de transcurrido el tiempo seleccionado, las conversaciones se marcarán como eliminadas.'),
    '#default_value' => variable_get('tutoriame_privatemsg_flush_ttl', 30),
    '#options' => $ttl,
  );

  $form['#submit'][] = 'tutoriame_privatemsg_admin_settings_submit';

  return system_settings_form($form);
}

function tutoriame_privatemsg_admin_settings_submit() {
  drupal_theme_rebuild();
}

