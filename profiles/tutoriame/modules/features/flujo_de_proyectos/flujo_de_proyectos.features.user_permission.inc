<?php
/**
 * @file
 * flujo_de_proyectos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function flujo_de_proyectos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access workflow summary views'.
  $permissions['access workflow summary views'] = array(
    'name' => 'access workflow summary views',
    'roles' => array(),
    'module' => 'workflow_views',
  );

  // Exported permission: 'edit workflow comment'.
  $permissions['edit workflow comment'] = array(
    'name' => 'edit workflow comment',
    'roles' => array(),
    'module' => 'workflow',
  );

  // Exported permission: 'participate in workflow'.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'schedule workflow transitions'.
  $permissions['schedule workflow transitions'] = array(
    'name' => 'schedule workflow transitions',
    'roles' => array(),
    'module' => 'workflow',
  );

  // Exported permission: 'show workflow state change on node edit'.
  $permissions['show workflow state change on node edit'] = array(
    'name' => 'show workflow state change on node edit',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'flujo_de_proyectos',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workflow',
  );

  return $permissions;
}
