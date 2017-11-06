<?php

function tutoriame_contratar_path_alias_types() {
  $objects['contratar/'] = t('Contratar a usuarios');
  $objects['contratar-para/'] = t('Contratar usuarios para los nodos');
  $objects['aprobar-contrato/'] = t('Aceptar contratos');
  $objects['rechazar-contrato/'] = t('Rechazar contratos');

  return $objects;
}

function tutoriame_contratar_pathauto($op) {
  switch ($op) {
    case 'settings':
      $nodeSettings = array();
      $nodeSettings['module'] = 'tutoriame_contratar_node';
      $nodeSettings['token_type'] = 'node';
      $nodeSettings['groupheader'] = t('Rutas de contratación para nodos');
      $nodeSettings['patterndescr'] = t('Patrones para las páginas para contratar usuarios para los nodos');
      $nodeSettings['patterndefault'] = 'contratar-para/[node:title]';
      $nodeSettings['batch_update_callback'] = 'tutoriame_contratar_node_pathauto_bulk_update_batch_process';
      $nodeSettings['batch_file'] = drupal_get_path('module', 'tutoriame_contratar') . '/tutoriame_contratar.pathauto.inc';
      $languages = array();
      if (module_exists('locale')) {
        $languages = array(LANGUAGE_NONE => t('language neutral')) + locale_language_list('name');
      }
      foreach (node_type_get_names() as $node_type => $node_name) {
        if (
          (count($languages)) &&
          (variable_get('language_content_type_' . $node_type, 0))
        ) {
          $nodeSettings['patternitems'][$node_type] = t('Rutas por defecto para @node_type (Aplica a todos los contenidos del tipo @node_type con patrones en blanco)', array('@node_type' => $node_name));
          foreach ($languages as $lang_code => $lang_name) {
            $nodeSettings['patternitems'][$node_type . '_' . $lang_code] = t('Patrón para las rutas en @language de tipo @node_type', array('@node_type' => $node_name, '@language' => $lang_name));
          }
        } else {
          $nodeSettings['patternitems'][$node_type] = t('Patrón para todas las rutas de tipo @node_type', array('@node_type' => $node_name));
        }
      }

      $aprobarContratoSettings = array();
      $aprobarContratoSettings['module'] = 'tutoriame_contratar_contrato_aprobar';
      $aprobarContratoSettings['token_type'] = 'node';
      $aprobarContratoSettings['groupheader'] = t('Rutas para aprobar contratos');
      $aprobarContratoSettings['patterndescr'] = t('Patrones para las páginas de aprobación de contratos');
      $aprobarContratoSettings['patterndefault'] = 'aprobar-contrato/[node:nid]';

      $rechazarContratoSettings = array();
      $rechazarContratoSettings['module'] = 'tutoriame_contratar_contrato_rechazar';
      $rechazarContratoSettings['token_type'] = 'node';
      $rechazarContratoSettings['groupheader'] = t('Rutas para rechazar contratos');
      $rechazarContratoSettings['patterndescr'] = t('Patrones para las páginas de rechazo de contratos');
      $rechazarContratoSettings['patterndefault'] = 'rechazar-contrato/[node:nid]';

      $userSettings = array();
      $userSettings['module'] = 'tutoriame_contratar_user';
      $userSettings['token_type'] = 'user';
      $userSettings['groupheader'] = t('Rutas para contratar usuarios');
      $userSettings['patterndescr'] = t('Patrones para las páginas de contratación de los usuarios');
      $userSettings['patterndefault'] = 'contratar/[user:name]';
      $userSettings['batch_update_callback'] = 'tutoriame_contratar_user_pathauto_bulk_update_batch_process';
      $userSettings['batch_file'] = drupal_get_path('module', 'tutoriame_contratar') . '/tutoriame_contratar.pathauto.inc';

      $settings = array(
        (object) $nodeSettings,
        (object) $aprobarContratoSettings,
        (object) $rechazarContratoSettings,
        (object) $userSettings,
      );

      return $settings;
    default:
      break;
  }
}

function tutoriame_contratar_node_pathauto_bulk_update_batch_process(&$context) {
  if (!isset($context['sandbox']['current'])) {
    $context['sandbox']['count'] = 0;
    $context['sandbox']['current'] = 0;
  }

  $query = db_select('node', 'n');
  $query->leftJoin('url_alias', 'ua', "CONCAT('contratar-para/', n.nid) = ua.source");
  $query->addField('n', 'nid');
  $query->isNull('ua.source');
  $query->condition('n.nid', $context['sandbox']['current'], '>');
  $query->orderBy('n.nid');
  $query->addTag('pathauto_bulk_update');
  $query->addMetaData('entity', 'node');

  if (!isset($context['sandbox']['total'])) {
    $context['sandbox']['total'] = $query->countQuery()->execute()->fetchField();

    // If there are no nodes to update, the stop immediately.
    if (!$context['sandbox']['total']) {
      $context['finished'] = 1;
      return;
    }
  }

  $query->range(0, 25);
  $nids = $query->execute()->fetchCol();

  tutoriame_contratar_node_update_alias_multiple($nids, 'bulkupdate');
  $context['sandbox']['count'] += count($nids);
  $context['sandbox']['current'] = max($nids);
  $context['message'] = t('Se actualizó el alias de contratación para el nodo @nid.', array('@nid' => end($nids)));

  if ($context['sandbox']['count'] != $context['sandbox']['total']) {
    $context['finished'] = $context['sandbox']['count'] / $context['sandbox']['total'];
  }
}

function tutoriame_contratar_user_pathauto_bulk_update_batch_process(&$context) {
  if (!isset($context['sandbox']['current'])) {
    $context['sandbox']['count'] = 0;
    $context['sandbox']['current'] = 0;
  }

  $query = db_select('users', 'u');
  $query->leftJoin('url_alias', 'ua', "CONCAT('contratar/', u.uid) = ua.source");
  $query->addField('u', 'uid');
  $query->isNull('ua.source');
  $query->condition('u.uid', $context['sandbox']['current'], '>');
  $query->orderBy('u.uid');
  $query->addTag('pathauto_bulk_update');
  $query->addMetaData('entity', 'user');

  if (!isset($context['sandbox']['total'])) {
    $context['sandbox']['total'] = $query->countQuery()->execute()->fetchField();

    // If there are no nodes to update, the stop immediately.
    if (!$context['sandbox']['total']) {
      $context['finished'] = 1;
      return;
    }
  }

  $query->range(0, 25);
  $uids = $query->execute()->fetchCol();

  tutoriame_contratar_user_update_alias_multiple($uids, 'bulkupdate');
  $context['sandbox']['count'] += count($uids);
  $context['sandbox']['current'] = max($uids);
  $context['message'] = t('Se actualizó el alias para contratar al usuario @uid.', array('@uid' => end($uids)));

  if ($context['sandbox']['count'] != $context['sandbox']['total']) {
    $context['finished'] = $context['sandbox']['count'] / $context['sandbox']['total'];
  }
}

