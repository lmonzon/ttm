<?php

function tutoriame_contratar_roles_contratados() {
  $roles = variable_get('tutoriame_contratar_roles_contratados', array());
  $roles = array_keys(array_filter($roles));

  return $roles;
}

function tutoriame_contratar_roles_contratan() {
  $roles = variable_get('tutoriame_contratar_roles_contratan', array());
  $roles = array_keys(array_filter($roles));

  return $roles;
}

function tutoriame_contratar_user_roles($user) {
  $roles = array();

  if ((!empty($user->roles)) && (is_array($user->roles))) {
    $roles = array_keys($user->roles);
  }

  return $roles;
}

function tutoriame_contratar_verificar_roles_from($from_user) {
  $from_roles = tutoriame_contratar_user_roles($from_user);
  $rolesContratan = tutoriame_contratar_roles_contratan();

  return array_intersect($from_roles, $rolesContratan);
}

function tutoriame_contratar_verificar_roles_to($to_user) {
  $to_roles = tutoriame_contratar_user_roles($to_user);
  $rolesContratables = tutoriame_contratar_roles_contratados();

  return array_intersect($to_roles, $rolesContratables);
}

function tutoriame_contratar_query_proyectos_activos($user) {
  $query = flujo_de_proyectos_query_proyectos_activos();
  $query->propertyCondition('uid', $user->uid, '=');

  return $query;
}

function tutoriame_contratar_query_proyectos_vencidos($user = NULL) {
  $query = flujo_de_proyectos_query_proyectos_vencidos();
  if ((!empty($user)) && (is_object($user))) {
    $query->propertyCondition('uid', $user->uid, '=');
  }

  return $query;
}

function tutoriame_contratar_query_contratos_activos($from_user = NULL, $to_user = NULL, $node = NULL) {
  $query = flujo_de_proyectos_query_contratos_activos();
  if ((!empty($from_user)) && (is_object($from_user))) {
    $query->propertyCondition('uid', $from_user->uid, '=');
  }
  if ((!empty($to_user)) && (is_object($to_user))) {
    $query->fieldCondition('field_tutor', 'target_id', $to_user->uid, '=');
  }
  if ((!empty($node)) && (is_object($node))) {
    $query->fieldCondition('field_proyecto', 'target_id', $node->nid, '=');
  }

  return $query;
}

function tutoriame_contratar_query_contratos_pendientes($from_user = NULL, $to_user = NULL, $node = NULL) {
  $query = flujo_de_proyectos_query_contratos_pendientes();
  if ((!empty($from_user)) && (is_object($from_user))) {
    $query->propertyCondition('uid', $from_user->uid, '=');
  }
  if ((!empty($to_user)) && (is_object($to_user))) {
    $query->fieldCondition('field_tutor', 'target_id', $to_user->uid, '=');
  }
  if ((!empty($node)) && (is_object($node))) {
    $query->fieldCondition('field_proyecto', 'target_id', $node->nid, '=');
  }

  return $query;
}

function tutoriame_contratar_query_contratos_aceptados($from_user = NULL, $to_user = NULL, $node = NULL) {
  $query = flujo_de_proyectos_query_contratos_aceptados();
  if ((!empty($from_user)) && (is_object($from_user))) {
    $query->propertyCondition('uid', $from_user->uid, '=');
  }
  if ((!empty($to_user)) && (is_object($to_user))) {
    $query->fieldCondition('field_tutor', 'target_id', $to_user->uid, '=');
  }
  if ((!empty($node)) && (is_object($node))) {
    $query->fieldCondition('field_proyecto', 'target_id', $node->nid, '=');
  }

  return $query;
}

function tutoriame_contratar_contratos_activos($from_user = NULL, $to_user = NULL, $node = NULL) {
  $contratos = array();

  $query = tutoriame_contratar_query_contratos_activos($from_user, $to_user, $node);
  if ($contratos = $query->execute()) {
    $idContratos = array();

    foreach ($contratos['node'] as $unContrato) {
      $idContratos[] = $unContrato->nid;
    }

    $contratos = node_load_multiple($idContratos);
  }

  return $contratos;
}

function tutoriame_contratar_contratos_pendientes($from_user = NULL, $to_user = NULL, $node = NULL) {
  $contratos = array();

  $query = tutoriame_contratar_query_contratos_pendientes($from_user, $to_user, $node);
  if ($contratos = $query->execute()) {
    $idContratos = array();

    foreach ($contratos['node'] as $unContrato) {
      $idContratos[] = $unContrato->nid;
    }

    $contratos = node_load_multiple($idContratos);
  }

  return $contratos;
}

function tutoriame_contratar_contratos_aceptados($from_user = NULL, $to_user = NULL, $node = NULL) {
  $contratos = array();

  $query = tutoriame_contratar_query_contratos_aceptados($from_user, $to_user, $node);
  if ($contratos = $query->execute()) {
    $idContratos = array();

    foreach ($contratos['node'] as $unContrato) {
      $idContratos[] = $unContrato->nid;
    }

    $contratos = node_load_multiple($idContratos);
  }

  return $contratos;
}

function tutoriame_contratar_get_proyecto_activo($nid, $user) {
  $proyectoActivo = '';

  $query = tutoriame_contratar_query_proyectos_activos($user);
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

function tutoriame_contratar_get_contrato_pendiente($nid, $to_user) {
  $contratoPendiente = '';

  $query = tutoriame_contratar_query_contratos_pendientes(NULL, $to_user);
  $query->propertyCondition('nid', $nid, '=');
  if (
    ($contrato = $query->execute()) &&
    (!empty($contrato['node'][$nid]))
  ) {
    if ($contrato = node_load($contrato['node'][$nid]->nid)) {
      $contratoPendiente = $contrato->title;
    }
  }

  return $contratoPendiente;
}

function tutoriame_contratar_proyectos_activos_sin_contrato($user) {
  $proyectosActivos = array();

  $query = tutoriame_contratar_query_proyectos_activos($user);
  if ($proyectos = $query->execute()) {
    $idProyectos = $idContratados = array();

    if ($contratos = tutoriame_contratar_contratos_activos($user)) {
      foreach ($contratos as $unContrato) {
        if (!empty($unContrato->field_proyecto['und'][0]['target_id'])) {
          $idContratados[] = $unContrato->field_proyecto['und'][0]['target_id'];
        }
      }
    }
    foreach ($proyectos['node'] as $unProyecto) {
      if (!in_array($unProyecto->nid, $idContratados)) {
        $idProyectos[] = $unProyecto->nid;
      }
    }
    if ($proyectos = node_load_multiple($idProyectos)) {
      foreach ($proyectos as $unProyecto) {
        $proyectosActivos[$unProyecto->nid] = array(
          'nid' => $unProyecto->nid,
          'title' => $unProyecto->title,
          'presupuesto' => ((!empty($unProyecto->field_presupuesto['und'][0]['value'])) ? ($unProyecto->field_presupuesto['und'][0]['value']) : (0)),
        );
      }
    }
  }

  return $proyectosActivos;
}

function tutoriame_contratar_get_proyecto_vencido($nid) {
  $proyectoVencido = '';

  $query = tutoriame_contratar_query_proyectos_vencidos(NULL);
  $query->propertyCondition('nid', $nid, '=');
  if (
    ($proyecto = $query->execute()) &&
    (!empty($proyecto['node'][$nid]))
  ) {
    if ($proyecto = node_load($proyecto['node'][$nid]->nid)) {
      $proyectoVencido = $proyecto->title;
    }
  }

  return $proyectoVencido;
}

function tutoriame_contratar_puede_contratar($from_user, $to_user = NULL, $node = NULL) {
  $puede = false;

  /**
   * Perfil Usuario
   *   Puede contratar
   */
  if (tutoriame_contratar_verificar_roles_from($from_user)) {
    $puede = true;

    /**
     * Perfil Tutor
     */
    if (!empty($to_user)) {
      /**
       *   Puede ser contratado
       */
      if (!tutoriame_contratar_verificar_roles_to($to_user)) {
        $puede = false;
      }

      /**
       *   Tarifa > 0
       */
      if (
        (!($profile = profile2_load_by_user($to_user))) ||
        (empty($profile['tutor']->field_tarifa['und'][0]['value']))
      ) {
        $puede = false;
      }

      /**
       *   Fue contactado por un proyecto abierto del Usuario
       *     Si hay nodo, fue contactado para ese caso en particular
       */
      $flags = flag_get_user_flags('node', NULL, $to_user->uid);
      $conversaciones = (isset($flags['conversaciones'])) ? (array_keys($flags['conversaciones'])) : (array());
      if (!empty($node)) {
        if (!in_array($node->nid, $conversaciones)) {
          $puede = false;
        }
      } else {
        $proyectos = array_keys(tutoriame_contratar_proyectos_activos_sin_contrato($from_user));
        if (!array_intersect($proyectos, $conversaciones)) {
          $puede = false;
        }
      }
    }

    /**
     *  Nodo
     */
    if (!empty($node)) {
      /**
       *   Pertenece al usuario
       */
      if ($node->uid != $from_user->uid) {
        $puede= false;
      }

      /**
       *   Se puede contratar para su tipo
       */
      $tiposContenido = array_filter(variable_get('tutoriame_contratar_tipos_contenido', array()));
      if (!in_array($node->type, $tiposContenido)) {
        $puede = false;
      }

      /**
       *   Está activo
       */
      if (!tutoriame_contratar_get_proyecto_activo($node->nid, $from_user)) {
        $puede = false;
      }

      /**
       *   No tiene un contrato asociado
       */
      if (tutoriame_contratar_contratos_activos($from_user, NULL, $node)) {
        $puede = false;
      }

      /**
       *   Se ha contactado un tutor
       *     Si hay tutor, fue contactado por este nodo
       */
      $flags = flag_get_entity_flags('node', $node->nid, 'conversaciones');
      $usuarios = (!empty($flags)) ? (array_keys($flags)) : (array());
      if (!empty($to_user)) {
        if (!in_array($to_user->uid, $usuarios)) {
          $puede = false;
        }
      } else {
        if (empty($usuarios)) {
          $puede = false;
        }
      }
    }
  }

  return $puede;
}

function tutoriame_contratar_puede_aprobar_contrato($to_user, $node) {
  return tutoriame_contratar_puede_modificar_contrato($to_user, $node);
}

function tutoriame_contratar_puede_rechazar_contrato($to_user, $node) {
  return tutoriame_contratar_puede_modificar_contrato($to_user, $node);
}

function tutoriame_contratar_puede_modificar_contrato($to_user, $node) {
  $puede = false;

  /**
   * El nodo es un contrato
   */
  if ($node->type == 'contrato') {
    $puede = true;

    /**
     * El contrato está pendiente y con el usuario recibido
     */
    if (!tutoriame_contratar_get_contrato_pendiente($node->nid, $to_user)) {
      $puede = false;
    }

    /**
     * El proyecto aún se encuentra abierto
     */
    if (
      (!($from_user = user_load($node->uid))) ||
      (!tutoriame_contratar_get_proyecto_activo($node->field_proyecto['und'][0]['target_id'], $from_user))
    ) {
      $puede = false;
    }
  }

  return $puede;
}

/**
 * Devuelve el contrato asociado a $proyecto para el usuario $user.
 *
 * @param $user
 *   usuario (puede ser el tutor o el emprendedor del contrato)
 * @param $proyecto
 *   proyecto asociado al contrato
 */
function tutoriame_contratar_get_contrato($user, $proyecto) {
  if (usuarios_is_emprendedor($user)) {
    $contratos = tutoriame_contratar_contratos_aceptados($user, NULL, $proyecto);
  }
  elseif (usuarios_is_tutor($user)) {
    $contratos = tutoriame_contratar_contratos_aceptados(NULL, $user, $proyecto);
  }
  if (!empty($contratos)) {
    return reset($contratos);
  }
  return FALSE;
}
