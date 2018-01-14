<?php
/**
 * @file
 * usuarios.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function usuarios_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_datos_cuenta_bancaria-field_banco'
  $field_instances['field_collection_item-field_datos_cuenta_bancaria-field_banco'] = array(
    'bundle' => 'field_datos_cuenta_bancaria',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_banco',
    'label' => 'Banco',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_datos_cuenta_bancaria-field_cbu'
  $field_instances['field_collection_item-field_datos_cuenta_bancaria-field_cbu'] = array(
    'bundle' => 'field_datos_cuenta_bancaria',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cbu',
    'label' => 'CBU',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_datos_cuenta_bancaria-field_numero_cuenta'
  $field_instances['field_collection_item-field_datos_cuenta_bancaria-field_numero_cuenta'] = array(
    'bundle' => 'field_datos_cuenta_bancaria',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Número de cuenta sin guiones ni barras',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_numero_cuenta',
    'label' => 'Número de cuenta',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_datos_cuenta_bancaria-field_otro_banco'
  $field_instances['field_collection_item-field_datos_cuenta_bancaria-field_otro_banco'] = array(
    'bundle' => 'field_datos_cuenta_bancaria',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_otro_banco',
    'label' => 'Otro banco',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_datos_cuenta_bancaria-field_tipo_de_cuenta'
  $field_instances['field_collection_item-field_datos_cuenta_bancaria-field_tipo_de_cuenta'] = array(
    'bundle' => 'field_datos_cuenta_bancaria',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tipo_de_cuenta',
    'label' => 'Tipo de cuenta',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_experiencia_laboral-field_empresa'
  $field_instances['field_collection_item-field_experiencia_laboral-field_empresa'] = array(
    'bundle' => 'field_experiencia_laboral',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_empresa',
    'label' => 'Empresa',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_experiencia_laboral-field_experiencia_ingreso'
  $field_instances['field_collection_item-field_experiencia_laboral-field_experiencia_ingreso'] = array(
    'bundle' => 'field_experiencia_laboral',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_experiencia_ingreso',
    'label' => 'Fecha de ingreso',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_experiencia_laboral-field_nombre_del_puesto'
  $field_instances['field_collection_item-field_experiencia_laboral-field_nombre_del_puesto'] = array(
    'bundle' => 'field_experiencia_laboral',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_nombre_del_puesto',
    'label' => 'Nombre del puesto',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_formacion-field_formacion_institucion'
  $field_instances['field_collection_item-field_formacion-field_formacion_institucion'] = array(
    'bundle' => 'field_formacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_formacion_institucion',
    'label' => 'Institución',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_formacion-field_formacion_titulo'
  $field_instances['field_collection_item-field_formacion-field_formacion_titulo'] = array(
    'bundle' => 'field_formacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_formacion_titulo',
    'label' => 'Título',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_calificacion_emprendedor'
  $field_instances['profile2-emprendedor-field_calificacion_emprendedor'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'user',
          'text' => 'none',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_calificacion_emprendedor',
    'label' => 'Calificación',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 1,
      'required_by_role' => array(),
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_consultora_si_no'
  $field_instances['profile2-emprendedor-field_consultora_si_no'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_consultora_si_no',
    'label' => 'Indique si es una consultora',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_cuit_cuil'
  $field_instances['profile2-emprendedor-field_cuit_cuil'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ingresar CUIT / CUIL sin guiones',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cuit_cuil',
    'label' => 'CUIT / CUIL',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_datos_cuenta_bancaria'
  $field_instances['profile2-emprendedor-field_datos_cuenta_bancaria'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_datos_cuenta_bancaria',
    'label' => 'Datos de la cuenta bancaria',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_descripcion_empresa'
  $field_instances['profile2-emprendedor-field_descripcion_empresa'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_descripcion_empresa',
    'label' => 'Descripción',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_domicilio'
  $field_instances['profile2-emprendedor-field_domicilio'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_domicilio',
    'label' => 'Domicilio',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_dotacion_empresa'
  $field_instances['profile2-emprendedor-field_dotacion_empresa'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_dotacion_empresa',
    'label' => 'Dotación de la empresa',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_empresa_cuit_cuil'
  $field_instances['profile2-emprendedor-field_empresa_cuit_cuil'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_empresa_cuit_cuil',
    'label' => 'CUIT de la empresa',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_fecha_de_nacimiento'
  $field_instances['profile2-emprendedor-field_fecha_de_nacimiento'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_fecha_de_nacimiento',
    'label' => 'Fecha de nacimiento',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '-18 years',
      'default_value_code2' => '',
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1920:-18',
      ),
      'type' => 'date_popup',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_logo_empresa'
  $field_instances['profile2-emprendedor-field_logo_empresa'] = array(
    'bundle' => 'emprendedor',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_logo_empresa',
    'label' => 'Logo',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'required_by_role' => array(),
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_medio_conocio_ttm'
  $field_instances['profile2-emprendedor-field_medio_conocio_ttm'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_medio_conocio_ttm',
    'label' => 'Medio a través del cual conoció  Experto Online',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_newsletter_emprendedor'
  $field_instances['profile2-emprendedor-field_newsletter_emprendedor'] = array(
    'bundle' => 'emprendedor',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_newsletter_emprendedor',
    'label' => 'Newsletter',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => 'user:mail',
        'FNAME' => '',
        'LNAME' => '',
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'required_by_role' => array(),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_nombre_comercial'
  $field_instances['profile2-emprendedor-field_nombre_comercial'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_nombre_comercial',
    'label' => 'Nombre comercial',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_numero_de_documento'
  $field_instances['profile2-emprendedor-field_numero_de_documento'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_numero_de_documento',
    'label' => 'Número de documento',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_otro_ramo_o_actividad'
  $field_instances['profile2-emprendedor-field_otro_ramo_o_actividad'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_otro_ramo_o_actividad',
    'label' => 'Otro ramo o actividad',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_pagina_web'
  $field_instances['profile2-emprendedor-field_pagina_web'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pagina_web',
    'label' => 'Página web',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'required_by_role' => array(),
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_puesto'
  $field_instances['profile2-emprendedor-field_puesto'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_puesto',
    'label' => 'Puesto',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_ramo_o_actividad'
  $field_instances['profile2-emprendedor-field_ramo_o_actividad'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_ramo_o_actividad',
    'label' => 'Ramo o actividad',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_razon_social'
  $field_instances['profile2-emprendedor-field_razon_social'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_razon_social',
    'label' => 'Razón social',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_responsabilidad_ante_iva'
  $field_instances['profile2-emprendedor-field_responsabilidad_ante_iva'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_responsabilidad_ante_iva',
    'label' => 'Responsabilidad ante el IVA',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_skype'
  $field_instances['profile2-emprendedor-field_skype'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_skype',
    'label' => 'Skype ID',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_telefonos'
  $field_instances['profile2-emprendedor-field_telefonos'] = array(
    'bundle' => 'emprendedor',
    'default_value' => array(
      0 => array(
        'composed' => array(
          1 => '',
          2 => '',
          3 => '',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'composed_field',
        'settings' => array(
          'display_options' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'composed_field_unformatted_list',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_telefonos',
    'label' => 'Teléfonos',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'composed_field',
      'settings' => array(
        'composed_field' => array(
          'access' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'after_build' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'ajax' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'attached' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'attributes' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'autocomplete_path' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'collapsed' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'collapsible' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'cols' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'default_tab' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'default_value' => array(
            1 => array(
              'value' => '',
            ),
            2 => array(
              'value' => '',
            ),
            3 => array(
              'value' => '',
            ),
          ),
          'delta' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'description' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'disabled' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'element_validate' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'empty' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'empty_option' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'empty_value' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'field_prefix' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'field_suffix' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'header' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'instance__widget__settings__composed_field__active_tab' => 'edit-instance-widget-settings-composed-field-required',
          'js_select' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'maxlength' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'multiple' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'options' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'parents' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'post_render' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'pre_render' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'prefix' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'process' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'required' => array(
            1 => array(
              'enable_this_attribute' => 1,
              'value' => 1,
            ),
            2 => array(
              'enable_this_attribute' => 1,
              'value' => 1,
            ),
            3 => array(
              'enable_this_attribute' => 1,
              'value' => 0,
            ),
          ),
          'resizable' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'return_value' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'rows' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'size' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'states' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'suffix' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'theme' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'theme_wrappers' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'title' => array(
            1 => array(
              'enable_this_attribute' => 1,
              'value' => 'Código de área',
            ),
            2 => array(
              'enable_this_attribute' => 1,
              'value' => 'Teléfono',
            ),
            3 => array(
              'enable_this_attribute' => 1,
              'value' => 'Interno',
            ),
          ),
          'title_display' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'tree' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'type' => array(
            1 => array(
              'value' => 'textfield',
            ),
            2 => array(
              'value' => 'textfield',
            ),
            3 => array(
              'value' => 'textfield',
            ),
          ),
          'value_callback' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'weight' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
        ),
        'inline' => 1,
        'number_of_subfields' => 3,
      ),
      'type' => 'composed_field_widget',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'profile2-emprendedor-field_tipo_de_docuemento'
  $field_instances['profile2-emprendedor-field_tipo_de_docuemento'] = array(
    'bundle' => 'emprendedor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tipo_de_docuemento',
    'label' => 'Tipo de documento',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'profile2-institucion-field_imagen'
  $field_instances['profile2-institucion-field_imagen'] = array(
    'bundle' => 'institucion',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_imagen',
    'label' => 'imagen',
    'pcp_tag' => 0,
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'required_by_role' => array(),
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'width100',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-main-field_apellido'
  $field_instances['profile2-main-field_apellido'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_apellido',
    'label' => 'Apellido',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-main-field_imagen_perfil'
  $field_instances['profile2-main-field_imagen_perfil'] = array(
    'bundle' => 'main',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'perfil_93x94',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_imagen_perfil',
    'label' => 'Imagen de perfil',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 1,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'required_by_role' => array(),
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'perfil_93x94',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-main-field_institucion'
  $field_instances['profile2-main-field_institucion'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_institucion',
    'label' => 'institucion',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-main-field_institucion_referente'
  $field_instances['profile2-main-field_institucion_referente'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_institucion_referente',
    'label' => 'Institucion Referente',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-main-field_mail_referente'
  $field_instances['profile2-main-field_mail_referente'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_mail_referente',
    'label' => 'Mail referente',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-main-field_nombres'
  $field_instances['profile2-main-field_nombres'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_nombres',
    'label' => 'Nombres',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-main-field_pais'
  $field_instances['profile2-main-field_pais'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_pais',
    'label' => 'País',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-main-field_referente'
  $field_instances['profile2-main-field_referente'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_referente',
    'label' => 'Referente',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-main-field_rol_en_tutoriame'
  $field_instances['profile2-main-field_rol_en_tutoriame'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_rol_en_tutoriame',
    'label' => 'Rol en  Experto Online',
    'pcp_tag' => 0,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-main-field_sexo'
  $field_instances['profile2-main-field_sexo'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_sexo',
    'label' => 'Sexo',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_calidad_del_trabajo'
  $field_instances['profile2-tutor-field_calidad_del_trabajo'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'user',
          'text' => 'none',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_calidad_del_trabajo',
    'label' => 'Calidad del trabajo',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 1,
      'required_by_role' => array(),
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_calificacion_general_tutor'
  $field_instances['profile2-tutor-field_calificacion_general_tutor'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'user',
          'text' => 'none',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_calificacion_general_tutor',
    'label' => 'Calificacion general',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 1,
      'required_by_role' => array(),
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_categoria'
  $field_instances['profile2-tutor-field_categoria'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_categoria',
    'label' => 'Categoría',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 1,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_comunicacion'
  $field_instances['profile2-tutor-field_comunicacion'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'user',
          'text' => 'none',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_comunicacion',
    'label' => 'Comunicación',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 1,
      'required_by_role' => array(),
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_conocimientos'
  $field_instances['profile2-tutor-field_conocimientos'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'user',
          'text' => 'none',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_conocimientos',
    'label' => 'Conocimientos',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 1,
      'required_by_role' => array(),
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_cuit_cuil'
  $field_instances['profile2-tutor-field_cuit_cuil'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cuit_cuil',
    'label' => 'CUIT / CUIL',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_cumplimiento_de_plazos'
  $field_instances['profile2-tutor-field_cumplimiento_de_plazos'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'user',
          'text' => 'none',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cumplimiento_de_plazos',
    'label' => 'Cumplimiento de plazos',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 1,
      'required_by_role' => array(),
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_disponibilidad'
  $field_instances['profile2-tutor-field_disponibilidad'] = array(
    'bundle' => 'tutor',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'matrix',
        'settings' => array(),
        'type' => 'matrix_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_disponibilidad',
    'label' => 'Disponibilidad',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'matrix',
      'settings' => array(),
      'type' => 'matrix_custom',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_experiencia'
  $field_instances['profile2-tutor-field_experiencia'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'user',
          'text' => 'none',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_experiencia',
    'label' => 'Experiencia',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 1,
      'required_by_role' => array(),
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_experiencia_laboral'
  $field_instances['profile2-tutor-field_experiencia_laboral'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Agregar',
          'delete' => 'Eliminar',
          'description' => TRUE,
          'edit' => 'Editar',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_experiencia_laboral',
    'label' => 'Experiencia laboral',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_fecha_de_nacimiento'
  $field_instances['profile2-tutor-field_fecha_de_nacimiento'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'dia_mes_ano',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_fecha_de_nacimiento',
    'label' => 'Fecha de nacimiento',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '-18 years',
      'default_value_code2' => '',
      'required_by_role' => array(
        1 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1920:-18',
      ),
      'type' => 'date_popup',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_formacion'
  $field_instances['profile2-tutor-field_formacion'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Agregar',
          'delete' => 'Eliminar',
          'description' => TRUE,
          'edit' => 'Editar',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_formacion',
    'label' => 'Formación',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_habilidades_requeridas'
  $field_instances['profile2-tutor-field_habilidades_requeridas'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_habilidades_requeridas',
    'label' => 'Habilidades',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_newsletter_tutor'
  $field_instances['profile2-tutor-field_newsletter_tutor'] = array(
    'bundle' => 'tutor',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_newsletter_tutor',
    'label' => 'Newsletter',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => 'user:mail',
        'FNAME' => '',
        'LNAME' => '',
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'required_by_role' => array(),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_numero_de_documento'
  $field_instances['profile2-tutor-field_numero_de_documento'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_numero_de_documento',
    'label' => 'Número de documento',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_puesto'
  $field_instances['profile2-tutor-field_puesto'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_puesto',
    'label' => 'Puesto',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_resumen_del_servicio'
  $field_instances['profile2-tutor-field_resumen_del_servicio'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_resumen_del_servicio',
    'label' => 'Resumen del servicio',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_skype'
  $field_instances['profile2-tutor-field_skype'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_skype',
    'label' => 'Skype ID',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_tarifa'
  $field_instances['profile2-tutor-field_tarifa'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tarifa',
    'label' => 'Tarifa',
    'pcp_tag' => 1,
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'required_by_role' => array(),
      'suffix' => 'puntos por hora',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_telefonos'
  $field_instances['profile2-tutor-field_telefonos'] = array(
    'bundle' => 'tutor',
    'default_value' => array(
      0 => array(
        'composed' => array(
          1 => '',
          2 => '',
          3 => '',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'composed_field',
        'settings' => array(
          'display_options' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'composed_field_unformatted_list',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_telefonos',
    'label' => 'Teléfonos',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'composed_field',
      'settings' => array(
        'composed_field' => array(
          'access' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'after_build' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'ajax' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'attached' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'attributes' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'autocomplete_path' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'collapsed' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'collapsible' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'cols' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'default_tab' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'default_value' => array(
            1 => array(
              'value' => '',
            ),
            2 => array(
              'value' => '',
            ),
            3 => array(
              'value' => '',
            ),
          ),
          'delta' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'description' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'disabled' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'element_validate' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'empty' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'empty_option' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'empty_value' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'field_prefix' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'field_suffix' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'header' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'instance__widget__settings__composed_field__active_tab' => 'edit-instance-widget-settings-composed-field-title',
          'js_select' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'maxlength' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'multiple' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'options' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'parents' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'post_render' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'pre_render' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'prefix' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'process' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'required' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'resizable' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'return_value' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'rows' => array(
            1 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => FALSE,
              'value' => '',
            ),
          ),
          'size' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'states' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'suffix' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'theme' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'theme_wrappers' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'title' => array(
            1 => array(
              'enable_this_attribute' => 1,
              'value' => 'Código de área',
            ),
            2 => array(
              'enable_this_attribute' => 1,
              'value' => 'Teléfono',
            ),
            3 => array(
              'enable_this_attribute' => 1,
              'value' => 'Interno',
            ),
          ),
          'title_display' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'tree' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'type' => array(
            1 => array(
              'value' => 'textfield',
            ),
            2 => array(
              'value' => 'textfield',
            ),
            3 => array(
              'value' => 'textfield',
            ),
          ),
          'value_callback' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
          'weight' => array(
            1 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            2 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
            3 => array(
              'enable_this_attribute' => 0,
              'value' => '',
            ),
          ),
        ),
        'inline' => 0,
        'number_of_subfields' => 3,
      ),
      'type' => 'composed_field_widget',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_tipo_de_docuemento'
  $field_instances['profile2-tutor-field_tipo_de_docuemento'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tipo_de_docuemento',
    'label' => 'Tipo de documento',
    'pcp_tag' => 1,
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'profile2-tutor-field_volveria_a_contratar'
  $field_instances['profile2-tutor-field_volveria_a_contratar'] = array(
    'bundle' => 'tutor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'user',
          'text' => 'none',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_volveria_a_contratar',
    'label' => 'Lo volvería a contratar',
    'pcp_tag' => 0,
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 1,
      'required_by_role' => array(),
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'taxonomy_term-banco-field_codigo'
  $field_instances['taxonomy_term-banco-field_codigo'] = array(
    'bundle' => 'banco',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_codigo',
    'label' => 'codigo',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'required_by_role' => array(),
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'user-user-field_identificador_de_recomenda'
  $field_instances['user-user-field_identificador_de_recomenda'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_identificador_de_recomenda',
    'label' => 'Identificador de recomendacion',
    'required' => 0,
    'settings' => array(
      'required_by_role' => array(),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Apellido');
  t('Banco');
  t('CBU');
  t('CUIT / CUIL');
  t('CUIT de la empresa');
  t('Calidad del trabajo');
  t('Calificacion general');
  t('Calificación');
  t('Categoría');
  t('Comunicación');
  t('Conocimientos');
  t('Cumplimiento de plazos');
  t('Datos de la cuenta bancaria');
  t('Descripción');
  t('Disponibilidad');
  t('Domicilio');
  t('Dotación de la empresa');
  t('Empresa');
  t('Experiencia');
  t('Experiencia laboral');
  t('Fecha de ingreso');
  t('Fecha de nacimiento');
  t('Formación');
  t('Habilidades');
  t('Identificador de recomendacion');
  t('Imagen de perfil');
  t('Indique si es una consultora');
  t('Ingresar CUIT / CUIL sin guiones');
  t('Institucion Referente');
  t('Institución');
  t('Lo volvería a contratar');
  t('Logo');
  t('Mail referente');
  t('Medio a través del cual conoció  Experto Online');
  t('Newsletter');
  t('Nombre comercial');
  t('Nombre del puesto');
  t('Nombres');
  t('Número de cuenta');
  t('Número de cuenta sin guiones ni barras');
  t('Número de documento');
  t('Otro banco');
  t('Otro ramo o actividad');
  t('País');
  t('Puesto');
  t('Página web');
  t('Ramo o actividad');
  t('Razón social');
  t('Referente');
  t('Responsabilidad ante el IVA');
  t('Resumen del servicio');
  t('Rol en  Experto Online');
  t('Sexo');
  t('Skype ID');
  t('Tarifa');
  t('Teléfonos');
  t('Tipo de cuenta');
  t('Tipo de documento');
  t('Título');
  t('codigo');
  t('imagen');
  t('institucion');

  return $field_instances;
}
