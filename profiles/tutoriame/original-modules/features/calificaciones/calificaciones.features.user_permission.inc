<?php
/**
 * @file
 * calificaciones.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function calificaciones_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer tutoriame_calificar settings'.
  $permissions['administer tutoriame_calificar settings'] = array(
    'name' => 'administer tutoriame_calificar settings',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'tutoriame_calificar',
  );

  // Exported permission: 'create calificacion content'.
  $permissions['create calificacion content'] = array(
    'name' => 'create calificacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create field_calif_privada_tutor'.
  $permissions['create field_calif_privada_tutor'] = array(
    'name' => 'create field_calif_privada_tutor',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_calif_publica_emprendedor'.
  $permissions['create field_calif_publica_emprendedor'] = array(
    'name' => 'create field_calif_publica_emprendedor',
    'roles' => array(
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_calif_publica_tutor'.
  $permissions['create field_calif_publica_tutor'] = array(
    'name' => 'create field_calif_publica_tutor',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_perfil_emprendedor'.
  $permissions['create field_perfil_emprendedor'] = array(
    'name' => 'create field_perfil_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_perfil_tutor'.
  $permissions['create field_perfil_tutor'] = array(
    'name' => 'create field_perfil_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_proyecto_calificado'.
  $permissions['create field_proyecto_calificado'] = array(
    'name' => 'create field_proyecto_calificado',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any calificacion content'.
  $permissions['delete any calificacion content'] = array(
    'name' => 'delete any calificacion content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own calificacion content'.
  $permissions['delete own calificacion content'] = array(
    'name' => 'delete own calificacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any calificacion content'.
  $permissions['edit any calificacion content'] = array(
    'name' => 'edit any calificacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_calif_privada_tutor'.
  $permissions['edit field_calif_privada_tutor'] = array(
    'name' => 'edit field_calif_privada_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_calif_publica_emprendedor'.
  $permissions['edit field_calif_publica_emprendedor'] = array(
    'name' => 'edit field_calif_publica_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_calif_publica_tutor'.
  $permissions['edit field_calif_publica_tutor'] = array(
    'name' => 'edit field_calif_publica_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_perfil_emprendedor'.
  $permissions['edit field_perfil_emprendedor'] = array(
    'name' => 'edit field_perfil_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_perfil_tutor'.
  $permissions['edit field_perfil_tutor'] = array(
    'name' => 'edit field_perfil_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_proyecto_calificado'.
  $permissions['edit field_proyecto_calificado'] = array(
    'name' => 'edit field_proyecto_calificado',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own calificacion content'.
  $permissions['edit own calificacion content'] = array(
    'name' => 'edit own calificacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_calif_privada_tutor'.
  $permissions['edit own field_calif_privada_tutor'] = array(
    'name' => 'edit own field_calif_privada_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_calif_publica_emprendedor'.
  $permissions['edit own field_calif_publica_emprendedor'] = array(
    'name' => 'edit own field_calif_publica_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_calif_publica_tutor'.
  $permissions['edit own field_calif_publica_tutor'] = array(
    'name' => 'edit own field_calif_publica_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_perfil_emprendedor'.
  $permissions['edit own field_perfil_emprendedor'] = array(
    'name' => 'edit own field_perfil_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_perfil_tutor'.
  $permissions['edit own field_perfil_tutor'] = array(
    'name' => 'edit own field_perfil_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_proyecto_calificado'.
  $permissions['edit own field_proyecto_calificado'] = array(
    'name' => 'edit own field_proyecto_calificado',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_calif_privada_tutor'.
  $permissions['view field_calif_privada_tutor'] = array(
    'name' => 'view field_calif_privada_tutor',
    'roles' => array(
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_calif_publica_emprendedor'.
  $permissions['view field_calif_publica_emprendedor'] = array(
    'name' => 'view field_calif_publica_emprendedor',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_calif_publica_tutor'.
  $permissions['view field_calif_publica_tutor'] = array(
    'name' => 'view field_calif_publica_tutor',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_perfil_emprendedor'.
  $permissions['view field_perfil_emprendedor'] = array(
    'name' => 'view field_perfil_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_perfil_tutor'.
  $permissions['view field_perfil_tutor'] = array(
    'name' => 'view field_perfil_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_proyecto_calificado'.
  $permissions['view field_proyecto_calificado'] = array(
    'name' => 'view field_proyecto_calificado',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_calif_privada_tutor'.
  $permissions['view own field_calif_privada_tutor'] = array(
    'name' => 'view own field_calif_privada_tutor',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_calif_publica_emprendedor'.
  $permissions['view own field_calif_publica_emprendedor'] = array(
    'name' => 'view own field_calif_publica_emprendedor',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Aspirante Tutor' => 'Aspirante Tutor',
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Institucion' => 'Institucion',
      'Tutor' => 'Tutor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_calif_publica_tutor'.
  $permissions['view own field_calif_publica_tutor'] = array(
    'name' => 'view own field_calif_publica_tutor',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_perfil_emprendedor'.
  $permissions['view own field_perfil_emprendedor'] = array(
    'name' => 'view own field_perfil_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_perfil_tutor'.
  $permissions['view own field_perfil_tutor'] = array(
    'name' => 'view own field_perfil_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_proyecto_calificado'.
  $permissions['view own field_proyecto_calificado'] = array(
    'name' => 'view own field_proyecto_calificado',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  return $permissions;
}
