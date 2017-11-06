<?php

/**
 * @file
 * Formularios de administración para opciones de videoconferencia.
 */

/**
 * Formulario de configuración para opciones de videoconferencia.
 */
function videoconferencia_admin_settings() {
  $form['videoconferencia_offset_horarios'] = array(
    '#type' => 'select', 
    '#title' => t('Período de gracia'),
    '#description' => t('Seleccione el tiempo que se permitirá acceder a la videoconferencia por fuera del horario seleccionado.'),
    '#options' => array(
      900 => t('15 Minutos'),
      1800 => t('Media hora'),
      3600 => t('Una hora'),
      7200 => t('Dos horas'),
    ),
    '#default_value' => variable_get('videoconferencia_offset_horarios', VIDEOCONFERENCIA_DEFAULT_OFFSET),
  );

  return system_settings_form($form);
}

