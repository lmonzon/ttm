<?php

/**
 * @file
 * Plugin para usar control de acceso en panels basado en la participación
 * del usuario en el contrato
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Tutoriame: Participa del contrato"),
  'description' => t('Controlar acceso basado en la participación del usuario logueado en este contrato.'),
  'callback' => 'contrato_participante_ctools_access_check',
  'summary' =>  'contrato_participante_ctools_access_summary',
  'required context' => new ctools_context_required(t('Contrato'), 'node'),
);

/**
 * Check for access.
 */
function contrato_participante_ctools_access_check($conf, $context) {
  if (
    (!empty($context->data)) &&
    ($context->data->type == 'contrato')
  ) {
    global $user;

    $contrato = entity_metadata_wrapper('node', $context->data);
    if (
      ($user->uid == $contrato->author->value()->uid) ||
      ($user->uid == $contrato->field_tutor->value()->uid) ||
      (user_access('view all contracts'))
    ) {
      return true;
    }
  }

  return false;
}

/**
 * Provide a summary description based upon the checked node_statuss.
 */
function contrato_participante_ctools_access_summary($conf, $context) {
  return t('Usuario identificado participa del contrato.');
}

