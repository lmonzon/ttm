<?php
/**
 * @file
 * calificaciones.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function calificaciones_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_calificacion';
  $strongarm->value = '1';
  $export['ant_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_calificacion';
  $strongarm->value = 'Calificación de [node:field-proyecto-calificado:title] por [node:author:profile-main:field_apellido], [node:author:profile-main:field_nombres]';
  $export['ant_pattern_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_calificacion';
  $strongarm->value = 0;
  $export['ant_php_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_calificacion';
  $strongarm->value = 0;
  $export['comment_anonymous_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_calificacion';
  $strongarm->value = '1';
  $export['comment_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_calificacion';
  $strongarm->value = 1;
  $export['comment_default_mode_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_calificacion';
  $strongarm->value = '50';
  $export['comment_default_per_page_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_calificacion';
  $strongarm->value = 1;
  $export['comment_form_location_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_calificacion';
  $strongarm->value = '1';
  $export['comment_preview_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_calificacion';
  $strongarm->value = 1;
  $export['comment_subject_field_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_calificacion';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_calificacion';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_calificacion';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__calificacion';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'workflow_tab' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '15',
        ),
        'locations' => array(
          'weight' => '16',
        ),
        'metatags' => array(
          'weight' => '15',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_tags';
  $strongarm->value = 'vote, trabajo, comunicacion, conocimientos, plazos, experiencia, volver a contratar, emprendedor, tutor';
  $export['fivestar_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_calificacion';
  $strongarm->value = '0';
  $export['language_content_type_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_calificacion';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_calificacion';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_calificacion';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_calificacion';
  $strongarm->value = '0';
  $export['node_preview_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_calificacion';
  $strongarm->value = 1;
  $export['node_submitted_calificacion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_articulo_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_articulo_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_calificacion_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_calificacion_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_contrato_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_contrato_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_destacado_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_destacado_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_evento_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_evento_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_forum_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_noticia_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_noticia_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_pagina_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_pagina_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_pattern';
  $strongarm->value = 'calificar/[node:title]';
  $export['pathauto_tutoriame_calificar_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_product_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_product_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_proyecto_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_proyecto_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_calificar_webform_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_calificar_webform_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_calificar_roles_califican';
  $strongarm->value = array(
    3 => '3',
    4 => '4',
    8 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    2 => 0,
    1 => 0,
  );
  $export['tutoriame_calificar_roles_califican'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_calificar_tipos_contenido';
  $strongarm->value = array(
    'proyecto' => 'proyecto',
    'calificacion' => 0,
    'articulo' => 0,
    'contrato' => 0,
    'destacado' => 0,
    'evento' => 0,
    'noticia' => 0,
    'product' => 0,
    'pagina' => 0,
    'forum' => 0,
    'webform' => 0,
  );
  $export['tutoriame_calificar_tipos_contenido'] = $strongarm;

  return $export;
}
