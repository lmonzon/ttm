<?php
/**
 * @file
 * proyecto.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function proyecto_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_disponibilidad'
  $field_bases['field_disponibilidad'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_disponibilidad',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'col' => array(
        0 => 'col',
      ),
      'row' => array(
        0 => 'row',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'matrix',
    'settings' => array(
      'cols_count' => 3,
      'define' => 'cols',
      'preview' => array(
        'cols' => array(
          1 => array(
            'button' => 'Change settings',
          ),
          2 => array(
            'button' => 'Change settings',
          ),
          3 => array(
            'button' => 'Change settings',
          ),
        ),
        'define' => 'cols',
        'form' => array(
          'cols' => array(
            1 => array(
              'calculation' => array(
                'calculation' => 'sum',
                'prefix' => '',
                'rounding' => '',
                'suffix' => '',
              ),
              'checkboxes' => array(
                'allowed_values' => 'mañana|Si',
                'allowed_values_function' => 0,
                'required' => 0,
              ),
              'custom' => array(
                'custom' => 'matrix_custom_processing_example',
              ),
              'field_type' => 'checkboxes',
              'radios' => array(
                'allowed_values' => '',
                'allowed_values_function' => 0,
                'required' => 0,
              ),
              'select' => array(
                'allowed_values' => '',
                'allowed_values_function' => 0,
                'required' => 0,
              ),
              'textfield' => array(
                'prefix' => '',
                'required' => 0,
                'size' => '',
                'suffix' => '',
              ),
              'title' => 'Mañana',
            ),
          ),
          'submit' => 'Actualizar',
        ),
        'rows' => array(
          1 => array(
            'button' => 'Change settings',
          ),
          2 => array(
            'button' => 'Change settings',
          ),
          3 => array(
            'button' => 'Change settings',
          ),
          4 => array(
            'button' => 'Change settings',
          ),
          5 => array(
            'button' => 'Change settings',
          ),
          6 => array(
            'button' => 'Change settings',
          ),
          7 => array(
            'button' => 'Change settings',
          ),
        ),
      ),
      'profile2_private' => 0,
      'rows_count' => 7,
      'settings' => 'a:6:{i:0;b:0;s:10:"old_define";s:4:"cols";s:14:"old_rows_count";s:1:"7";s:14:"old_cols_count";s:1:"3";s:4:"rows";a:7:{i:1;a:8:{s:10:"field_type";s:4:"none";s:5:"title";s:5:"Lunes";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}i:2;a:8:{s:10:"field_type";s:4:"none";s:5:"title";s:6:"Martes";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}i:3;a:8:{s:10:"field_type";s:4:"none";s:5:"title";s:10:"Miércoles";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}i:4;a:8:{s:10:"field_type";s:4:"none";s:5:"title";s:6:"Jueves";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}i:5;a:8:{s:10:"field_type";s:4:"none";s:5:"title";s:7:"Viernes";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}i:6;a:8:{s:10:"field_type";s:4:"none";s:5:"title";s:7:"Sábado";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}i:7;a:8:{s:10:"field_type";s:4:"none";s:5:"title";s:7:"Domingo";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}}s:4:"cols";a:3:{i:1;a:8:{s:10:"field_type";s:10:"checkboxes";s:5:"title";s:7:"Mañana";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:10:"mañana|Si";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}i:2;a:8:{s:10:"field_type";s:10:"checkboxes";s:5:"title";s:5:"Tarde";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:8:"tarde|Si";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}i:3;a:8:{s:10:"field_type";s:10:"checkboxes";s:5:"title";s:5:"Noche";s:9:"textfield";a:3:{s:4:"size";s:0:"";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";}s:6:"select";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:6:"radios";a:2:{s:14:"allowed_values";s:0:"";s:23:"allowed_values_function";s:1:"0";}s:10:"checkboxes";a:2:{s:14:"allowed_values";s:8:"noche|Si";s:23:"allowed_values_function";s:1:"0";}s:11:"calculation";a:4:{s:11:"calculation";s:3:"sum";s:6:"prefix";s:0:"";s:6:"suffix";s:0:"";s:8:"rounding";s:0:"";}s:6:"custom";a:1:{s:6:"custom";s:32:"matrix_custom_processing_example";}}}}',
    ),
    'translatable' => 0,
    'type' => 'matrix_custom',
  );

  // Exported field_base: 'field_fecha_acordada'
  $field_bases['field_fecha_acordada'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fecha_acordada',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'profile2_private' => FALSE,
      'timezone_db' => '',
      'todate' => 'required',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_fecha_inicio'
  $field_bases['field_fecha_inicio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fecha_inicio',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'profile2_private' => FALSE,
      'timezone_db' => '',
      'todate' => 'required',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_fechas_videoconferencia'
  $field_bases['field_fechas_videoconferencia'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fechas_videoconferencia',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'profile2_private' => FALSE,
      'timezone_db' => 'UTC',
      'todate' => 'required',
      'tz_handling' => 'user',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_horas_acordadas'
  $field_bases['field_horas_acordadas'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_horas_acordadas',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_presupuesto'
  $field_bases['field_presupuesto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_presupuesto',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_proyecto'
  $field_bases['field_proyecto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_proyecto',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'contratos_proyectos',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_puntos'
  $field_bases['field_puntos'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_puntos',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_tokbox'
  $field_bases['field_tokbox'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tokbox',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'opentok',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'opentok',
  );

  // Exported field_base: 'field_tutor'
  $field_bases['field_tutor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tutor',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'users' => array(
        'columns' => array(
          'target_id' => 'uid',
        ),
        'table' => 'users',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'contratos_tutores',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
