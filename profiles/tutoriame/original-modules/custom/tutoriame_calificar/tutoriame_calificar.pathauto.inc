<?php

function tutoriame_calificar_path_alias_types() {
  $objects['calificar/'] = t('Calificar el desarrollo de un proyecto');

  return $objects;
}

function tutoriame_calificar_pathauto($op) {
  switch ($op) {
    case 'settings':
      $nodeSettings = array();
      $nodeSettings['module'] = 'tutoriame_calificar';
      $nodeSettings['token_type'] = 'node';
      $nodeSettings['groupheader'] = t('Rutas de calificación para nodos');
      $nodeSettings['patterndescr'] = t('Patrones para las páginas para calificar usuarios para los nodos');
      $nodeSettings['patterndefault'] = 'calificar/[node:title]';
      $nodeSettings['batch_update_callback'] = 'tutoriame_calificar_node_pathauto_bulk_update_batch_process';
      $nodeSettings['batch_file'] = drupal_get_path('module', 'tutoriame_calificar') . '/tutoriame_calificar.pathauto.inc';
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

      $settings = array(
        (object) $nodeSettings,
      );

      return $settings;
    default:
      break;
  }
}

function tutoriame_calificar_node_pathauto_bulk_update_batch_process(&$context) {
  if (!isset($context['sandbox']['current'])) {
    $context['sandbox']['count'] = 0;
    $context['sandbox']['current'] = 0;
  }

  $query = db_select('node', 'n');
  $query->leftJoin('url_alias', 'ua', "CONCAT('calificar/', n.nid) = ua.source");
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

  tutoriame_calificar_node_update_alias_multiple($nids, 'bulkupdate');
  $context['sandbox']['count'] += count($nids);
  $context['sandbox']['current'] = max($nids);
  $context['message'] = t('Se actualizó el alias de calificación para el nodo @nid.', array('@nid' => end($nids)));

  if ($context['sandbox']['count'] != $context['sandbox']['total']) {
    $context['finished'] = $context['sandbox']['count'] / $context['sandbox']['total'];
  }
}

