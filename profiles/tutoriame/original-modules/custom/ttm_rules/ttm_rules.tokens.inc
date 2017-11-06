<?php

/**
 * @file
 * Builds replacement tokens for TTM Rules
 */

/**
 * Implements hook_token_info().
 */
function ttm_rules_token_info() {
  $type = array(
    'name' => t('Tutoriame'),
    'description' => t('Tokens para las reglas de Tutoriame.'),
  );

  $tokens['tutor'] = array(
    'name' => t('Tutor'),
    'description' => t('Tutor involucrado.'),
    'type' => 'user',
  );
  $tokens['emprendedor'] = array(
    'name' => t('Emprendedor'),
    'description' => t('Emprendedor involucrado.'),
    'type' => 'user',
  );
  $tokens['proyecto'] = array(
    'name' => t('Proyecto'),
    'description' => t('Proyecto en Tutoriame.'),
    'type' => 'node',
  );
  $tokens['contrato'] = array(
    'name' => t('Contrato'),
    'description' => t('Contrato entre el Tutor y el Emprendedor.'),
    'type' => 'node',
  );
  $tokens['calificacion'] = array(
    'name' => t('Calificación'),
    'description' => t('Calificación del proyecto.'),
    'type' => 'node',
  );
  $tokens['calificador'] = array(
    'name' => t('Calificador'),
    'description' => t('Usuario que creó la calificación.'),
    'type' => 'user',
  );
  $tokens['calificado'] = array(
    'name' => t('Calificado'),
    'description' => t('Usuario que fue calificado.'),
    'type' => 'user',
  );

  $tokens_node['url_tutores'] = array(
    'name' => t('URL de búsqueda de tutores'),
    'description' => t('Dirección URL de búsqueda de tutores para el proyecto'),
    'type' => 'url',
  );

  return array(
    'types' => array('ttm_rules' => $type),
    'tokens' => array(
      'ttm_rules' => $tokens,
      'node' => $tokens_node,
    ),
  );
}

/**
 * Implements hook_tokens().
 */
function ttm_rules_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  $url_options = array('absolute' => true);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
  }

  if ($type == 'ttm_rules') {
    if (!empty($data['tutor'])) {
      if ($tutor_tokens = token_find_with_prefix($tokens, 'tutor')) {
        $replacements += token_generate('user', $tutor_tokens, array('user' => $data['tutor']), $options);
      }
    }
    if (!empty($data['emprendedor'])) {
      if ($emprendedor_tokens = token_find_with_prefix($tokens, 'emprendedor')) {
        $replacements += token_generate('user', $emprendedor_tokens, array('user' => $data['emprendedor']), $options);
      }
    }
    if (!empty($data['proyecto'])) {
      if ($proyecto_tokens = token_find_with_prefix($tokens, 'proyecto')) {
        $replacements += token_generate('node', $proyecto_tokens, array('node' => $data['proyecto']), $options);
      }
    }
    if (!empty($data['contrato'])) {
      if ($contrato_tokens = token_find_with_prefix($tokens, 'contrato')) {
        $replacements += token_generate('node', $contrato_tokens, array('node' => $data['contrato']), $options);
      }
    }
    if (!empty($data['calificacion'])) {
      if ($calificacion_tokens = token_find_with_prefix($tokens, 'calificacion')) {
        $replacements += token_generate('node', $calificacion_tokens, array('node' => $data['calificacion']), $options);
      }
    }
    if (!empty($data['calificador'])) {
      if ($calificador_tokens = token_find_with_prefix($tokens, 'calificador')) {
        $replacements += token_generate('user', $calificador_tokens, array('user' => $data['calificador']), $options);
      }
    }
    if (!empty($data['calificado'])) {
      if ($calificado_tokens = token_find_with_prefix($tokens, 'calificado')) {
        $replacements += token_generate('user', $calificado_tokens, array('user' => $data['calificado']), $options);
      }
    }
  }

  $url_options = array('absolute' => true);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
  }

  if (
    ($type == 'node') &&
    (!empty($data['node']))
  ) {
    $node = $data['node'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'url_tutores':
          $uri = array(
            'path' => '<front>',
            'options' => array(),
          );

          if (!empty($node->field_categoria['und'][0]['tid'])) {
            $uri = array(
              'path' => 'buscar-tutores?field_categoria_tid=' . $node->field_categoria['und'][0]['tid'],
              'options' => array(),
            );
          }

          $replacements[$original] = url($uri['path'], $url_options + $uri['options']);
          break;
      }
    }
  }


  return $replacements;
}

