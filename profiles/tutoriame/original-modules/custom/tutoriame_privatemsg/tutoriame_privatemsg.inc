<?php

function tutoriame_privatemsg_roles_contactados() {
  $roles = variable_get('tutoriame_privatemsg_roles_contactados', array());
  $roles = array_keys(array_filter($roles));

  return $roles;
}

function tutoriame_privatemsg_roles_contactan() {
  $roles = variable_get('tutoriame_privatemsg_roles_contactan', array());
  $roles = array_keys(array_filter($roles));

  return $roles;
}

function tutoriame_privatemsg_user_roles($user) {
  $roles = array();

  if ((!empty($user->roles)) && (is_array($user->roles))) {
    $roles = array_keys($user->roles);
  }

  return $roles;
}

function tutoriame_privatemsg_query_proyectos_activos($user) {
  $query = flujo_de_proyectos_query_proyectos_activos();
  $query->propertyCondition('uid', $user->uid, '=');
  if ($duracionConversacion = variable_get('tutoriame_privatemsg_duracion_conversacion', 0)) {
    $query->propertyCondition('created', (REQUEST_TIME - ($duracionConversacion * 86400)), '>=');
  }

  return $query;
}

function tutoriame_privatemsg_proyectos_activos($user) {
  $proyectosActivos = array();

  $query = tutoriame_privatemsg_query_proyectos_activos($user);
  if ($proyectos = $query->execute()) {
    $idProyectos = array();
    foreach ($proyectos['node'] as $unProyecto) {
      $idProyectos[] = $unProyecto->nid;
    }
    if ($proyectos = node_load_multiple($idProyectos)) {
      foreach ($proyectos as $unProyecto) {
        $proyectosActivos[$unProyecto->nid] = $unProyecto->title;
      }
    }
  }

  return $proyectosActivos;
}

function tutoriame_privatemsg_cantidad_proyectos_activos($user) {
  $query = tutoriame_privatemsg_query_proyectos_activos($user);
  $proyectosActivos = $query->count()
                              ->execute();

  return $proyectosActivos;
}

function tutoriame_privatemsg_get_proyecto_activo($nid, $user) {
  $proyectoActivo = '';

  $query = tutoriame_privatemsg_query_proyectos_activos($user);
  $query->propertyCondition('nid', $nid, '=');

  if (
    ($proyecto = $query->execute()) &&
    (!empty($proyecto['node'][$nid]))
  ) {
    if ($proyecto = node_load($proyecto['node'][$nid]->nid)) {
      $proyectoActivo = $proyecto->title;
    }
  }

  return $proyectoActivo;
}

function tutoriame_privatemsg_get_proyecto_en_curso($nid) {
  $proyectoEnCurso = '';

  $query = flujo_de_proyectos_query_proyectos_en_curso();
  $query->propertyCondition('nid', $nid, '=');

  if (
    ($proyecto = $query->execute()) &&
    (!empty($proyecto['node'][$nid]))
  ) {
    if ($proyecto = node_load($proyecto['node'][$nid]->nid)) {
      $proyectoEnCurso = $proyecto->title;
    }
  }

  return $proyectoEnCurso;
}

function tutoriame_privatemsg_get_proyecto_en_curso_comun($nid, $from_user, $to_user) {
  $proyectoEnCurso = '';

  $query = flujo_de_proyectos_query_proyectos_en_curso();
  $query->propertyCondition('nid', $nid, '=');
  $query->propertyCondition('uid', $from_user->uid, '=');

  if (
    ($proyecto = $query->execute()) &&
    (!empty($proyecto['node'][$nid]))
  ) {
    if ($proyecto = node_load($proyecto['node'][$nid]->nid)) {
      $query = flujo_de_proyectos_query_contratos_aceptados();
      $query->propertyCondition('uid', $from_user->uid, '=');
      $query->fieldCondition('field_tutor', 'target_id', $to_user->uid, '=');
      $query->fieldCondition('field_proyecto', 'target_id', $proyecto->nid, '=');

      if (
        ($contratos = $query->execute()) &&
        ($contrato = array_shift($contratos['node']))
      ) {
        $proyectoEnCurso = $proyecto->title;
      }
    }
  }

  return $proyectoEnCurso;
}

function tutoriame_privatemsg_verificar_roles_from($from_user) {
  $from_roles = tutoriame_privatemsg_user_roles($from_user);
  $rolesContactan = tutoriame_privatemsg_roles_contactan();

  return array_intersect($from_roles, $rolesContactan);
}

function tutoriame_privatemsg_verificar_roles_to($to_user) {
  $to_roles = tutoriame_privatemsg_user_roles($to_user);
  $rolesContactables = tutoriame_privatemsg_roles_contactados();

  return array_intersect($to_roles, $rolesContactables);
}

function tutoriame_privatemsg_tiene_proyectos_activos($user) {
  return tutoriame_privatemsg_cantidad_proyectos_activos($user) > 0;
}

function tutoriame_privatemsg_tienen_proyectos_activos_comunes($from_user, $to_user) {
  $tienen = false;

  if (
    ($flag = flag_get_flag('conversaciones')) &&
    ($proyectosActivos = tutoriame_privatemsg_proyectos_activos($from_user))
  ) {
    foreach ($proyectosActivos as $nid => $titulo) {
      if ($flag->is_flagged($nid, $to_user->uid)) {
        $tienen = true;
        break;
      }
    }
  }

  return $tienen;
}

function tutoriame_privatemsg_tienen_proyectos_en_curso_comunes($from_user, $to_user) {
  $puede = false;

  $query = flujo_de_proyectos_query_proyectos_en_curso();
  $query->propertyCondition('uid', $from_user->uid, '=');

  if ($proyectos = $query->execute()) {
    foreach ($proyectos['node'] as $unProyecto) {
      if ($proyecto = node_load($unProyecto->nid)) {
        $query = flujo_de_proyectos_query_contratos_aceptados();
        $query->propertyCondition('uid', $from_user->uid, '=');
        $query->fieldCondition('field_tutor', 'target_id', $to_user->uid, '=');
        $query->fieldCondition('field_proyecto', 'target_id', $proyecto->nid, '=');

        if (
          ($contratos = $query->execute()) &&
          ($contrato = array_shift($contratos['node']))
        ) {
          $puede = true;

          break;
        }
      }
    }
  }

  return $puede;
}

function tutoriame_privatemsg_puede_contactar($from_user, $to_user) {
  $puede = false;

  if (
    (tutoriame_privatemsg_verificar_roles_from($from_user)) &&
    (tutoriame_privatemsg_verificar_roles_to($to_user))
  ) {
    /**
     *  El visitante puede escribirle al usuario:
     *    - Tiene un proyecto 'Activo'
     *    - Tiene un proyecto 'En curso' con el destinatario
     */
    if (
      (tutoriame_privatemsg_tiene_proyectos_activos($from_user)) ||
      (tutoriame_privatemsg_tienen_proyectos_en_curso_comunes($from_user, $to_user))
    ) {
      $puede = true;
    }
  }

  return $puede;
}

function tutoriame_privatemsg_puede_responder($message, $from_user, $to_user) {
  $puede = false;

  if (
    (tutoriame_privatemsg_verificar_roles_from($from_user)) &&
    (tutoriame_privatemsg_verificar_roles_to($to_user))
  ) {
    /**
     *  El visitante puede escribirle al usuario:
     *    - El proyecto del mensaje sigue 'Activo'
     *    - El proyecto del mensaje está 'En curso' con el destinatario
     */
    if (
      (tutoriame_privatemsg_get_proyecto_activo($message->field_proyecto_consultado['und'][0]['value'], $from_user)) ||
      (tutoriame_privatemsg_get_proyecto_en_curso_comun($message->field_proyecto_consultado['und'][0]['value'], $from_user, $to_user))
    ) {
      $puede = true;
    }
  }

  return $puede;
}

