<?php

function ttm_rules_admin_settings() {
  $form = array();

  $form['settings'] = array(
    '#type' => 'vertical_tabs',
  );

  /**
   * Plantillas para los correos
   *    Creación de proyecto
   */
  $form['proyecto_creado'] = array(
    '#type' => 'fieldset',
    '#title' => t('Proyecto creado'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 10,
    '#group' => 'settings',
  );
  $form['proyecto_creado']['ttm_rules_proyecto_creado_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los emprendedores cuando creen un proyecto.'),
  );
  $form['proyecto_creado']['ttm_rules_proyecto_creado_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('ttm_rules_proyecto_creado_subject', 'Has creado un proyecto'),
  );
  $form['proyecto_creado']['ttm_rules_proyecto_creado_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('ttm_rules_proyecto_creado_body', 'Has creado un nuevo proyecto.'),
  );
  $form['proyecto_creado']['ttm_rules_proyecto_creado_tutor_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los tutores cuando los emprendedores creen un proyecto que pueda interesarles.'),
  );
  $form['proyecto_creado']['ttm_rules_proyecto_creado_tutor_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('ttm_rules_proyecto_creado_tutor_subject', 'Han creado un proyecto que podría interesarte'),
  );
  $form['proyecto_creado']['ttm_rules_proyecto_creado_tutor_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('ttm_rules_proyecto_creado_tutor_body', 'Han creado un proyecto que podría ser de tu interés.'),
  );
  /**
   *    Declaración de interés
   */
  $form['declaracion_interes'] = array(
    '#type' => 'fieldset',
    '#title' => t('Declaración de interés'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 20,
    '#group' => 'settings',
  );
  $form['declaracion_interes']['ttm_rules_declaracion_interes_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los emprendedores cuando se declare interés por sus proyectos.'),
  );
  $form['declaracion_interes']['ttm_rules_declaracion_interes_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('ttm_rules_declaracion_interes_subject', 'Un tutor ha declarado interés'),
  );
  $form['declaracion_interes']['ttm_rules_declaracion_interes_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('ttm_rules_declaracion_interes_body', 'Un tutor ha declarado interés por uno de tus proyectos.'),
  );
  /**
   *    Contratación
   */
  $form['contratacion'] = array(
    '#type' => 'fieldset',
    '#title' => t('Contratación'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 30,
    '#group' => 'settings',
  );
  $form['contratacion']['ttm_rules_contratacion_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los tutores cuando sean contratados.'),
  );
  $form['contratacion']['ttm_rules_contratacion_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('ttm_rules_contratacion_subject', 'Has sido contratado'),
  );
  $form['contratacion']['ttm_rules_contratacion_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('ttm_rules_contratacion_body', 'Has sido contratado para un proyecto.'),
  );
  /**
   *    Aceptación de contrato
   */
  $form['aceptacion_contrato'] = array(
    '#type' => 'fieldset',
    '#title' => t('Aceptación de contrato'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 40,
    '#group' => 'settings',
  );
  $form['aceptacion_contrato']['ttm_rules_aceptacion_contrato_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los emprendedores cuando un tutor acepte un contrato.'),
  );
  $form['aceptacion_contrato']['ttm_rules_aceptacion_contrato_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('ttm_rules_aceptacion_contrato_subject', 'El tutor ha aceptado el contrato'),
  );
  $form['aceptacion_contrato']['ttm_rules_aceptacion_contrato_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('ttm_rules_aceptacion_contrato_body', 'Un tutor ha aceptado el contrato de uno tus proyectos.'),
  );
  /**
   *    Rechazo de contrato
   */
  $form['rechazo_contrato'] = array(
    '#type' => 'fieldset',
    '#title' => t('Rechazo de contrato'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 50,
    '#group' => 'settings',
  );
  $form['rechazo_contrato']['ttm_rules_rechazo_contrato_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los emprendedores cuando un tutor rechace un contrato.'),
  );
  $form['rechazo_contrato']['ttm_rules_rechazo_contrato_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('ttm_rules_rechazo_contrato_subject', 'El tutor ha rechazado el contrato'),
  );
  $form['rechazo_contrato']['ttm_rules_rechazo_contrato_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('ttm_rules_rechazo_contrato_body', 'Un tutor ha rechazado el contrato de uno tus proyectos.'),
  );
  /**
   *    Calificación creada
   */
  $form['calificacion_creada'] = array(
    '#type' => 'fieldset',
    '#title' => t('Calificación'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 60,
    '#group' => 'settings',
  );
  $form['calificacion_creada']['ttm_rules_calificacion_creada_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los usuarios cuando son calificados.'),
  );
  $form['calificacion_creada']['ttm_rules_calificacion_creada_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('ttm_rules_calificacion_creada_subject', 'Te han calificado'),
  );
  $form['calificacion_creada']['ttm_rules_calificacion_creada_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('ttm_rules_calificacion_creada_body', 'Te han calificado por un proyecto.'),
  );
  /**
   *    Compra de puntos
   */
  $form['compra_puntos'] = array(
    '#type' => 'fieldset',
    '#title' => t('Compra de puntos'),
    '#collapsible' => true,
    '#collapsed' => true,
    '#weight' => 70,
    '#group' => 'settings',
  );
  $form['compra_puntos']['ttm_rules_compra_puntos_subject_desc'] = array(
    '#type' => 'item',
    '#title' => t('Personalice los mensajes que se enviarán a los usuarios cuando compren puntos.'),
  );
  $form['compra_puntos']['ttm_rules_compra_puntos_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Asunto'),
    '#default_value' => variable_get('ttm_rules_compra_puntos_subject', 'Has comprado puntos'),
  );
  $form['compra_puntos']['ttm_rules_compra_puntos_body'] = array(
    '#type' => 'textarea',
    '#title' => t('Cuerpo del mensaje'),
    '#default_value' => variable_get('ttm_rules_compra_puntos_body', 'Has comprado puntos en  Experto Online.'),
  );

  if (module_exists('token')) {
    $form['token'] = array(
      '#type' => 'fieldset',
      '#title' => t('Token browser'),
    );
    $form['token']['browser'] = array(
      '#theme' => 'token_tree',
      '#token_types' => array(
        'ttm_rules',
        'uc_order',
      ),
    );
  }

  $form['#submit'][] = 'ttm_rules_admin_settings_submit';

  return system_settings_form($form);
}

function ttm_rules_admin_settings_submit() {
  drupal_theme_rebuild();
}

