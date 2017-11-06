<?php
/**
 * @file
 * pagina.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pagina_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'search pagina content'.
  $permissions['search pagina content'] = array(
    'name' => 'search pagina content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'search_config',
  );

  return $permissions;
}
