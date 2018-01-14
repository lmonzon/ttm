<?php
/**
 * @file
 * Provide views data and handlers for tutoriame_contratar.module
 */

/**
 * Implements hook_views_data().
 */
function tutoriame_contratar_views_data() {
  $data['node']['tutoriame_contratar_para_link'] = array(
    'group' => t(' Experto Online'),
    'real field' => 'nid',
    'title' => t('Contratar para'),
    'field' => array(
      'title' => t('Enlace Contratar para'),
      'help' => t('Muestra un enlace para consultar un usuario para el nodo.'),
      'handler' => 'views_handler_field_contratar_para_link',
    ),
  );
  $data['users']['tutoriame_contratar_link'] = array(
    'group' => t(' Experto Online'),
    'real field' => 'uid',
    'title' => t('Contratar'),
    'field' => array(
      'title' => t('Enlace Contratar'),
      'help' => t('Muestra un enlace para contratar al usuario.'),
      'handler' => 'views_handler_field_contratar_link',
    ),
  );

  return $data;
}

