<?php

/**
 * @file
 * Rules hooks.
 */

/**
 * Implements hook_rules_event_info().
 */
function ttm_rules_rules_event_info() {
  $events['ttm_rules_perfil_creado'] = array(
    'label' => t('Perfil unificado creado'),
    'module' => 'ttm_rules',
    'group' => ' Experto Online',
    'variables' => array(
      'usuario' => _ttm_rules_get_var('usuario'),
      'perfil' => _ttm_rules_get_var('perfil'),
      'rol_en_tutoriame' => _ttm_rules_get_var('rol_en_tutoriame'),
    ),
  );

  $events['ttm_rules_proyecto_creado'] = array(
    'label' => t('Proyecto creado'),
    'module' => 'ttm_rules',
    'group' => ' Experto Online',
    'variables' => array(
      'author' => _ttm_rules_get_var('emprendedor'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );

  $events['ttm_rules_tutor_declara_interes'] = array(
    'label' => t('Tutor declara interés'),
    'module' => 'ttm_rules',
    'group' => ' Experto Online',
    'variables' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );

 $events['ttm_rules_contrato_creado'] = array(
    'label' => t('Contrato creado'),
    'module' => 'ttm_rules',
    'group' => ' Experto Online',
    'variables' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'contrato' => _ttm_rules_get_var('contrato'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );

 $events['ttm_rules_tutor_acepta_contratacion'] = array(
    'label' => t('Tutor acepta contratación'),
    'module' => 'ttm_rules',
    'group' => ' Experto Online',
    'variables' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'contrato' => _ttm_rules_get_var('contrato'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );

 $events['ttm_rules_tutor_rechaza_contratacion'] = array(
    'label' => t('Tutor rechaza contratación'),
    'module' => 'ttm_rules',
    'group' => ' Experto Online',
    'variables' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'contrato' => _ttm_rules_get_var('contrato'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );

 $events['ttm_rules_calificacion_creada'] = array(
    'label' => t('Calificación creada'),
    'module' => 'ttm_rules',
    'group' => ' Experto Online',
    'variables' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'project' => _ttm_rules_get_var('proyecto'),
      'calificacion' => _ttm_rules_get_var('calificacion'),
    ),
  );

 return $events;
}

/**
 * Devuelve la descripción de la variable $var o todas las variables disponibles.
 */
function _ttm_rules_get_var($var = NULL) {
  $vars = array(
    'tutor' => array(
      'type' => 'user',
      'label' => t('Tutor'),
    ),
    'emprendedor' => array(
      'type' => 'user',
      'label' => t('Emprendedor'),
    ),
    'perfil' => array(
      'type' => 'profile2',
      'label' => t('Perfil'),
    ),
    'proyecto' => array(
      'type' => 'node',
      'label' => t('Proyecto'),
      'bundle' => 'proyecto',
      'skip save' => TRUE,
    ),
    'contrato' => array(
      'type' => 'node',
      'label' => t('Contrato'),
      'bundle' => 'contrato',
      'skip save' => TRUE,
    ),
    'calificacion' => array(
      'type' => 'node',
      'label' => t('Calificación'),
      'bundle' => 'calificacion',
      'skip save' => TRUE,
    ),
    'rol_en_tutoriame' => array(
      'type' => 'taxonomy_term',
      'label' => t('Rol en  Experto Online'),
    ),
    'usuario' => array(
      'type' => 'user',
      'label' => t('Usuario'),
    ),
    'order' => array(
      'type' => 'uc_order',
      'label' => t('Pedido'),
    ),
  );

  if ($var) {
    return $vars[$var];
  }
  return $vars;
}

/**
 * Implements hook_rules_action_info().
 */
function ttm_rules_rules_action_info() {
  $actions['ttm_rules_action_mail_proyecto_creado'] = array(
    'label' => t('Enviar correo al crear un proyecto'),
    'group' => t(' Experto Online'),
    'base' => 'ttm_rules_mail_proyecto_creado',
    'parameter' => array(
      'author' => _ttm_rules_get_var('emprendedor'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );
  $actions['ttm_rules_action_mail_declaracion_interes'] = array(
    'label' => t('Enviar correo al declarar interés por un proyecto'),
    'group' => t(' Experto Online'),
    'base' => 'ttm_rules_mail_declaracion_interes',
    'parameter' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );
  $actions['ttm_rules_action_mail_contratacion'] = array(
    'label' => t('Enviar correo de contratación'),
    'group' => t(' Experto Online'),
    'base' => 'ttm_rules_mail_contratacion',
    'parameter' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'contrato' => _ttm_rules_get_var('contrato'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );
  $actions['ttm_rules_action_mail_aceptacion_contrato'] = array(
    'label' => t('Enviar correo al aceptar el contrato de un proyecto'),
    'group' => t(' Experto Online'),
    'base' => 'ttm_rules_mail_aceptacion_contrato',
    'parameter' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'contrato' => _ttm_rules_get_var('contrato'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );
  $actions['ttm_rules_action_mail_rechazo_contrato'] = array(
    'label' => t('Enviar correo al rechazar el contrato de un proyecto'),
    'group' => t(' Experto Online'),
    'base' => 'ttm_rules_mail_rechazo_contrato',
    'parameter' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'contrato' => _ttm_rules_get_var('contrato'),
      'project' => _ttm_rules_get_var('proyecto'),
    ),
  );
  $actions['ttm_rules_action_mail_calificacion_creada'] = array(
    'label' => t('Enviar correo al calificar un proyecto'),
    'group' => t(' Experto Online'),
    'base' => 'ttm_rules_mail_calificacion_creada',
    'parameter' => array(
      'tutor' => _ttm_rules_get_var('tutor'),
      'emprendedor' => _ttm_rules_get_var('emprendedor'),
      'project' => _ttm_rules_get_var('proyecto'),
      'calificacion' => _ttm_rules_get_var('calificacion'),
    ),
  );
  $actions['ttm_rules_action_mail_compra_puntos'] = array(
    'label' => t('Enviar correo al comprar puntos'),
    'group' => t(' Experto Online'),
    'base' => 'ttm_rules_mail_compra_puntos',
    'parameter' => array(
      'order' => _ttm_rules_get_var('order'),
    ),
  );

  return $actions;
}

function ttm_rules_mail_proyecto_creado($emprendedor, $proyecto) {
  $context = array(
    'emprendedor' => $emprendedor,
    'proyecto' => $proyecto,
  );

  $subject = variable_get('ttm_rules_proyecto_creado_subject', t('Has creado un proyecto'));
  $body = variable_get('ttm_rules_proyecto_creado_body', t('Has creado un nuevo proyecto.'));

  ttm_rules_send_mail('ttm_rules_proyecto_creado', $emprendedor->mail, $subject, $body, $context);

  /**
   * Busco los tutores a los que les puede interesar el proyecto
   * y programo el envío de un aviso
   */
  if (!empty($proyecto->field_categoria['und'][0]['tid'])) {
    if ($result = views_get_view_result('buscar_tutores', 'block_1', $proyecto->field_categoria['und'][0]['tid'])) {
      $queue = DrupalQueue::get('ttm_rules_proyecto_creado');

      $data_common = array(
        'emprendedor' => $emprendedor->uid,
        'proyecto' => $proyecto->nid,
      );

      foreach ($result as $tutor) {
        $data = array_merge($data_common, array('tutor' => $tutor->uid));

        $queue->createItem($data);
      }
    }
  }
}

function ttm_rules_mail_declaracion_interes($tutor, $emprendedor, $proyecto) {
  $context = array(
    'tutor' => $tutor,
    'emprendedor' => $emprendedor,
    'proyecto' => $proyecto,
  );

  $subject = variable_get('ttm_rules_declaracion_interes_subject', t('Un tutor ha declarado interés'));
  $body = variable_get('ttm_rules_declaracion_interes_body', t('Un tutor ha declarado interés por uno de tus proyectos.'));

  ttm_rules_send_mail('ttm_rules_declaracion_interes', $emprendedor->mail, $subject, $body, $context);
}

function ttm_rules_mail_contratacion($tutor, $emprendedor, $contrato, $proyecto) {
  $context = array(
    'tutor' => $tutor,
    'emprendedor' => $emprendedor,
    'contrato' => $contrato,
    'proyecto' => $proyecto,
  );

  $subject = variable_get('ttm_rules_contratacion_subject', t('Has sido contratado'));
  $body = variable_get('ttm_rules_contratacion_body', t('Has sido contratado para un proyecto.'));

  ttm_rules_send_mail('ttm_rules_contratacion', $tutor->mail, $subject, $body, $context);
}

function ttm_rules_mail_aceptacion_contrato($tutor, $emprendedor, $contrato, $proyecto) {
  $context = array(
    'tutor' => $tutor,
    'emprendedor' => $emprendedor,
    'contrato' => $contrato,
    'proyecto' => $proyecto,
  );

  $subject = variable_get('ttm_rules_aceptacion_contrato_subject', t('El tutor ha aceptado el contrato'));
  $body = variable_get('ttm_rules_aceptacion_contrato_body', t('Un tutor ha aceptado el contrato de uno de tus proyectos.'));

  ttm_rules_send_mail('ttm_rules_aceptacion_contrato', $emprendedor->mail, $subject, $body, $context);
}

function ttm_rules_mail_rechazo_contrato($tutor, $emprendedor, $contrato, $proyecto) {
  $context = array(
    'tutor' => $tutor,
    'emprendedor' => $emprendedor,
    'contrato' => $contrato,
    'proyecto' => $proyecto,
  );

  $subject = variable_get('ttm_rules_rechazo_contrato_subject', t('El tutor ha rechazado el contrato'));
  $body = variable_get('ttm_rules_rechazo_contrato_body', t('Un tutor ha rechazado el contrato de uno de tus proyectos.'));

  ttm_rules_send_mail('ttm_rules_rechazo_contrato', $emprendedor->mail, $subject, $body, $context);
}

function ttm_rules_mail_calificacion_creada($tutor, $emprendedor, $proyecto, $calificacion) {
  if ($calificacion->uid == $emprendedor->uid) {
    $calificador = $emprendedor;
    $calificado = $tutor;
  } elseif ($calificacion->uid == $tutor->uid) {
    $calificador = $tutor;
    $calificado = $emprendedor;
  }

  if (
    (!empty($calificador)) &&
    (!empty($calificado))
  ) {
    $context = array(
      'calificador' => $calificador,
      'calificado' => $calificado,
      'proyecto' => $proyecto,
      'calificacion' => $calificacion,
    );

    $subject = variable_get('ttm_rules_calificacion_creada_subject', t('Te han calificado'));
    $body = variable_get('ttm_rules_calificacion_creada_body', t('Te han calificado por un proyecto.'));

    ttm_rules_send_mail('ttm_rules_calificacion_creada', $calificado->mail, $subject, $body, $context);
  }
}

function ttm_rules_mail_compra_puntos($order) {
  $context = array(
    'uc_order' => $order,
  );

  $subject = variable_get('ttm_rules_compra_puntos_subject', t('Has comprado puntos'));
  $body = variable_get('ttm_rules_compra_puntos_body', t('Has comprado puntos en  Experto Online.'));

  ttm_rules_send_mail('ttm_rules_compra_puntos', $order->primary_email, $subject, $body, $context);
}

