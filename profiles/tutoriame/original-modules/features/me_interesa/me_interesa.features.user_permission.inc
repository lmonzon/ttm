<?php
/**
 * @file
 * me_interesa.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function me_interesa_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag me_interesa'.
  $permissions['flag me_interesa'] = array(
    'name' => 'flag me_interesa',
    'roles' => array(
      'Tutor' => 'Tutor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag me_interesa'.
  $permissions['unflag me_interesa'] = array(
    'name' => 'unflag me_interesa',
    'roles' => array(
      'Tutor' => 'Tutor',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
