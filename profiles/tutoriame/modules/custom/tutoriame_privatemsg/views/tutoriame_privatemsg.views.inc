<?php
/**
 * @file
 * Provide views data and handlers for tutoriame_privatemsg.module
 */

/**
 * Implements hook_views_data().
 */
function tutoriame_privatemsg_views_data() {
  $data['users']['tutoriame_consultar_link'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'uid',
    'title' => t('Consultar'),
    'field' => array(
      'title' => t('Enlace Consultar'),
      'help' => t('Muestra un enlace para consultar al usuario.'),
      'handler' => 'views_handler_field_consultar_link',
    ),
  );

  return $data;
}

