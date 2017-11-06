<?php
/**
 * @file
 * avisos_a_los_usuarios.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function avisos_a_los_usuarios_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ttm_rules settings'.
  $permissions['administer ttm_rules settings'] = array(
    'name' => 'administer ttm_rules settings',
    'roles' => array(),
    'module' => 'ttm_rules',
  );

  return $permissions;
}
