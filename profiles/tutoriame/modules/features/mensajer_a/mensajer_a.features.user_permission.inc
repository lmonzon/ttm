<?php
/**
 * @file
 * mensajer_a.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mensajer_a_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer privatemsg settings'.
  $permissions['administer privatemsg settings'] = array(
    'name' => 'administer privatemsg settings',
    'roles' => array(),
    'module' => 'privatemsg',
  );

  // Exported permission: 'administer tutoriame_plantillas settings'.
  $permissions['administer tutoriame_plantillas settings'] = array(
    'name' => 'administer tutoriame_plantillas settings',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'tutoriame_plantillas',
  );

  // Exported permission: 'administer tutoriame_privatemsg settings'.
  $permissions['administer tutoriame_privatemsg settings'] = array(
    'name' => 'administer tutoriame_privatemsg settings',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'tutoriame_privatemsg',
  );

  // Exported permission: 'allow disabling privatemsg'.
  $permissions['allow disabling privatemsg'] = array(
    'name' => 'allow disabling privatemsg',
    'roles' => array(),
    'module' => 'privatemsg',
  );

  // Exported permission: 'change privatemsg e-mail notification for indirect messages'.
  $permissions['change privatemsg e-mail notification for indirect messages'] = array(
    'name' => 'change privatemsg e-mail notification for indirect messages',
    'roles' => array(),
    'module' => 'pm_email_notify',
  );

  // Exported permission: 'create field_proyecto_consultado'.
  $permissions['create field_proyecto_consultado'] = array(
    'name' => 'create field_proyecto_consultado',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete privatemsg'.
  $permissions['delete privatemsg'] = array(
    'name' => 'delete privatemsg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'edit field_proyecto_consultado'.
  $permissions['edit field_proyecto_consultado'] = array(
    'name' => 'edit field_proyecto_consultado',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_proyecto_consultado'.
  $permissions['edit own field_proyecto_consultado'] = array(
    'name' => 'edit own field_proyecto_consultado',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'flag conversaciones'.
  $permissions['flag conversaciones'] = array(
    'name' => 'flag conversaciones',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'read all private messages'.
  $permissions['read all private messages'] = array(
    'name' => 'read all private messages',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'read privatemsg'.
  $permissions['read privatemsg'] = array(
    'name' => 'read privatemsg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'reply only privatemsg'.
  $permissions['reply only privatemsg'] = array(
    'name' => 'reply only privatemsg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'report private messages to mollom'.
  $permissions['report private messages to mollom'] = array(
    'name' => 'report private messages to mollom',
    'roles' => array(),
    'module' => 'privatemsg',
  );

  // Exported permission: 'select text format for privatemsg'.
  $permissions['select text format for privatemsg'] = array(
    'name' => 'select text format for privatemsg',
    'roles' => array(),
    'module' => 'privatemsg',
  );

  // Exported permission: 'set privatemsg e-mail notification level'.
  $permissions['set privatemsg e-mail notification level'] = array(
    'name' => 'set privatemsg e-mail notification level',
    'roles' => array(),
    'module' => 'pm_email_notify',
  );

  // Exported permission: 'unflag conversaciones'.
  $permissions['unflag conversaciones'] = array(
    'name' => 'unflag conversaciones',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'use tokens in privatemsg'.
  $permissions['use tokens in privatemsg'] = array(
    'name' => 'use tokens in privatemsg',
    'roles' => array(),
    'module' => 'privatemsg',
  );

  // Exported permission: 'view field_proyecto_consultado'.
  $permissions['view field_proyecto_consultado'] = array(
    'name' => 'view field_proyecto_consultado',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_proyecto_consultado'.
  $permissions['view own field_proyecto_consultado'] = array(
    'name' => 'view own field_proyecto_consultado',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'write privatemsg'.
  $permissions['write privatemsg'] = array(
    'name' => 'write privatemsg',
    'roles' => array(),
    'module' => 'privatemsg',
  );

  return $permissions;
}
