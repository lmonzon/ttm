<?php

function tutoriame_privatemsg_path_alias_types() {
  $objects['consultar/'] = t('Consultas a usuarios');

  return $objects;
}

function tutoriame_privatemsg_pathauto($op) {
  switch ($op) {
    case 'settings':
      $settings = array();
      $settings['module'] = 'tutoriame_privatemsg';
      $settings['token_type'] = 'user';
      $settings['groupheader'] = t('Rutas de consultas');
      $settings['patterndescr'] = t('Patrones para las páginas de consulta de los usuarios');
      $settings['patterndefault'] = 'consultar/[user:name]';
      $settings['batch_update_callback'] = 'tutoriame_privatemsg_pathauto_bulk_update_batch_process';
      $settings['batch_file'] = drupal_get_path('module', 'tutoriame_privatemsg') . '/tutoriame_privatemsg.pathauto.inc';
      return (object) $settings;
    default:
      break;
  }
}

function tutoriame_privatemsg_pathauto_bulk_update_batch_process(&$context) {
  if (!isset($context['sandbox']['current'])) {
    $context['sandbox']['count'] = 0;
    $context['sandbox']['current'] = 0;
  }

  $query = db_select('users', 'u');
  $query->leftJoin('url_alias', 'ua', "CONCAT('consultar/', u.uid) = ua.source");
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

  tutoriame_privatemsg_user_update_alias_multiple($uids, 'bulkupdate', array('alias blog' => FALSE));
  $context['sandbox']['count'] += count($uids);
  $context['sandbox']['current'] = max($uids);
  $context['message'] = t('Se actualizó el alias para consultar al usuario @uid.', array('@uid' => end($uids)));

  if ($context['sandbox']['count'] != $context['sandbox']['total']) {
    $context['finished'] = $context['sandbox']['count'] / $context['sandbox']['total'];
  }
}

