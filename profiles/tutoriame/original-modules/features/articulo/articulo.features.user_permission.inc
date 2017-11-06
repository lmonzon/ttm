<?php
/**
 * @file
 * articulo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function articulo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create articulo content'.
  $permissions['create articulo content'] = array(
    'name' => 'create articulo content',
    'roles' => array(
      'Aspirante Tutor' => 'Aspirante Tutor',
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any articulo content'.
  $permissions['delete any articulo content'] = array(
    'name' => 'delete any articulo content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own articulo content'.
  $permissions['delete own articulo content'] = array(
    'name' => 'delete own articulo content',
    'roles' => array(
      'Aspirante Tutor' => 'Aspirante Tutor',
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any articulo content'.
  $permissions['edit any articulo content'] = array(
    'name' => 'edit any articulo content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own articulo content'.
  $permissions['edit own articulo content'] = array(
    'name' => 'edit own articulo content',
    'roles' => array(
      'Aspirante Tutor' => 'Aspirante Tutor',
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
