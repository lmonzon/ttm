<?php

/**
 * @file
 * Plugin para usar control de acceso en panels basado en el estado del
 * contrato y los horarios de las videoconferencias.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Tutoriame: Videoconferencia disponible para el usuario"),
  'description' => t('Controlar acceso basado en si hay videoconferencia disponible en este proyecto para el usuario logueado.'),
  'callback' => 'videoconferencia_disponible_ctools_access_check',
  'summary' =>  'videoconferencia_disponible_ctools_access_summary',
  'required context' => new ctools_context_required(t('Proyecto'), 'node'),
);

/**
 * Check for access.
 */
function videoconferencia_disponible_ctools_access_check($conf, $context) {
  if (!empty($context->data) && $context->data->type == 'proyecto') {
    global $user;
    $proyecto = $context->data;
    module_load_include('inc', 'tutoriame_contratar');
    $contrato = tutoriame_contratar_get_contrato($user, $proyecto);
    if ($contrato) {
      $contrato = entity_metadata_wrapper('node', $contrato);
      if (videoconferencia_horario_activo($contrato->field_fechas_videoconferencia->value())) {
        return TRUE;
      }
    }
  }

  return FALSE;
}

/**
 * Provide a summary description based upon the checked node_statuss.
 */
function videoconferencia_disponible_ctools_access_summary($conf, $context) {
  return t('Devuelve TRUE si hay una videoconferencia disponible para el usuario logueado, dentro del proyecto.');
}
