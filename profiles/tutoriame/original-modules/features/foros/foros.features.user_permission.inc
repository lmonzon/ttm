<?php
/**
 * @file
 * foros.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function foros_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Aspirante Tutor' => 'Aspirante Tutor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Aspirante Tutor' => 'Aspirante Tutor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Aspirante Tutor' => 'Aspirante Tutor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view last edited notice'.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'advanced_forum',
  );

  return $permissions;
}
