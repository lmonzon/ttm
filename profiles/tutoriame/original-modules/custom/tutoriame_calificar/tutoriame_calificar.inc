<?php

function tutoriame_calificar_roles_califican() {
  $roles = variable_get('tutoriame_calificar_roles_califican', array());
  $roles = array_keys(array_filter($roles));

  return $roles;
}

function tutoriame_calificar_user_roles($user) {
  $roles = array();

  if ((!empty($user->roles)) && (is_array($user->roles))) {
    $roles = array_keys($user->roles);
  }

  return $roles;
}

function tutoriame_calificar_verificar_roles($user) {
  $roles = tutoriame_calificar_user_roles($user);
  $rolesCalifican = tutoriame_calificar_roles_califican();

  return array_intersect($roles, $rolesCalifican);
}

function tutoriame_calificar_query_contratos_aceptados($from_user = NULL, $to_user = NULL, $node = NULL) {
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

function tutoriame_calificar_get_proyecto_finalizado($nid) {
  $proyectoFinalizado = '';

  $query = flujo_de_proyectos_query_proyectos_finalizados();
  $query->propertyCondition('nid', $nid, '=');
  if (
    ($proyecto = $query->execute()) &&
    (!empty($proyecto['node'][$nid]))
  ) {
    if ($proyecto = node_load($proyecto['node'][$nid]->nid)) {
      $proyectoFinalizado = $proyecto->title;
    }
  }

  return $proyectoFinalizado;
}

function tutoriame_calificar_get_contrato_aceptado($node) {
  $contratoAprobado = NULL;

  $query = tutoriame_calificar_query_contratos_aceptados(NULL, NULL, $node);
  if (
    ($contrato = $query->execute()) &&
    (!empty($contrato['node']))
  ) {
    $contrato = array_shift($contrato['node']);
    if ($contrato = node_load($contrato->nid)) {
      $contratoAprobado = $contrato;
    }
  }

  return $contratoAprobado;
}

function tutoriame_calificar_calificaciones($node, $user = NULL) {
  $calificaciones = array();

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node', '=')
         ->propertyCondition('type', 'calificacion', '=')
         ->fieldCondition('field_proyecto_calificado', 'target_id', $node->nid, '=')
         ->propertyOrderBy('title', 'ASC');

  if ((!empty($user)) && (is_object($user))) {
    $query->propertyCondition('uid', $user->uid, '=');
  }

  if (
    ($calificaciones = $query->execute()) &&
    (!empty($calificaciones['node']))
  ) {
    $calificaciones = $calificaciones['node'];
  }

  return $calificaciones;
}

function tutoriame_calificar_puede_calificar($user, $node = NULL) {
  $puede = false;

  /**
   * Perfil Usuario
   *   Puede calificar
   */
  if (tutoriame_calificar_verificar_roles($user)) {
    $puede = true;

    /**
     *  Nodo
     */
    if (!empty($node)) {
      /**
       *   Se puede calificar para su tipo
       */
      $tiposContenido = array_filter(variable_get('tutoriame_calificar_tipos_contenido', array()));
      if (!in_array($node->type, $tiposContenido)) {
        $puede = false;
      }

      /**
       *   Está finalizado
       */
      if (!tutoriame_calificar_get_proyecto_finalizado($node->nid)) {
        $puede = false;
      }

      /**
       *   Tiene un contrato aceptado asociado
       */
      if ($contrato = tutoriame_calificar_get_contrato_aceptado($node)) {
        /**
         *   El usuario participa del contrato
         */
        $contrato = entity_metadata_wrapper('node', $contrato);
        if (
          ($user->uid != $contrato->author->value()->uid) &&
          ($user->uid != $contrato->field_tutor->value()->uid)
        ) {
          $puede = false;
        }
      } else {
        $puede = false;
      }

      /**
       *   El usuario aún no calificó el nodo
       */
      if (tutoriame_calificar_calificaciones($node, $user)) {
        $puede = false;
      }
    }
  }

  return $puede;
}

