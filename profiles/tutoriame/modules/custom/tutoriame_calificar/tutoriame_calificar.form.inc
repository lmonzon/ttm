<?php

function tutoriame_calificar_form_alter(&$form, &$form_state, $form_id) {
  switch ($form_id) {
    case 'calificacion_node_form':
      if (empty($form['nid']['#value'])) {
        tutoriame_calificar_form_alter_calificacion($form, $form_state, $form_id);
      }
      break;
  }
}

function tutoriame_calificar_form_alter_calificacion(&$form, &$form_state, $form_id) {
  global $user;

  module_load_include('inc', 'tutoriame_calificar');

  $form['#access'] = tutoriame_calificar_puede_calificar($user);
  $form['#validate'][] = 'tutoriame_calificar_calificacion_validate';
  $form['actions']['submit']['#value'] = t('Calificar');
  $form['actions']['submit']['#submit'][] = 'tutoriame_calificar_calificacion_form_submit';

  $form['#after_build'][] = 'tutoriame_calificar_after_build';
}

function tutoriame_calificar_after_build($form, &$form_state) {
  $mod = arg(0);

  switch ($mod) {
    case 'calificar':
      if ($node = node_load(arg(1))) {
        $form['field_proyecto_calificado']['und']['#value'] = $node->nid;

        if ($contrato = tutoriame_calificar_get_contrato_aceptado($node)) {
          $contrato = entity_metadata_wrapper('node', $contrato);

          if ($perfil_emprendedor = profile2_load_by_user($contrato->author->value(), 'emprendedor')) {
            $form['field_perfil_emprendedor']['und']['#value'] = $perfil_emprendedor->pid;
          }
          if ($perfil_tutor = profile2_load_by_user($contrato->field_tutor->value(), 'tutor')) {
            $form['field_perfil_tutor']['und']['#value'] = $perfil_tutor->pid;
          }
        }
      }
      break;
  }

  return $form;
}

function tutoriame_calificar_calificacion_form_submit($form, &$form_state) {
  /**
   * Redirijo al proyecto
   */
  if (!empty($form['field_proyecto_calificado']['und']['#value'])) {
    /**
     * Si ya calificaron ambos usuarios, cambio el estado del proyecto
     */
    if (!empty($form['field_perfil_emprendedor']['und']['#value'])) {
      if ($perfil_emprendedor = profile2_load($form['field_perfil_emprendedor']['und']['#value'])) {
        $emprendedor = user_load($perfil_emprendedor->uid);
      }
    }
    if (!empty($form['field_perfil_tutor']['und']['#value'])) {
      if ($perfil_tutor = profile2_load($form['field_perfil_tutor']['und']['#value'])) {
        $tutor = user_load($perfil_tutor->uid);
      }
    }
    $proyecto = node_load($form['field_proyecto_calificado']['und']['#value']);
  
    if (
      (!empty($emprendedor)) &&
      (!empty($tutor)) &&
      (!empty($proyecto)) &&
      (tutoriame_calificar_calificaciones($proyecto, $emprendedor)) &&
      (tutoriame_calificar_calificaciones($proyecto, $tutor))
    ) {
      flujo_de_proyectos_calificar_proyecto($proyecto);
    }

    $form_state['redirect'] = 'node/' . $form['field_proyecto_calificado']['und']['#value'];
  }
}

function tutoriame_calificar_calificacion_validate($form, &$form_state) {
  global $user;

  module_load_include('inc', 'tutoriame_calificar');

  /**
   * Verifico que esté establecido el proyecto y que esté Finalzado
   * Adicionalmente, deben estar seleccionados los usuarios correctos del contrato
   */
  if ($idProyecto = $form_state['values']['field_proyecto_calificado']['und'][0]['target_id']) {
    if (tutoriame_calificar_get_proyecto_finalizado($idProyecto)) {
      $proyecto = node_load($idProyecto);

      if ($contrato = tutoriame_calificar_get_contrato_aceptado($proyecto)) {
        $contrato = entity_metadata_wrapper('node', $contrato);

        if (
          (empty($form_state['values']['field_perfil_emprendedor']['und'][0]['target_id'])) ||
          (!$perfil_emprendedor = profile2_load_by_user($contrato->author->value(), 'emprendedor')) ||
          ($form_state['values']['field_perfil_emprendedor']['und'][0]['target_id'] != $perfil_emprendedor->pid)
        ) {
          form_set_error('field_perfil_emprendedor', t('Debes seleccionar al emprendedor que inició el contrato.'));
        }

        if (
          (empty($form_state['values']['field_perfil_tutor']['und'][0]['target_id'])) ||
          (!$perfil_tutor = profile2_load_by_user($contrato->field_tutor->value(), 'tutor')) ||
          ($form_state['values']['field_perfil_tutor']['und'][0]['target_id'] != $perfil_tutor->pid)
        ) {
          form_set_error('field_perfil_tutor', t('Debes seleccionar al tutor contratado.'));
        }
      } else {
        form_set_error('field_proyecto_calificado', t('El proyecto seleccionado no cuenta con un contrato.'));
      }
    } else {
      form_set_error('field_proyecto_calificado', t('Debes seleccionar un proyecto finalizado para poder calificar.'));
    }
  } else {
    form_set_error('field_proyecto_calificado', t('Debes tener al menos un proyecto finalizado para poder calificar.'));
  }
}

