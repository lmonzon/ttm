<?php
/**
 * @file
 * proyecto.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function proyecto_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contratos_proyectos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contratos - Proyectos';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Criterio de ordenación: Contenido: Título */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filtro contextual: Contenido: uid del autor */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'global $user;

return($user->uid);';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;

  /* Display: Referencia a entidades */
  $handler = $view->new_display('entityreference', 'Referencia a entidades', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['contratos_proyectos'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Todo(s)'),
    t('Referencia a entidades'),
  );
  $export['contratos_proyectos'] = $view;

  $view = new view();
  $view->name = 'contratos_tutores';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Contratos - Tutores';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
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
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Criterio de ordenación: Usuario: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Criterios de filtrado: Usuario: Activo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;

  /* Display: Referencia a entidades */
  $handler = $view->new_display('entityreference', 'Referencia a entidades', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['contratos_tutores'] = array(
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
    t('Referencia a entidades'),
  );
  $export['contratos_tutores'] = $view;

  $view = new view();
  $view->name = 'proyecto';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'proyecto';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );

  /* Display: Info Proyecto */
  $handler = $view->new_display('panel_pane', 'Info Proyecto', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Marcas: me_interesa contador */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'me_interesa';
  /* Relación: Marcas: conversaciones contador */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'conversaciones';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="proyecto-titulo verde">[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'proyecto-titulo verde';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['alter']['text'] = '[field_categoria]';
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['empty'] = 'No se han elegido categorías para este proyecto';
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' / ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_categoria']['separator'] = '<br>';
  /* Campo: Contenido: Presupuesto */
  $handler->display->display_options['fields']['field_presupuesto']['id'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['field'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['text'] = '[field_presupuesto-value] Créditos';
  $handler->display->display_options['fields']['field_presupuesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto']['empty'] = 'No se ha determinado un presupuesto para este proyecto';
  $handler->display->display_options['fields']['field_presupuesto']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_presupuesto']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Campo: Contenido: Fecha de inicio requerida */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aaaa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha de cierre */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['ui_name'] = 'Fecha de cierre';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aaaa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'hace [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Campo: Workflow current: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Campo: Campo: Disponibilidad */
  $handler->display->display_options['fields']['field_disponibilidad']['id'] = 'field_disponibilidad';
  $handler->display->display_options['fields']['field_disponibilidad']['table'] = 'field_data_field_disponibilidad';
  $handler->display->display_options['fields']['field_disponibilidad']['field'] = 'field_disponibilidad';
  $handler->display->display_options['fields']['field_disponibilidad']['label'] = '';
  $handler->display->display_options['fields']['field_disponibilidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_disponibilidad']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_disponibilidad']['alter']['text'] = '<div class="medium bold gris-tres disponibilidad-titulo">Disponibilidad requerida:</div>
<div>[field_disponibilidad]</div>
';
  $handler->display->display_options['fields']['field_disponibilidad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_disponibilidad']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_disponibilidad']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_disponibilidad']['separator'] = '<br />';
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="medium rojo bold">Descripción del proyecto:</div>
<div>[body]</div>';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '135';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Marcas: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['empty'] = '0';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Campo: Marcas: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['empty'] = '0';
  $handler->display->display_options['fields']['count_1']['separator'] = '';
  /* Campo: Global: Vista */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['empty'] = '0';
  $handler->display->display_options['fields']['view']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['view']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'tutores_contratados';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_1';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Campo: Vistas: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'view';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional']['then'] = '0';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[view]';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="proyecto-categoria medium span32 clearfix">
<table>
<tbody>
<tr>
<td class="gris-tres">Categoría: </td>
<td class="rojo bold">[field_categoria]</td>
</tr>
</tbody>
</table>
</div>

<div class="proyecto-info span32 clearfix">
<table>
<body>
<tr>
<td><div class="span16 bold"><span>Presupuesto:</span> <span class="rojo">[field_presupuesto]</span></div></td>
<td><div class="span16 bold"><span>Estado:</span> <span class="rojo">[sid]</span></div></td>
<tr>
<tr>
<td><div class="span16">Fecha inicio: [field_fecha_inicio]</div></td>
<td><div class="span16">Tutores interesados: [count]</div></td>
</tr>
<tr>
<td><div class="span16">Fecha tope: [field_fecha_inicio_1]</div></td>
<td><div class="span16">Tutores consultados: [count_1]</div></td>
</tr>
<tr>
<td><div class="span16">Publicado: [created]</div></td>
<td><div class="span16"><span class="span6">Tutores contratados:</span><span class="span10">[views_conditional]</span></div></td>
</tr>
</body>
</table>
<div class="proyecto-disponibilidad clearfix">
[field_disponibilidad]
</div>
<div class="proyecto-descripcion clearfix">
[body]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Field_name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = 'field_estado_del_proyecto';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );

  /* Display: Info Autor */
  $handler = $view->new_display('panel_pane', 'Info Autor', 'panel_pane_2');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'emprendedor' => 'emprendedor',
    'main' => 'main',
    'tutor' => 'tutor',
  );
  /* Relación: Perfil: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_lid']['id'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_lid']['field'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['relationship'] = 'profile';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['relationship'] = 'profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => '49x50',
    'image_link' => '',
  );
  /* Campo: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_pais_lid';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province], ';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['province']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['province']['empty_zero'] = TRUE;
  /* Campo: Location: País */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_pais_lid';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['text'] = '[province][country] ';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['country']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['country']['empty_zero'] = TRUE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '<span>Participa en:</span>
</br>
<span class="bold">[name_1]</span>';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[name_1]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="proyecto-info-usuario-content span9 offset1 clearfix">
<div class="proyecto-usuario-imagen span2">[field_imagen_perfil]</div>
<div class="proyecto-info-usuario span6 offset1 clearfix">
<div class="proyecto-usuario-nick medium bold"><span class="gris-cinco">Usuario:</span> <span class="rojo">[name]</span></div>
<div class="proyecto-usuario-pais gris-cinco bold normal-plus">[country]</div>
<br>
<div class="gris-cinco normal-plus">[uid]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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

  /* Display: Autor Conteo Proyectos Abiertos */
  $handler = $view->new_display('panel_pane', 'Autor Conteo Proyectos Abiertos', 'panel_pane_3');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'proyectos-activos-cuenta normal-min';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span9 offset1 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black"><span class="icono-activo">Proyectos abiertos</span></div></td>
<td><div class="span3 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: uid del autor */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:node.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: uid del autor',
    ),
  );

  /* Display: Autor Conteo Puntos  Experto Online */
  $handler = $view->new_display('panel_pane', 'Autor Conteo Puntos  Experto Online', 'panel_pane_5');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Relación: Userpoints total: Usuario */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'userpoints_total';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'uid_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['relationship'] = 'uid';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['points']['separator'] = '';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-puntos-ttm span9 offset1 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black"><span class="icono-puntos-ttm">Créditos  Experto Online</span></div></td>
<td><div class="span3 align-right normal-min bold gris-tres">[points]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );

  /* Display: Categoría del Proyecto */
  $handler = $view->new_display('panel_pane', 'Categoría del Proyecto', 'panel_pane_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_categoria']['element_class'] = 'rojo';
  $handler->display->display_options['fields']['field_categoria']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_categoria']['element_label_class'] = 'gris-tres lowercase';
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_categoria']['element_wrapper_class'] = 'bold medium span9 offset1';
  $handler->display->display_options['fields']['field_categoria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' / ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_categoria']['separator'] = '<br>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );

  /* Display: Bloque Categorías Listado */
  $handler = $view->new_display('panel_pane', 'Bloque Categorías Listado', 'panel_pane_6');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h5 class="uppercase black">Proyectos publicados por categoría</h5>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pie de página: Global: Área de texto */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<?php global $base_path;?>
<div class="categorias-proyecto-ver-todas medium bold align-right">
<a class="rojo" href="<?php print $base_path;?>categorias-proyecto">Ver todas</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Campo: Categoría (field_categoria) */
  $handler->display->display_options['relationships']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['relationships']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['relationships']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_categoria_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria_1']['id'] = 'field_categoria_1';
  $handler->display->display_options['fields']['field_categoria_1']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria_1']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria_1']['label'] = '';
  $handler->display->display_options['fields']['field_categoria_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_categoria_1']['alter']['path'] = 'buscar-proyectos?field_categoria_tid=[tid]';
  $handler->display->display_options['fields']['field_categoria_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria_1']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria_1']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' /  ',
  );
  $handler->display->display_options['fields']['field_categoria_1']['delta_offset'] = '0';
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
<tbody>
<tr>
<td><span class="span8">[field_categoria_1]</span></td>
<td><span class="span1 align-right">[nid]</span></td>
</tr>
</tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'proyecto' => 'proyecto',
  );

  /* Display: Categorías Listado Todas */
  $handler = $view->new_display('page', 'Categorías Listado Todas', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-categorias-proyecto-todas';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="gris-tres">Categorías publicadas por proyecto</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Campo: Categoría (field_categoria) */
  $handler->display->display_options['relationships']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['relationships']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['relationships']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_categoria_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['alter']['path'] = 'buscar-proyectos?field_categoria_tid=[tid]';
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' / ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table class="categorias-proyecto-todas">
<tbody>
<tr>
<td><span class="span9">[field_categoria]</span></td>
<td><span class="span2 align-right">[nid]</span></td>
</tr>
</tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'categorias-proyecto';

  /* Display: Botón Buscar Tutores */
  $handler = $view->new_display('panel_pane', 'Botón Buscar Tutores', 'panel_pane_7');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Campo: Categoría (field_categoria) */
  $handler->display->display_options['relationships']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['relationships']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['relationships']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_categoria_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['alter']['text'] = 'field_categoria_tid=[tid]';
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_categoria']['separator'] = '&';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Buscar Tutores
';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'buscar-tutores?[field_categoria]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'span7 offset2';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );

  /* Display: Calificacion pública para emprendedor */
  $handler = $view->new_display('panel_pane', 'Calificacion pública para emprendedor', 'panel_pane_8');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['id'] = 'reverse_field_proyecto_calificado_node';
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['field'] = 'reverse_field_proyecto_calificado_node';
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_proyecto_calificado_node';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => '49x50',
    'image_link' => 'content',
  );
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Calificación para el emprendedor */
  $handler->display->display_options['fields']['field_calif_publica_emprendedor']['id'] = 'field_calif_publica_emprendedor';
  $handler->display->display_options['fields']['field_calif_publica_emprendedor']['table'] = 'field_data_field_calif_publica_emprendedor';
  $handler->display->display_options['fields']['field_calif_publica_emprendedor']['field'] = 'field_calif_publica_emprendedor';
  $handler->display->display_options['fields']['field_calif_publica_emprendedor']['relationship'] = 'reverse_field_proyecto_calificado_node';
  $handler->display->display_options['fields']['field_calif_publica_emprendedor']['label'] = '';
  $handler->display->display_options['fields']['field_calif_publica_emprendedor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calif_publica_emprendedor']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<div class="calificacion-proyecto-content span32 offset1">
	<div class="calificacion-proyecto-label rojo bold span32">Calificación para el emprendedor</div>
	<div class="calificacion-usuario-imagen span2">[field_imagen_perfil]</div>
	<div class="calificacion-proyecto-detalle span28 offset1 clearfix">
		<div class="mensaje-gris-light clearfix">
		<div class="bg-gris-uno clearfix">
			<div class="calificacion-usuario-nombre">[name]</div>
			<div class="calificacion-comentario">[field_calif_publica_emprendedor]</div>
		</div>
</div>
	</div>
</div>';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_proyecto_calificado_target_id';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );

  /* Display: Calificacion pública para tutor */
  $handler = $view->new_display('panel_pane', 'Calificacion pública para tutor', 'panel_pane_9');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['id'] = 'reverse_field_proyecto_calificado_node';
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['field'] = 'reverse_field_proyecto_calificado_node';
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_proyecto_calificado_node';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => '49x50',
    'image_link' => 'content',
  );
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Calificacion para el tutor */
  $handler->display->display_options['fields']['field_calif_publica_tutor']['id'] = 'field_calif_publica_tutor';
  $handler->display->display_options['fields']['field_calif_publica_tutor']['table'] = 'field_data_field_calif_publica_tutor';
  $handler->display->display_options['fields']['field_calif_publica_tutor']['field'] = 'field_calif_publica_tutor';
  $handler->display->display_options['fields']['field_calif_publica_tutor']['relationship'] = 'reverse_field_proyecto_calificado_node';
  $handler->display->display_options['fields']['field_calif_publica_tutor']['label'] = '';
  $handler->display->display_options['fields']['field_calif_publica_tutor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calif_publica_tutor']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<div class="calificacion-proyecto-content span32 offset1">
	<div class="calificacion-proyecto-label rojo bold span32">Calificación para el tutor</div>
	<div class="calificacion-usuario-imagen span2">[field_imagen_perfil]</div>
	<div class="calificacion-proyecto-detalle span28 offset1 clearfix">
		<div class="mensaje-gris-light clearfix">
		<div class="bg-gris-uno clearfix">
			<div class="calificacion-usuario-nombre">[name]</div>
			<div class="calificacion-comentario">[field_calif_publica_tutor]</div>
		</div>
</div>
	</div>
</div>';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_proyecto_calificado_target_id';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );

  /* Display: Calificacion privada para tutor */
  $handler = $view->new_display('panel_pane', 'Calificacion privada para tutor', 'panel_pane_10');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['id'] = 'reverse_field_proyecto_calificado_node';
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_proyecto_calificado_node']['field'] = 'reverse_field_proyecto_calificado_node';
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_proyecto_calificado_node';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_perfil_tutor_target_id']['id'] = 'field_perfil_tutor_target_id';
  $handler->display->display_options['relationships']['field_perfil_tutor_target_id']['table'] = 'field_data_field_perfil_tutor';
  $handler->display->display_options['relationships']['field_perfil_tutor_target_id']['field'] = 'field_perfil_tutor_target_id';
  $handler->display->display_options['relationships']['field_perfil_tutor_target_id']['relationship'] = 'reverse_field_proyecto_calificado_node';
  $handler->display->display_options['relationships']['field_perfil_tutor_target_id']['label'] = 'Perfil Tutor';
  $handler->display->display_options['relationships']['field_perfil_tutor_target_id']['required'] = TRUE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_perfil_emprendedor_target_id']['id'] = 'field_perfil_emprendedor_target_id';
  $handler->display->display_options['relationships']['field_perfil_emprendedor_target_id']['table'] = 'field_data_field_perfil_emprendedor';
  $handler->display->display_options['relationships']['field_perfil_emprendedor_target_id']['field'] = 'field_perfil_emprendedor_target_id';
  $handler->display->display_options['relationships']['field_perfil_emprendedor_target_id']['relationship'] = 'reverse_field_proyecto_calificado_node';
  $handler->display->display_options['relationships']['field_perfil_emprendedor_target_id']['label'] = 'Perfil Emprendedor';
  /* Relación: Perfil: Usuario uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'field_perfil_tutor_target_id';
  $handler->display->display_options['relationships']['user']['label'] = 'Tutor';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relación: Perfil: Usuario uid */
  $handler->display->display_options['relationships']['user_1']['id'] = 'user_1';
  $handler->display->display_options['relationships']['user_1']['table'] = 'profile';
  $handler->display->display_options['relationships']['user_1']['field'] = 'user';
  $handler->display->display_options['relationships']['user_1']['relationship'] = 'field_perfil_emprendedor_target_id';
  $handler->display->display_options['relationships']['user_1']['label'] = 'Emprendedor';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => '49x50',
    'image_link' => 'content',
  );
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Calificación privada para el tutor */
  $handler->display->display_options['fields']['field_calif_privada_tutor']['id'] = 'field_calif_privada_tutor';
  $handler->display->display_options['fields']['field_calif_privada_tutor']['table'] = 'field_data_field_calif_privada_tutor';
  $handler->display->display_options['fields']['field_calif_privada_tutor']['field'] = 'field_calif_privada_tutor';
  $handler->display->display_options['fields']['field_calif_privada_tutor']['relationship'] = 'reverse_field_proyecto_calificado_node';
  $handler->display->display_options['fields']['field_calif_privada_tutor']['label'] = '';
  $handler->display->display_options['fields']['field_calif_privada_tutor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calif_privada_tutor']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<div class="calificacion-proyecto-content span32 offset1">
	<div class="calificacion-proyecto-label rojo bold span32">Calificación privada para el tutor</div>
	<div class="calificacion-usuario-imagen span2">[field_imagen_perfil]</div>
	<div class="calificacion-proyecto-detalle span28 offset1 clearfix">
		<div class="mensaje-gris-light clearfix">
		<div class="bg-gris-uno clearfix">
			<div class="calificacion-usuario-nombre">[name]</div>
			<div class="calificacion-comentario">[field_calif_privada_tutor]</div>
		</div>
</div>
	</div>
</div>';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['uid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_proyecto_calificado_target_id';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'user_1';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 2;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );
  $translatables['proyecto'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('autor'),
    t('Categoría'),
    t('Todo(s)'),
    t('Info Proyecto'),
    t('counter'),
    t('<h2 class="proyecto-titulo verde">[title]</h2>'),
    t('[field_categoria]'),
    t('No se han elegido categorías para este proyecto'),
    t('[field_presupuesto-value] Créditos'),
    t('No se ha determinado un presupuesto para este proyecto'),
    t('hace [created]'),
    t('<div class="medium bold gris-tres disponibilidad-titulo">Disponibilidad requerida:</div>
<div>[field_disponibilidad]</div>
'),
    t('<div class="medium rojo bold">Descripción del proyecto:</div>
<div>[body]</div>'),
    t('.'),
    t('<div class="proyecto-categoria medium span32 clearfix">
<table>
<tbody>
<tr>
<td class="gris-tres">Categoría: </td>
<td class="rojo bold">[field_categoria]</td>
</tr>
</tbody>
</table>
</div>

<div class="proyecto-info span32 clearfix">
<table>
<body>
<tr>
<td><div class="span16 bold"><span>Presupuesto:</span> <span class="rojo">[field_presupuesto]</span></div></td>
<td><div class="span16 bold"><span>Estado:</span> <span class="rojo">[sid]</span></div></td>
<tr>
<tr>
<td><div class="span16">Fecha inicio: [field_fecha_inicio]</div></td>
<td><div class="span16">Tutores interesados: [count]</div></td>
</tr>
<tr>
<td><div class="span16">Fecha tope: [field_fecha_inicio_1]</div></td>
<td><div class="span16">Tutores consultados: [count_1]</div></td>
</tr>
<tr>
<td><div class="span16">Publicado: [created]</div></td>
<td><div class="span16"><span class="span6">Tutores contratados:</span><span class="span10">[views_conditional]</span></div></td>
</tr>
</body>
</table>
<div class="proyecto-disponibilidad clearfix">
[field_disponibilidad]
</div>
<div class="proyecto-descripcion clearfix">
[body]
</div>
</div>'),
    t('View panes'),
    t('Info Autor'),
    t('Perfil'),
    t('Location from field_pais'),
    t('Usuario entidad referenciada de field_institucion'),
    t('[name]'),
    t('[province], '),
    t('[province][country] '),
    t('<span>Participa en:</span>
</br>
<span class="bold">[name_1]</span>'),
    t('[name_1]'),
    t('<div class="proyecto-info-usuario-content span9 offset1 clearfix">
<div class="proyecto-usuario-imagen span2">[field_imagen_perfil]</div>
<div class="proyecto-info-usuario span6 offset1 clearfix">
<div class="proyecto-usuario-nick medium bold"><span class="gris-cinco">Usuario:</span> <span class="rojo">[name]</span></div>
<div class="proyecto-usuario-pais gris-cinco bold normal-plus">[country]</div>
<br>
<div class="gris-cinco normal-plus">[uid]</div>
</div>
</div>'),
    t('Autor Conteo Proyectos Abiertos'),
    t('<div class="autor-proyectos-activos span9 offset1 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black"><span class="icono-activo">Proyectos abiertos</span></div></td>
<td><div class="span3 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Autor Conteo Puntos  Experto Online'),
    t('Usuarios'),
    t('<div class="autor-puntos-ttm span9 offset1 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black"><span class="icono-puntos-ttm">Créditos  Experto Online</span></div></td>
<td><div class="span3 align-right normal-min bold gris-tres">[points]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Categoría del Proyecto'),
    t('Bloque Categorías Listado'),
    t('<h5 class="uppercase black">Proyectos publicados por categoría</h5>'),
    t('<?php global $base_path;?>
<div class="categorias-proyecto-ver-todas medium bold align-right">
<a class="rojo" href="<?php print $base_path;?>categorias-proyecto">Ver todas</a>
</div>'),
    t('término de field_categoria'),
    t('<table>
<tbody>
<tr>
<td><span class="span8">[field_categoria_1]</span></td>
<td><span class="span1 align-right">[nid]</span></td>
</tr>
</tbody>
</table>'),
    t('Categorías Listado Todas'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<h2 class="gris-tres">Categorías publicadas por proyecto</h2>'),
    t('<table class="categorias-proyecto-todas">
<tbody>
<tr>
<td><span class="span9">[field_categoria]</span></td>
<td><span class="span2 align-right">[nid]</span></td>
</tr>
</tbody>
</table>'),
    t('Botón Buscar Tutores'),
    t('field_categoria_tid=[tid]'),
    t('Buscar Tutores
'),
    t('Calificacion pública para emprendedor'),
    t('Contenido referencing Contenido from field_proyecto_calificado'),
    t('<div class="calificacion-proyecto-content span32 offset1">
	<div class="calificacion-proyecto-label rojo bold span32">Calificación para el emprendedor</div>
	<div class="calificacion-usuario-imagen span2">[field_imagen_perfil]</div>
	<div class="calificacion-proyecto-detalle span28 offset1 clearfix">
		<div class="mensaje-gris-light clearfix">
		<div class="bg-gris-uno clearfix">
			<div class="calificacion-usuario-nombre">[name]</div>
			<div class="calificacion-comentario">[field_calif_publica_emprendedor]</div>
		</div>
</div>
	</div>
</div>'),
    t('Calificacion pública para tutor'),
    t('<div class="calificacion-proyecto-content span32 offset1">
	<div class="calificacion-proyecto-label rojo bold span32">Calificación para el tutor</div>
	<div class="calificacion-usuario-imagen span2">[field_imagen_perfil]</div>
	<div class="calificacion-proyecto-detalle span28 offset1 clearfix">
		<div class="mensaje-gris-light clearfix">
		<div class="bg-gris-uno clearfix">
			<div class="calificacion-usuario-nombre">[name]</div>
			<div class="calificacion-comentario">[field_calif_publica_tutor]</div>
		</div>
</div>
	</div>
</div>'),
    t('Calificacion privada para tutor'),
    t('Perfil Tutor'),
    t('Perfil Emprendedor'),
    t('Tutor'),
    t('Emprendedor'),
    t('<div class="calificacion-proyecto-content span32 offset1">
	<div class="calificacion-proyecto-label rojo bold span32">Calificación privada para el tutor</div>
	<div class="calificacion-usuario-imagen span2">[field_imagen_perfil]</div>
	<div class="calificacion-proyecto-detalle span28 offset1 clearfix">
		<div class="mensaje-gris-light clearfix">
		<div class="bg-gris-uno clearfix">
			<div class="calificacion-usuario-nombre">[name]</div>
			<div class="calificacion-comentario">[field_calif_privada_tutor]</div>
		</div>
</div>
	</div>
</div>'),
  );
  $export['proyecto'] = $view;

  $view = new view();
  $view->name = 'proyectos_a_clonar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Proyectos a clonar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Proyectos a clonar';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'clone own nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No se ha encontrado ningún resultado';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/clone/confirm';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_top';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contextual: Contenido: uid del autor */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );

  /* Display: Página */
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->display->display_options['path'] = 'clonar-proyecto';
  $translatables['proyectos_a_clonar'] = array(
    t('Master'),
    t('Proyectos a clonar'),
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
    t('No se ha encontrado ningún resultado'),
    t('Todo(s)'),
    t('Página'),
  );
  $export['proyectos_a_clonar'] = $view;

  $view = new view();
  $view->name = 'tutores_contratados';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'tutores_contratados';
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
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: tutor contratado proyecto */
  $handler = $view->new_display('panel_pane', 'tutor contratado proyecto', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_proyecto_node']['id'] = 'reverse_field_proyecto_node';
  $handler->display->display_options['relationships']['reverse_field_proyecto_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_proyecto_node']['field'] = 'reverse_field_proyecto_node';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['relationship'] = 'reverse_field_proyecto_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="verde bold">[name]</span>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  /* Criterios de filtrado: Workflow history: New state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'reverse_field_proyecto_node';
  $handler->display->display_options['filters']['sid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );
  $translatables['tutores_contratados'] = array(
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
    t('autor'),
    t('Nombre'),
    t('Todo(s)'),
    t('tutor contratado proyecto'),
    t('Contenido referencing Contenido from field_proyecto'),
    t('Usuario entidad referenciada de field_tutor'),
    t('<span class="verde bold">[name]</span>'),
    t('View panes'),
  );
  $export['tutores_contratados'] = $view;

  return $export;
}
