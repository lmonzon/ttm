<?php
/**
 * @file
 * proyecto.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function proyecto_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_contrato';
  $strongarm->value = '1';
  $export['ant_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_contrato';
  $strongarm->value = '[node:author:profile-main:field_apellido], [node:author:profile-main:field_nombres] - [node:field-proyecto:title] - [node:field-tutor:profile-main:field_apellido], [node:field-tutor:profile-main:field_nombres]';
  $export['ant_pattern_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_contrato';
  $strongarm->value = 0;
  $export['ant_php_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_menu_links';
  $strongarm->value = '0';
  $export['clone_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_method';
  $strongarm->value = 'prepopulate';
  $export['clone_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_nodes_without_confirm';
  $strongarm->value = '0';
  $export['clone_nodes_without_confirm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_omitted';
  $strongarm->value = array(
    'calificacion' => 'calificacion',
    'articulo' => 'articulo',
    'contrato' => 'contrato',
    'destacado' => 'destacado',
    'evento' => 'evento',
    'noticia' => 'noticia',
    'product' => 'product',
    'pagina' => 'pagina',
    'forum' => 'forum',
    'webform' => 'webform',
    'proyecto' => 0,
  );
  $export['clone_omitted'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_destacado';
  $strongarm->value = 0;
  $export['clone_reset_destacado'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_noticia';
  $strongarm->value = 0;
  $export['clone_reset_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_pagina';
  $strongarm->value = 0;
  $export['clone_reset_pagina'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_proyecto';
  $strongarm->value = 0;
  $export['clone_reset_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_webform';
  $strongarm->value = 0;
  $export['clone_reset_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_use_node_type_name';
  $strongarm->value = 0;
  $export['clone_use_node_type_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_contrato';
  $strongarm->value = 0;
  $export['comment_anonymous_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_proyecto';
  $strongarm->value = 0;
  $export['comment_anonymous_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_contrato';
  $strongarm->value = '0';
  $export['comment_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_contrato';
  $strongarm->value = 0;
  $export['comment_default_mode_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_proyecto';
  $strongarm->value = 1;
  $export['comment_default_mode_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_contrato';
  $strongarm->value = '50';
  $export['comment_default_per_page_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_proyecto';
  $strongarm->value = '50';
  $export['comment_default_per_page_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_contrato';
  $strongarm->value = 1;
  $export['comment_form_location_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_proyecto';
  $strongarm->value = 1;
  $export['comment_form_location_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_contrato';
  $strongarm->value = '1';
  $export['comment_preview_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_proyecto';
  $strongarm->value = '1';
  $export['comment_preview_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_proyecto';
  $strongarm->value = '1';
  $export['comment_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_contrato';
  $strongarm->value = 1;
  $export['comment_subject_field_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_proyecto';
  $strongarm->value = 1;
  $export['comment_subject_field_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_contrato';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_proyecto';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_contrato';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_proyecto';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_contrato';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_proyecto';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__contrato';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__proyecto';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'scheduler_settings' => array(
          'weight' => '4',
        ),
        'locations' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_contrato';
  $strongarm->value = '0';
  $export['language_content_type_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_proyecto';
  $strongarm->value = '0';
  $export['language_content_type_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_contrato';
  $strongarm->value = array();
  $export['menu_options_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_proyecto';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_contrato';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_proyecto';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_contrato';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_proyecto';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_contrato';
  $strongarm->value = '0';
  $export['node_preview_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_proyecto';
  $strongarm->value = '0';
  $export['node_preview_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_contrato';
  $strongarm->value = 0;
  $export['node_submitted_contrato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_proyecto';
  $strongarm->value = 1;
  $export['node_submitted_proyecto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_contrato_pattern';
  $strongarm->value = 'contrato/[node:nid]';
  $export['pathauto_node_contrato_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_proyecto_pattern';
  $strongarm->value = 'proyecto/[node:title]';
  $export['pathauto_node_proyecto_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_contrato_aprobar_pattern';
  $strongarm->value = 'aprobar-contrato/[node:nid]';
  $export['pathauto_tutoriame_contratar_contrato_aprobar_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_contrato_rechazar_pattern';
  $strongarm->value = 'rechazar-contrato/[node:nid]';
  $export['pathauto_tutoriame_contratar_contrato_rechazar_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_articulo_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_articulo_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_contrato_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_contrato_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_destacado_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_destacado_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_evento_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_evento_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_forum_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_noticia_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_noticia_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_pagina_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_pagina_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_pattern';
  $strongarm->value = 'contratar-para/[node:title]';
  $export['pathauto_tutoriame_contratar_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_product_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_product_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_proyecto_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_proyecto_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_node_webform_pattern';
  $strongarm->value = '';
  $export['pathauto_tutoriame_contratar_node_webform_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_tutoriame_contratar_user_pattern';
  $strongarm->value = 'contratar/[user:profile-main:field_apellido]-[user:profile-main:field_nombres]';
  $export['pathauto_tutoriame_contratar_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_contratar-aprobar_contrato_enlace_aceptar';
  $strongarm->value = 'Aceptar';
  $export['ttm_contratar-aprobar_contrato_enlace_aceptar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_contratar-aprobar_contrato_enlace_rechazar';
  $strongarm->value = 'Rechazar';
  $export['ttm_contratar-aprobar_contrato_enlace_rechazar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_contratar-contratar_enlace';
  $strongarm->value = 'Contratar';
  $export['ttm_contratar-contratar_enlace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ttm_contratar-contratar_para_enlace';
  $strongarm->value = 'Contratar tutor';
  $export['ttm_contratar-contratar_para_enlace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_contratar_roles_contratados';
  $strongarm->value = array(
    4 => '4',
    1 => 0,
    2 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
  );
  $export['tutoriame_contratar_roles_contratados'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_contratar_roles_contratan';
  $strongarm->value = array(
    3 => '3',
    1 => 0,
    2 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
  );
  $export['tutoriame_contratar_roles_contratan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tutoriame_contratar_tipos_contenido';
  $strongarm->value = array(
    'proyecto' => 'proyecto',
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
  $export['tutoriame_contratar_tipos_contenido'] = $strongarm;

  return $export;
}
