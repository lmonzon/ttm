<?php

/**
 * Tareas a realizar durante la instalación.
 */
function tutoriame_install_tasks($install_state) {
  $tasks['configuracion_basica'] = array(
    'display_name' => st('Configuración básica'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => '_tutoriame_configuracion_basica',
  );

  return $tasks;
}

/**
 * Almacena las configuraciones básicas de los módulos que
 * instala el perfil base.
 */
function _tutoriame_configuracion_basica() {
  //guardamos las variables de configuraciones.inc
  include_once(drupal_get_path('profile', 'tutoriame') . '/configuraciones.inc');
  foreach ($variables as $var => $value) {
    variable_set($var, $value);
  }

  return NULL; //finished
}

