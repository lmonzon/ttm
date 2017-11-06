<?php
/**
 * @file
 * proyecto.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function proyecto_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer tutoriame_contratar settings'.
  $permissions['administer tutoriame_contratar settings'] = array(
    'name' => 'administer tutoriame_contratar settings',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'tutoriame_contratar',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'create contrato content'.
  $permissions['create contrato content'] = array(
    'name' => 'create contrato content',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_estado_del_contrato'.
  $permissions['create field_estado_del_contrato'] = array(
    'name' => 'create field_estado_del_contrato',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fecha_acordada'.
  $permissions['create field_fecha_acordada'] = array(
    'name' => 'create field_fecha_acordada',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fechas_videoconferencia'.
  $permissions['create field_fechas_videoconferencia'] = array(
    'name' => 'create field_fechas_videoconferencia',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_horas_acordadas'.
  $permissions['create field_horas_acordadas'] = array(
    'name' => 'create field_horas_acordadas',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_proyecto'.
  $permissions['create field_proyecto'] = array(
    'name' => 'create field_proyecto',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_puntos'.
  $permissions['create field_puntos'] = array(
    'name' => 'create field_puntos',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tokbox'.
  $permissions['create field_tokbox'] = array(
    'name' => 'create field_tokbox',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tutor'.
  $permissions['create field_tutor'] = array(
    'name' => 'create field_tutor',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create proyecto content'.
  $permissions['create proyecto content'] = array(
    'name' => 'create proyecto content',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any contrato content'.
  $permissions['delete any contrato content'] = array(
    'name' => 'delete any contrato content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any proyecto content'.
  $permissions['delete any proyecto content'] = array(
    'name' => 'delete any proyecto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contrato content'.
  $permissions['delete own contrato content'] = array(
    'name' => 'delete own contrato content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own proyecto content'.
  $permissions['delete own proyecto content'] = array(
    'name' => 'delete own proyecto content',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any contrato content'.
  $permissions['edit any contrato content'] = array(
    'name' => 'edit any contrato content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any proyecto content'.
  $permissions['edit any proyecto content'] = array(
    'name' => 'edit any proyecto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_estado_del_contrato'.
  $permissions['edit field_estado_del_contrato'] = array(
    'name' => 'edit field_estado_del_contrato',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fecha_acordada'.
  $permissions['edit field_fecha_acordada'] = array(
    'name' => 'edit field_fecha_acordada',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fechas_videoconferencia'.
  $permissions['edit field_fechas_videoconferencia'] = array(
    'name' => 'edit field_fechas_videoconferencia',
    'roles' => array(
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_horas_acordadas'.
  $permissions['edit field_horas_acordadas'] = array(
    'name' => 'edit field_horas_acordadas',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_proyecto'.
  $permissions['edit field_proyecto'] = array(
    'name' => 'edit field_proyecto',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_puntos'.
  $permissions['edit field_puntos'] = array(
    'name' => 'edit field_puntos',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tokbox'.
  $permissions['edit field_tokbox'] = array(
    'name' => 'edit field_tokbox',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tutor'.
  $permissions['edit field_tutor'] = array(
    'name' => 'edit field_tutor',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own contrato content'.
  $permissions['edit own contrato content'] = array(
    'name' => 'edit own contrato content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_estado_del_contrato'.
  $permissions['edit own field_estado_del_contrato'] = array(
    'name' => 'edit own field_estado_del_contrato',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fecha_acordada'.
  $permissions['edit own field_fecha_acordada'] = array(
    'name' => 'edit own field_fecha_acordada',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fechas_videoconferencia'.
  $permissions['edit own field_fechas_videoconferencia'] = array(
    'name' => 'edit own field_fechas_videoconferencia',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_horas_acordadas'.
  $permissions['edit own field_horas_acordadas'] = array(
    'name' => 'edit own field_horas_acordadas',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_proyecto'.
  $permissions['edit own field_proyecto'] = array(
    'name' => 'edit own field_proyecto',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_puntos'.
  $permissions['edit own field_puntos'] = array(
    'name' => 'edit own field_puntos',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tokbox'.
  $permissions['edit own field_tokbox'] = array(
    'name' => 'edit own field_tokbox',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tutor'.
  $permissions['edit own field_tutor'] = array(
    'name' => 'edit own field_tutor',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own proyecto content'.
  $permissions['edit own proyecto content'] = array(
    'name' => 'edit own proyecto content',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view all contracts'.
  $permissions['view all contracts'] = array(
    'name' => 'view all contracts',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'tutoriame_contratar',
  );

  // Exported permission: 'view field_estado_del_contrato'.
  $permissions['view field_estado_del_contrato'] = array(
    'name' => 'view field_estado_del_contrato',
    'roles' => array(
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fecha_acordada'.
  $permissions['view field_fecha_acordada'] = array(
    'name' => 'view field_fecha_acordada',
    'roles' => array(
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fechas_videoconferencia'.
  $permissions['view field_fechas_videoconferencia'] = array(
    'name' => 'view field_fechas_videoconferencia',
    'roles' => array(
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_horas_acordadas'.
  $permissions['view field_horas_acordadas'] = array(
    'name' => 'view field_horas_acordadas',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Aspirante Tutor' => 'Aspirante Tutor',
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_proyecto'.
  $permissions['view field_proyecto'] = array(
    'name' => 'view field_proyecto',
    'roles' => array(
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_puntos'.
  $permissions['view field_puntos'] = array(
    'name' => 'view field_puntos',
    'roles' => array(
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tokbox'.
  $permissions['view field_tokbox'] = array(
    'name' => 'view field_tokbox',
    'roles' => array(
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tutor'.
  $permissions['view field_tutor'] = array(
    'name' => 'view field_tutor',
    'roles' => array(
      'Editor' => 'Editor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_estado_del_contrato'.
  $permissions['view own field_estado_del_contrato'] = array(
    'name' => 'view own field_estado_del_contrato',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fecha_acordada'.
  $permissions['view own field_fecha_acordada'] = array(
    'name' => 'view own field_fecha_acordada',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fechas_videoconferencia'.
  $permissions['view own field_fechas_videoconferencia'] = array(
    'name' => 'view own field_fechas_videoconferencia',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_horas_acordadas'.
  $permissions['view own field_horas_acordadas'] = array(
    'name' => 'view own field_horas_acordadas',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_proyecto'.
  $permissions['view own field_proyecto'] = array(
    'name' => 'view own field_proyecto',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_puntos'.
  $permissions['view own field_puntos'] = array(
    'name' => 'view own field_puntos',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tokbox'.
  $permissions['view own field_tokbox'] = array(
    'name' => 'view own field_tokbox',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tutor'.
  $permissions['view own field_tutor'] = array(
    'name' => 'view own field_tutor',
    'roles' => array(
      'Editor' => 'Editor',
      'Emprendedor' => 'Emprendedor',
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
