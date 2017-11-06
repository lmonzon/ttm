<?php
/**
 * @file
 * usuarios.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function usuarios_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_calidad_del_trabajo'.
  $permissions['create field_calidad_del_trabajo'] = array(
    'name' => 'create field_calidad_del_trabajo',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_calificacion_emprendedor'.
  $permissions['create field_calificacion_emprendedor'] = array(
    'name' => 'create field_calificacion_emprendedor',
    'roles' => array(
      'Tutor' => 'Tutor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_calificacion_general_tutor'.
  $permissions['create field_calificacion_general_tutor'] = array(
    'name' => 'create field_calificacion_general_tutor',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_comunicacion'.
  $permissions['create field_comunicacion'] = array(
    'name' => 'create field_comunicacion',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_conocimientos'.
  $permissions['create field_conocimientos'] = array(
    'name' => 'create field_conocimientos',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cumplimiento_de_plazos'.
  $permissions['create field_cumplimiento_de_plazos'] = array(
    'name' => 'create field_cumplimiento_de_plazos',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_experiencia'.
  $permissions['create field_experiencia'] = array(
    'name' => 'create field_experiencia',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_identificador_de_recomenda'.
  $permissions['create field_identificador_de_recomenda'] = array(
    'name' => 'create field_identificador_de_recomenda',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_imagen_perfil'.
  $permissions['create field_imagen_perfil'] = array(
    'name' => 'create field_imagen_perfil',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_rol_en_tutoriame'.
  $permissions['create field_rol_en_tutoriame'] = array(
    'name' => 'create field_rol_en_tutoriame',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_volveria_a_contratar'.
  $permissions['create field_volveria_a_contratar'] = array(
    'name' => 'create field_volveria_a_contratar',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete terms in auspicios'.
  $permissions['delete terms in auspicios'] = array(
    'name' => 'delete terms in auspicios',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in banco'.
  $permissions['delete terms in banco'] = array(
    'name' => 'delete terms in banco',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in dotaci_n_de_la_empresa'.
  $permissions['delete terms in dotaci_n_de_la_empresa'] = array(
    'name' => 'delete terms in dotaci_n_de_la_empresa',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in formacion_institucion'.
  $permissions['delete terms in formacion_institucion'] = array(
    'name' => 'delete terms in formacion_institucion',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in habilidades'.
  $permissions['delete terms in habilidades'] = array(
    'name' => 'delete terms in habilidades',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in medio_conoci_tutoriame'.
  $permissions['delete terms in medio_conoci_tutoriame'] = array(
    'name' => 'delete terms in medio_conoci_tutoriame',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ramo_o_actividad'.
  $permissions['delete terms in ramo_o_actividad'] = array(
    'name' => 'delete terms in ramo_o_actividad',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in responsabilidad_ante_el_iva'.
  $permissions['delete terms in responsabilidad_ante_el_iva'] = array(
    'name' => 'delete terms in responsabilidad_ante_el_iva',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in rol_en_tutoriame'.
  $permissions['delete terms in rol_en_tutoriame'] = array(
    'name' => 'delete terms in rol_en_tutoriame',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tipo_de_cuenta'.
  $permissions['delete terms in tipo_de_cuenta'] = array(
    'name' => 'delete terms in tipo_de_cuenta',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tipo_de_documento'.
  $permissions['delete terms in tipo_de_documento'] = array(
    'name' => 'delete terms in tipo_de_documento',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tutorias_categorias'.
  $permissions['delete terms in tutorias_categorias'] = array(
    'name' => 'delete terms in tutorias_categorias',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit field_calidad_del_trabajo'.
  $permissions['edit field_calidad_del_trabajo'] = array(
    'name' => 'edit field_calidad_del_trabajo',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_calificacion_emprendedor'.
  $permissions['edit field_calificacion_emprendedor'] = array(
    'name' => 'edit field_calificacion_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_calificacion_general_tutor'.
  $permissions['edit field_calificacion_general_tutor'] = array(
    'name' => 'edit field_calificacion_general_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_comunicacion'.
  $permissions['edit field_comunicacion'] = array(
    'name' => 'edit field_comunicacion',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_conocimientos'.
  $permissions['edit field_conocimientos'] = array(
    'name' => 'edit field_conocimientos',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cumplimiento_de_plazos'.
  $permissions['edit field_cumplimiento_de_plazos'] = array(
    'name' => 'edit field_cumplimiento_de_plazos',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_experiencia'.
  $permissions['edit field_experiencia'] = array(
    'name' => 'edit field_experiencia',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_identificador_de_recomenda'.
  $permissions['edit field_identificador_de_recomenda'] = array(
    'name' => 'edit field_identificador_de_recomenda',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_imagen_perfil'.
  $permissions['edit field_imagen_perfil'] = array(
    'name' => 'edit field_imagen_perfil',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_rol_en_tutoriame'.
  $permissions['edit field_rol_en_tutoriame'] = array(
    'name' => 'edit field_rol_en_tutoriame',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_volveria_a_contratar'.
  $permissions['edit field_volveria_a_contratar'] = array(
    'name' => 'edit field_volveria_a_contratar',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_calidad_del_trabajo'.
  $permissions['edit own field_calidad_del_trabajo'] = array(
    'name' => 'edit own field_calidad_del_trabajo',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_calificacion_emprendedor'.
  $permissions['edit own field_calificacion_emprendedor'] = array(
    'name' => 'edit own field_calificacion_emprendedor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_calificacion_general_tutor'.
  $permissions['edit own field_calificacion_general_tutor'] = array(
    'name' => 'edit own field_calificacion_general_tutor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_comunicacion'.
  $permissions['edit own field_comunicacion'] = array(
    'name' => 'edit own field_comunicacion',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_conocimientos'.
  $permissions['edit own field_conocimientos'] = array(
    'name' => 'edit own field_conocimientos',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cumplimiento_de_plazos'.
  $permissions['edit own field_cumplimiento_de_plazos'] = array(
    'name' => 'edit own field_cumplimiento_de_plazos',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_experiencia'.
  $permissions['edit own field_experiencia'] = array(
    'name' => 'edit own field_experiencia',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_identificador_de_recomenda'.
  $permissions['edit own field_identificador_de_recomenda'] = array(
    'name' => 'edit own field_identificador_de_recomenda',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_imagen_perfil'.
  $permissions['edit own field_imagen_perfil'] = array(
    'name' => 'edit own field_imagen_perfil',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_rol_en_tutoriame'.
  $permissions['edit own field_rol_en_tutoriame'] = array(
    'name' => 'edit own field_rol_en_tutoriame',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_volveria_a_contratar'.
  $permissions['edit own field_volveria_a_contratar'] = array(
    'name' => 'edit own field_volveria_a_contratar',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit terms in auspicios'.
  $permissions['edit terms in auspicios'] = array(
    'name' => 'edit terms in auspicios',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in banco'.
  $permissions['edit terms in banco'] = array(
    'name' => 'edit terms in banco',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in dotaci_n_de_la_empresa'.
  $permissions['edit terms in dotaci_n_de_la_empresa'] = array(
    'name' => 'edit terms in dotaci_n_de_la_empresa',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in formacion_institucion'.
  $permissions['edit terms in formacion_institucion'] = array(
    'name' => 'edit terms in formacion_institucion',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in habilidades'.
  $permissions['edit terms in habilidades'] = array(
    'name' => 'edit terms in habilidades',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in medio_conoci_tutoriame'.
  $permissions['edit terms in medio_conoci_tutoriame'] = array(
    'name' => 'edit terms in medio_conoci_tutoriame',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ramo_o_actividad'.
  $permissions['edit terms in ramo_o_actividad'] = array(
    'name' => 'edit terms in ramo_o_actividad',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in responsabilidad_ante_el_iva'.
  $permissions['edit terms in responsabilidad_ante_el_iva'] = array(
    'name' => 'edit terms in responsabilidad_ante_el_iva',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in rol_en_tutoriame'.
  $permissions['edit terms in rol_en_tutoriame'] = array(
    'name' => 'edit terms in rol_en_tutoriame',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tipo_de_cuenta'.
  $permissions['edit terms in tipo_de_cuenta'] = array(
    'name' => 'edit terms in tipo_de_cuenta',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tipo_de_documento'.
  $permissions['edit terms in tipo_de_documento'] = array(
    'name' => 'edit terms in tipo_de_documento',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tutorias_categorias'.
  $permissions['edit terms in tutorias_categorias'] = array(
    'name' => 'edit terms in tutorias_categorias',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_calidad_del_trabajo'.
  $permissions['view field_calidad_del_trabajo'] = array(
    'name' => 'view field_calidad_del_trabajo',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_calificacion_emprendedor'.
  $permissions['view field_calificacion_emprendedor'] = array(
    'name' => 'view field_calificacion_emprendedor',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_calificacion_general_tutor'.
  $permissions['view field_calificacion_general_tutor'] = array(
    'name' => 'view field_calificacion_general_tutor',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_comunicacion'.
  $permissions['view field_comunicacion'] = array(
    'name' => 'view field_comunicacion',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_conocimientos'.
  $permissions['view field_conocimientos'] = array(
    'name' => 'view field_conocimientos',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cumplimiento_de_plazos'.
  $permissions['view field_cumplimiento_de_plazos'] = array(
    'name' => 'view field_cumplimiento_de_plazos',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_experiencia'.
  $permissions['view field_experiencia'] = array(
    'name' => 'view field_experiencia',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_identificador_de_recomenda'.
  $permissions['view field_identificador_de_recomenda'] = array(
    'name' => 'view field_identificador_de_recomenda',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_imagen_perfil'.
  $permissions['view field_imagen_perfil'] = array(
    'name' => 'view field_imagen_perfil',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_rol_en_tutoriame'.
  $permissions['view field_rol_en_tutoriame'] = array(
    'name' => 'view field_rol_en_tutoriame',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_volveria_a_contratar'.
  $permissions['view field_volveria_a_contratar'] = array(
    'name' => 'view field_volveria_a_contratar',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_calidad_del_trabajo'.
  $permissions['view own field_calidad_del_trabajo'] = array(
    'name' => 'view own field_calidad_del_trabajo',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_calificacion_emprendedor'.
  $permissions['view own field_calificacion_emprendedor'] = array(
    'name' => 'view own field_calificacion_emprendedor',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_calificacion_general_tutor'.
  $permissions['view own field_calificacion_general_tutor'] = array(
    'name' => 'view own field_calificacion_general_tutor',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_comunicacion'.
  $permissions['view own field_comunicacion'] = array(
    'name' => 'view own field_comunicacion',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_conocimientos'.
  $permissions['view own field_conocimientos'] = array(
    'name' => 'view own field_conocimientos',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cumplimiento_de_plazos'.
  $permissions['view own field_cumplimiento_de_plazos'] = array(
    'name' => 'view own field_cumplimiento_de_plazos',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_experiencia'.
  $permissions['view own field_experiencia'] = array(
    'name' => 'view own field_experiencia',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_identificador_de_recomenda'.
  $permissions['view own field_identificador_de_recomenda'] = array(
    'name' => 'view own field_identificador_de_recomenda',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_imagen_perfil'.
  $permissions['view own field_imagen_perfil'] = array(
    'name' => 'view own field_imagen_perfil',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_rol_en_tutoriame'.
  $permissions['view own field_rol_en_tutoriame'] = array(
    'name' => 'view own field_rol_en_tutoriame',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_volveria_a_contratar'.
  $permissions['view own field_volveria_a_contratar'] = array(
    'name' => 'view own field_volveria_a_contratar',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
