<?php
/**
 * @file
 * evento.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function evento_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendario';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'calendario';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Campo: Contenido: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_fecha']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['delta_offset'] = '0';
  /* Criterio de ordenación: Contenido: Fecha -  start date (field_fecha) */
  $handler->display->display_options['sorts']['field_fecha_value']['id'] = 'field_fecha_value';
  $handler->display->display_options['sorts']['field_fecha_value']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['sorts']['field_fecha_value']['field'] = 'field_fecha_value';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_fecha.field_fecha_value' => 'field_data_field_fecha.field_fecha_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-fecha/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_fecha.field_fecha_value' => 'field_data_field_fecha.field_fecha_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-fecha/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'span20 clearfix calendario-dia';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['date_argument']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['validate_options']['code'] = 'if (strlen($argument) == 10) {
  return true;
} else {
  return false;
}';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_fecha.field_fecha_value' => 'field_data_field_fecha.field_fecha_value',
  );
  $handler->display->display_options['path'] = 'eventos';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Campo: Contenido: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_fecha']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_fecha.field_fecha_value' => 'field_data_field_fecha.field_fecha_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-fecha/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block Eventos */
  $handler = $view->new_display('block', 'Block Eventos', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_fecha.field_fecha_value' => 'field_data_field_fecha.field_fecha_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evento' => 'evento',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Fecha: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_fecha.field_fecha_value' => 'field_data_field_fecha.field_fecha_value',
  );
  $translatables['calendario'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Month'),
    t('Todo(s)'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block Eventos'),
    t('Upcoming'),
    t('Upcoming events block'),
  );
  $export['calendario'] = $view;

  $view = new view();
  $view->name = 'evento';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'evento';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Evento Nodo */
  $handler = $view->new_display('panel_pane', 'Evento Nodo', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'formatos_fecha_dia_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Inicio - Hora */
  $handler->display->display_options['fields']['field_fecha_2']['id'] = 'field_fecha_2';
  $handler->display->display_options['fields']['field_fecha_2']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha_2']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha_2']['ui_name'] = 'Inicio - Hora';
  $handler->display->display_options['fields']['field_fecha_2']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_2']['alter']['text'] = '<div class="bg-white">[field_fecha_2]</div>';
  $handler->display->display_options['fields']['field_fecha_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_2']['settings'] = array(
    'format_type' => 'formatos_fecha_hh_mm',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Inicio - Fecha */
  $handler->display->display_options['fields']['field_fecha_1']['id'] = 'field_fecha_1';
  $handler->display->display_options['fields']['field_fecha_1']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha_1']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha_1']['ui_name'] = 'Inicio - Fecha';
  $handler->display->display_options['fields']['field_fecha_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_1']['alter']['text'] = '<div class="fecha-inicio-label span2"><span>Desde</span></div>
<div class="fecha-inicio span12 bg-white"><span>[field_fecha_1]</span></div>
<div class="hora-inicio span3">[field_fecha_2]</div>';
  $handler->display->display_options['fields']['field_fecha_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dia_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fin - Hora */
  $handler->display->display_options['fields']['field_fecha_4']['id'] = 'field_fecha_4';
  $handler->display->display_options['fields']['field_fecha_4']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha_4']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha_4']['ui_name'] = 'Fin - Hora';
  $handler->display->display_options['fields']['field_fecha_4']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_4']['alter']['text'] = '<div class="bg-white">[field_fecha_4]</div>';
  $handler->display->display_options['fields']['field_fecha_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_4']['settings'] = array(
    'format_type' => 'formatos_fecha_hh_mm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fin - Fecha */
  $handler->display->display_options['fields']['field_fecha_3']['id'] = 'field_fecha_3';
  $handler->display->display_options['fields']['field_fecha_3']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha_3']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha_3']['ui_name'] = 'Fin - Fecha';
  $handler->display->display_options['fields']['field_fecha_3']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_3']['alter']['text'] = '<div class="fecha-fin-label span2"><span>Hasta</span></div>
<div class="fecha-fin span12 bg-white"><span>[field_fecha_3]</span></div>
<div class="hora-fin span3">[field_fecha_4]</div>';
  $handler->display->display_options['fields']['field_fecha_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_3']['settings'] = array(
    'format_type' => 'formatos_fecha_dia_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenido: Ubicación */
  $handler->display->display_options['fields']['field_ubicacion_evento']['id'] = 'field_ubicacion_evento';
  $handler->display->display_options['fields']['field_ubicacion_evento']['table'] = 'field_data_field_ubicacion_evento';
  $handler->display->display_options['fields']['field_ubicacion_evento']['field'] = 'field_ubicacion_evento';
  $handler->display->display_options['fields']['field_ubicacion_evento']['label'] = '';
  $handler->display->display_options['fields']['field_ubicacion_evento']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ubicacion_evento']['alter']['text'] = 'Ubicación';
  $handler->display->display_options['fields']['field_ubicacion_evento']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Imágenes */
  $handler->display->display_options['fields']['field_imagenes_evento']['id'] = 'field_imagenes_evento';
  $handler->display->display_options['fields']['field_imagenes_evento']['table'] = 'field_data_field_imagenes_evento';
  $handler->display->display_options['fields']['field_imagenes_evento']['field'] = 'field_imagenes_evento';
  $handler->display->display_options['fields']['field_imagenes_evento']['label'] = '';
  $handler->display->display_options['fields']['field_imagenes_evento']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagenes_evento']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_imagenes_evento']['alter']['text'] = '<span class="span8 imagen-uno">[field_imagenes_evento]</span>';
  $handler->display->display_options['fields']['field_imagenes_evento']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagenes_evento']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagenes_evento']['settings'] = array(
    'image_style' => '200x100',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imagenes_evento']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_imagenes_evento']['delta_offset'] = '0';
  /* Campo: Contenido: Imágenes */
  $handler->display->display_options['fields']['field_imagenes_evento_1']['id'] = 'field_imagenes_evento_1';
  $handler->display->display_options['fields']['field_imagenes_evento_1']['table'] = 'field_data_field_imagenes_evento';
  $handler->display->display_options['fields']['field_imagenes_evento_1']['field'] = 'field_imagenes_evento';
  $handler->display->display_options['fields']['field_imagenes_evento_1']['label'] = '';
  $handler->display->display_options['fields']['field_imagenes_evento_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagenes_evento_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_imagenes_evento_1']['alter']['text'] = '<span class="span8 imagen-dos">[field_imagenes_evento_1]</span>';
  $handler->display->display_options['fields']['field_imagenes_evento_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagenes_evento_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagenes_evento_1']['settings'] = array(
    'image_style' => '200x100',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imagenes_evento_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_imagenes_evento_1']['delta_offset'] = '1';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="nodo-evento-content span18 offset1">
<h2 class="verde">[field_fecha]</h2>
<div class="evento-nodo-titulo">[title]</div>
<div class="evento-nodo-fecha-inicio clearfix">[field_fecha_1]</div>
<div class="evento-nodo-fecha-fin clearfix">[field_fecha_3]</div>
<div class="evento-nodo-ubicacion">[field_ubicacion_evento]</div>
<div class="evento-nodo-descripcion">[body]</div>
<div class="evento-nodo-imagenes clearfix">
[field_imagenes_evento]
[field_imagenes_evento_1]
<div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );
  $translatables['evento'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Evento Nodo'),
    t('<div class="bg-white">[field_fecha_2]</div>'),
    t('<div class="fecha-inicio-label span2"><span>Desde</span></div>
<div class="fecha-inicio span12 bg-white"><span>[field_fecha_1]</span></div>
<div class="hora-inicio span3">[field_fecha_2]</div>'),
    t('<div class="bg-white">[field_fecha_4]</div>'),
    t('<div class="fecha-fin-label span2"><span>Hasta</span></div>
<div class="fecha-fin span12 bg-white"><span>[field_fecha_3]</span></div>
<div class="hora-fin span3">[field_fecha_4]</div>'),
    t('Ubicación'),
    t('<span class="span8 imagen-uno">[field_imagenes_evento]</span>'),
    t('<span class="span8 imagen-dos">[field_imagenes_evento_1]</span>'),
    t('<div class="nodo-evento-content span18 offset1">
<h2 class="verde">[field_fecha]</h2>
<div class="evento-nodo-titulo">[title]</div>
<div class="evento-nodo-fecha-inicio clearfix">[field_fecha_1]</div>
<div class="evento-nodo-fecha-fin clearfix">[field_fecha_3]</div>
<div class="evento-nodo-ubicacion">[field_ubicacion_evento]</div>
<div class="evento-nodo-descripcion">[body]</div>
<div class="evento-nodo-imagenes clearfix">
[field_imagenes_evento]
[field_imagenes_evento_1]
<div>
</div>'),
    t('Todo(s)'),
    t('View panes'),
  );
  $export['evento'] = $view;

  return $export;
}
