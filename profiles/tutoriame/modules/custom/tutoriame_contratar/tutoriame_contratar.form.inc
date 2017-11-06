<?php

function tutoriame_contratar_form_alter(&$form, &$form_state, $form_id) {
  switch ($form_id) {
    case 'contrato_node_form':
      if (empty($form['nid']['#value'])) {
        tutoriame_contratar_form_alter_contrato($form, $form_state, $form_id);
      }
      break;
  }
}

function tutoriame_contratar_form_alter_contrato(&$form, &$form_state, $form_id) {
  global $user;

  module_load_include('inc', 'tutoriame_contratar');

  drupal_add_js(drupal_get_path('module', 'tutoriame_contratar') . '/js/contrato_node_form.js');

  $proyectos = $tutores = array();
  $opcionesProyectos['_none'] = t('Selecciona un proyecto');
  $opcionesTutores['_none'] = t('Selecciona un proyecto');
  if ($proyectosActivos = tutoriame_contratar_proyectos_activos_sin_contrato($user)) {
    $idTutores = array();

    foreach ($proyectosActivos as $unProyecto) {
      $unProyecto['tutores'] = array();
      if ($conversaciones = flag_get_entity_flags('node', $unProyecto['nid'], 'conversaciones')) {
        foreach ($conversaciones as $unaConversacion) {
          $unProyecto['tutores'][] = $unaConversacion->uid;
          $idTutores[] = $unaConversacion->uid;
        }

        $opcionesProyectos[$unProyecto['nid']] = $unProyecto['title'];
        $proyectos[$unProyecto['nid']] = $unProyecto;
      }
    }

    if (!empty($idTutores)) {
      $idTutores = array_unique($idTutores);

      if ($tutoresProyectos = user_load_multiple($idTutores)) {
        foreach ($tutoresProyectos as $unTutor) {
          if (
            ($profile = profile2_load_by_user($unTutor)) &&
            (!empty($profile['tutor']->field_tarifa['und'][0]['value']))
          ) {
            $name = $unTutor->name;
            if (!empty($profile['main'])) {
              $name = $profile['main']->field_apellido['und'][0]['value'] . ', ' . $profile['main']->field_nombres['und'][0]['value'];
            }

            $opcionesTutores[$unTutor->uid] = $name;
            $tutores[$unTutor->uid] = array(
              'uid' => $unTutor->uid, 
              'name' => $name,
              'tarifa' => $profile['tutor']->field_tarifa['und'][0]['value'],
            );
          }
        }
      }
    }
  }

  /**
   * Cargo los proyectos y tutores a Drupal.settings
   */
  drupal_add_js(array('tutoriame_contratar' => array('proyectos' => $proyectos, 'tutores' => $tutores)), 'setting');

  /**
   * Sólo permito seleccionar los proyectos abiertos con consultas realizadas
   */
  if (!empty($form['field_proyecto'])) {
    $form['field_proyecto']['und']['#options'] = $opcionesProyectos;
    $form['field_proyecto']['und']['#empty_value'] = '_none';
    $form['field_proyecto']['und']['#empty_option'] = t('Selecciona un proyecto');

    unset($form['field_proyecto']['und']['#size']);
  }
  /**
   * Sólo permito seleccionar los tutores que se han consultado
   */
  if (!empty($form['field_tutor'])) {
    $form['field_tutor']['und']['#options'] = $opcionesTutores;
    $form['field_tutor']['und']['#empty_value'] = '_none';
    $form['field_tutor']['und']['#empty_option'] = t('Selecciona un proyecto');

    unset($form['field_tutor']['und']['#size']);
  }
  /**
   * Deshabilito el campo puntos
   */
  if (!empty($form['field_puntos'])) {
    $form['field_puntos']['#disabled'] = true;
  }

  $form['#access'] = tutoriame_contratar_puede_contratar($user);
  $form['#validate'][] = 'tutoriame_contratar_contrato_validate';
  $form['actions']['submit']['#value'] = t('Contratar');
  $form['actions']['submit']['#submit'][] = 'tutoriame_contratar_contrato_form_submit';

  $form['#after_build'][] = 'tutoriame_contratar_after_build';
}

function tutoriame_contratar_after_build($form, &$form_state) {
  // hack para recargar el js si hubo un error en la validacion del formulario
  if(!strstr(drupal_get_js(), "tutoriame_contratar")) {
    tutoriame_contratar_form_alter_contrato($form, $form_state, $form['form_id']);
  }
  $mod = arg(0);

  switch ($mod) {
    case 'contratar-para':
      $form['field_proyecto']['und']['#value'] = arg(1);
      break;
    case 'contratar':
      $form['field_tutor']['und']['#value'] = arg(1);
      break;
  }

  return $form;
}

function tutoriame_contratar_contrato_form_submit($form, &$form_state) {
  /**
   * Redirijo al proyecto
   */
  if (!empty($form['field_proyecto']['und']['#value'])) {
    $form_state['redirect'] = 'node/' . $form['field_proyecto']['und']['#value'];
  }
}

function tutoriame_contratar_contrato_validate($form, &$form_state) {
  global $user;

  module_load_include('inc', 'tutoriame_contratar');

  if ($proyectosActivos = tutoriame_contratar_proyectos_activos_sin_contrato($user)) {
    $idProyecto = $form_state['values']['field_proyecto']['und'][0]['target_id'];

    if (array_key_exists($idProyecto, $proyectosActivos)) {
      if ($conversaciones = flag_get_entity_flags('node', $idProyecto, 'conversaciones')) {
        if (!empty($form_state['values']['field_tutor']['und'][0]['target_id'])) {
          $idTutor = 0;
          foreach ($conversaciones as $unaConversacion) {
            if ($form_state['values']['field_tutor']['und'][0]['target_id'] == $unaConversacion->uid) {
              $idTutor = $unaConversacion->uid;
              break;
            }
          }
  
          if (
            (!empty($idTutor)) &&
            ($tutor = user_load($idTutor)) &&
            ($profile = profile2_load_by_user($tutor)) &&
            (!empty($profile['tutor']->field_tarifa['und'][0]['value']))
          ) {
            $puntos = $profile['tutor']->field_tarifa['und'][0]['value'] * $form_state['values']['field_horas_acordadas']['und'][0]['value'];
            if ($puntos <= userpoints_get_current_points($user->uid)) {
              $form_state['values']['field_puntos']['und'][0]['value'] = $puntos;
            } else {
              form_set_error('field_horas_acordadas', t('No cuentas con los puntos necesarios para realizar la contratación.'));
            }
          } else {
            form_set_error('field_tutor', t('Debes seleccionar un tutor al que hayas contactado previamente.'));
          }
        }
      } else {
        form_set_error('field_proyecto', t('No has contactado tutores para el proyecto seleccionado.'));
      }
    } else {
      form_set_error('field_proyecto', t('Debes seleccionar un proyecto activo para poder contratar.'));
    }
  } else {
    form_set_error('field_proyecto', t('Debes tener al menos un proyecto activo para poder contratar.'));
  }
}

