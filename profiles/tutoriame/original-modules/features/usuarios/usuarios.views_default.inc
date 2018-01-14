<?php
/**
 * @file
 * usuarios.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function usuarios_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'conversaciones_creadas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'pm_index';
  $view->human_name = 'conversaciones_creadas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'none';
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
  /* Relación: Privatemsg: Autor */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* Campo: Privatemsg: Thread ID */
  $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['group_type'] = 'count_distinct';

  /* Display: Conteo Conversaciones Creadas */
  $handler = $view->new_display('panel_pane', 'Conteo Conversaciones Creadas', 'panel_pane_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Privatemsg: Autor */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Privatemsg: Thread ID */
  $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['thread_id']['label'] = '';
  $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-conversaciones-creadas span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span5 min uppercase bold black conversaciones-creadas icono-conversacion"><span>Conversaciones creadas</span></div></td>

<td><div class="span1 align-right normal-min bold gris-tres">[thread_id]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'author';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'author';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Conteo Conversaciones Creadas Priv.Emp En Proyecto */
  $handler = $view->new_display('panel_pane', 'Conteo Conversaciones Creadas Priv.Emp En Proyecto', 'panel_pane_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Privatemsg: Autor */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'pm_message';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Privatemsg: Thread ID */
  $handler->display->display_options['fields']['thread_id']['id'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['table'] = 'pm_index';
  $handler->display->display_options['fields']['thread_id']['field'] = 'thread_id';
  $handler->display->display_options['fields']['thread_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['thread_id']['label'] = '';
  $handler->display->display_options['fields']['thread_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['thread_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['thread_id']['separator'] = '';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-conversaciones-creadas span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span5 offset1 min uppercase bold black conversaciones-creadas icono-conversacion"><span>Conversaciones creadas</span></div></td>

<td><div class="span3 align-right normal-min bold gris-tres">[thread_id]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'author';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'author';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $translatables['conversaciones_creadas'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Autor'),
    t('Thread ID'),
    t('.'),
    t(','),
    t('Conteo Conversaciones Creadas'),
    t('<div class="autor-conversaciones-creadas span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span5 min uppercase bold black conversaciones-creadas icono-conversacion"><span>Conversaciones creadas</span></div></td>

<td><div class="span1 align-right normal-min bold gris-tres">[thread_id]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Todo(s)'),
    t('View panes'),
    t('Conteo Conversaciones Creadas Priv.Emp En Proyecto'),
    t('<div class="autor-conversaciones-creadas span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span5 offset1 min uppercase bold black conversaciones-creadas icono-conversacion"><span>Conversaciones creadas</span></div></td>

<td><div class="span3 align-right normal-min bold gris-tres">[thread_id]</td></td>
</tr>
</tbody>
</table>
</div>'),
  );
  $export['conversaciones_creadas'] = $view;

  $view = new view();
  $view->name = 'perfil_contenido';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'perfil_contenido';
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

  /* Display: Proyectos Publicados Púb.Emp */
  $handler = $view->new_display('panel_pane', 'Proyectos Publicados Púb.Emp', 'panel_pane_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="span9">Proyectos Publicados</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="span2 align-right">[nid]</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '<div class="span2 align-right">0</div>';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid_1' => array(
      'type' => 'panel',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Proyectos Abiertos Conteo Pub.Empr */
  $handler = $view->new_display('panel_pane', 'Proyectos Abiertos Conteo Pub.Empr', 'panel_pane_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="span9">Proyectos abiertos</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="span2 align-right">[nid]</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '<div class="span2 align-right">0</div>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: uid del autor',
    ),
    'uid_1' => array(
      'type' => 'panel',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Proyecto Activos Pub.Emp */
  $handler = $view->new_display('panel_pane', 'Proyecto Activos Pub.Emp', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'title' => 'title',
    'body' => 'body',
    'view_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="verde offset1">Proyectos abiertos</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="span7 offset1 clearfix">
<div class="medium bold gris-tres">Publicado<br />hace [created]</div>
</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Contenido: Enlace */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Ver más +';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="span22 clearfix">
<div class="bg-white clearfix proyecto-content">
<h3 class="gris-tres">[title]</h3>
<div class="gris-tres medium">[body]</div>
<div class="medium bold verde align-right">[view_node]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: uid del autor */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: uid del autor',
    ),
  );

  /* Display: Proyectos en curso Pub.Emp */
  $handler = $view->new_display('panel_pane', 'Proyectos en curso Pub.Emp', 'panel_pane_4');
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
  $handler->display->display_options['header']['area']['content'] = '<h3 class="verde offset1">Proyectos en curso</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="span7 offset1 clearfix">
<div class="medium bold gris-tres">Publicado<br />hace [created]</div>
</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Contenido: Enlace */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Ver más +';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="span30 offset1 clearfix proyecto-content">
<h3 class="gris-tres">[title]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: uid del autor */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: uid del autor',
    ),
  );

  /* Display: Proyectos finalizados Pub.Emp */
  $handler = $view->new_display('panel_pane', 'Proyectos finalizados Pub.Emp', 'panel_pane_5');
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
  $handler->display->display_options['header']['area']['content'] = '<h3 class="verde offset1">Proyectos finalizados</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="span7 offset1 clearfix">
<div class="medium bold gris-tres">Publicado<br />hace [created]</div>
</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Contenido: Enlace */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Ver más +';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="span30 offset1 clearfix proyecto-content">
<h3 class="gris-tres">[title]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: uid del autor */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: uid del autor',
    ),
  );

  /* Display: Mis Contenidos Tutor */
  $handler = $view->new_display('panel_pane', 'Mis Contenidos Tutor', 'panel_pane_6');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $contenido = $base_path . \'node/add/articulo\'; ?>
<div class="mis-contenidos-vacio span21 offset1">
<div class="mis-contenidos-titulo medium verde bold">Mis Contenidos</div>
<p>Todavía no has creado ningún contenido.</p>
<p class="rojo bold"><a href="<?php print $contenido; ?>">Crea tu primer contenido</a></p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
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
    'main' => 'main',
  );
  /* Relación: Campo: Categoría (field_categoria) */
  $handler->display->display_options['relationships']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['relationships']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['relationships']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
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
    'image_style' => '45x46',
    'image_link' => '',
  );
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
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
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y \\a \\l\\a\\s H:i\\h\\s';
  /* Campo: Contenido: Resumen del contenido */
  $handler->display->display_options['fields']['field_resumen_del_contenido']['id'] = 'field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['table'] = 'field_data_field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['field'] = 'field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['label'] = '';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_contenido']['alter']['max_length'] = '197';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_contenido']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_contenido']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="lista-contenido-content clearfix  span21 offset1">

<table class="lista-contenido-content-encabezado">

<tr>

<td class="lista-contenido-content-encabezado-detalle normal-plus black">
<div class="lista-contenido-content-encabezado-detalle-post">Publicado el [created]</div>
<div class="lista-contenido-content-encabezado-detalle-categoria">[field_categoria]</div>
</td>

<tr>

</table>

<h2 class="lista-contenido-content-titulo plus verde">[title]</h2>
<div class="lista-contenido-content-resumen medium gris-tres">[field_resumen_del_contenido]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Usuario UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articulo' => 'articulo',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid_1' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mis Proyectos Abiertos Emprendedor */
  $handler = $view->new_display('panel_pane', 'Mis Proyectos Abiertos Emprendedor', 'panel_pane_8');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Proyectos Abiertos</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $proyecto = $base_path . \'node/add/proyecto\'; ?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Proyectos Abiertos</div>
<p>No tienes ningún proyecto abierto.</p>
<p class="rojo bold"><a href="<?php print $proyecto; ?>">Crea un nuevo proyecto</a></p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Campo: Categoría (field_categoria) */
  $handler->display->display_options['relationships']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['relationships']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['relationships']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['empty'] = 'No se han establecido categorías para este proyecto';
  $handler->display->display_options['fields']['field_categoria']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' / ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Contenido: Presupuesto */
  $handler->display->display_options['fields']['field_presupuesto']['id'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['field'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['text'] = '[field_presupuesto-value] puntos';
  $handler->display->display_options['fields']['field_presupuesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto']['empty'] = 'No se ha establecido un presupuesto para este proyecto';
  $handler->display->display_options['fields']['field_presupuesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_presupuesto']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="titulo-campo">Publicación: </span><span class="valor-campo">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Fecha de inicio requerida - Inicio */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['ui_name'] = 'Fecha de inicio requerida - Inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['text'] = '<span class="titulo-campo">Fecha de inicio: </span><span class="valor-campo">[field_fecha_inicio]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha de inicio requerida - Fin */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['ui_name'] = 'Fecha de inicio requerida - Fin';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['text'] = '<span class="titulo-campo">Fecha de fin: </span<span class="valor-campo">[field_fecha_inicio_1]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Workflow current: Estado actual */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '<span class="titulo-campo">Estado: </span><span class="valor-campo">[sid]</span>';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '292';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mis-proyectos-content clearfix span21 offset1">
<table>
<tr>
<td class="mis-proyectos-content-detalle span8">
<div class="mis-proyectos-content-detalle-content clearfix">
<div class="mis-proyectos-content-detalle-categoria clearfix"><span class="mis-proyectos-content-detalle-categoria-label">Categoria: </span><span class="black semibold mis-proyectos-content-detalle-categoria-value">[field_categoria]</span></div>
<div class="mis-proyectos-content-detalle-presupuesto">Presupuesto: [field_presupuesto]</div>
<div class="mis-proyectos-content-detalle-publicacion">[created]</div>
<div class="mis-proyectos-content-detalle-inicio">[field_fecha_inicio]</div>
<div class="mis-proyectos-content-detalle-fin">[field_fecha_inicio_1]</div>
<div class="mis-proyectos-content-detalle-estado">[sid]</div>
</div>
</td>
<td class="mis-proyectos-content-descripcion span13">
<div class="mis-proyectos-content-descripcion-descripcion">[body]</div>
</td>
</tr>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Usuario UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid_1' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mis Proyectos En curso Emprendedor */
  $handler = $view->new_display('panel_pane', 'Mis Proyectos En curso Emprendedor', 'panel_pane_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Proyectos en Curso</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Campo: Categoría (field_categoria) */
  $handler->display->display_options['relationships']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['relationships']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['relationships']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['empty'] = 'No se han establecido categorías para este proyecto';
  $handler->display->display_options['fields']['field_categoria']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' / ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Contenido: Presupuesto */
  $handler->display->display_options['fields']['field_presupuesto']['id'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['field'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['text'] = '[field_presupuesto-value] puntos';
  $handler->display->display_options['fields']['field_presupuesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto']['empty'] = 'No se ha establecido un presupuesto para este proyecto';
  $handler->display->display_options['fields']['field_presupuesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_presupuesto']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="titulo-campo">Publicación: </span><span class="valor-campo">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Fecha de inicio requerida - Inicio */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['ui_name'] = 'Fecha de inicio requerida - Inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['text'] = '<span class="titulo-campo">Fecha de inicio: </span><span class="valor-campo">[field_fecha_inicio]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha de inicio requerida - Fin */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['ui_name'] = 'Fecha de inicio requerida - Fin';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['text'] = '<span class="titulo-campo">Fecha de fin: </span<span class="valor-campo">[field_fecha_inicio_1]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Workflow current: Estado actual */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '<span class="titulo-campo">Estado: </span><span class="valor-campo">[sid]</span>';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '292';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mis-proyectos-content clearfix span21 offset1">
<table>
<tr>
<td class="mis-proyectos-content-detalle span8">
<div class="mis-proyectos-content-detalle-content clearfix">
<div class="mis-proyectos-content-detalle-categoria clearfix"><span class="mis-proyectos-content-detalle-categoria-label">Categoria: </span><span class="black semibold mis-proyectos-content-detalle-categoria-value">[field_categoria]</span></div>
<div class="mis-proyectos-content-detalle-presupuesto">Presupuesto: [field_presupuesto]</div>
<div class="mis-proyectos-content-detalle-publicacion">[created]</div>
<div class="mis-proyectos-content-detalle-inicio">[field_fecha_inicio]</div>
<div class="mis-proyectos-content-detalle-fin">[field_fecha_inicio_1]</div>
<div class="mis-proyectos-content-detalle-estado">[sid]</div>
</div>
</td>
<td class="mis-proyectos-content-descripcion span13">
<div class="mis-proyectos-content-descripcion-descripcion">[body]</div>
</td>
</tr>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Usuario UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid_1' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mis Proyectos Finalizados Emprendedor */
  $handler = $view->new_display('panel_pane', 'Mis Proyectos Finalizados Emprendedor', 'panel_pane_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Proyectos Finalizados</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Campo: Categoría (field_categoria) */
  $handler->display->display_options['relationships']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['relationships']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['relationships']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['empty'] = 'No se han establecido categorías para este proyecto';
  $handler->display->display_options['fields']['field_categoria']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' / ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Contenido: Presupuesto */
  $handler->display->display_options['fields']['field_presupuesto']['id'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['field'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['text'] = '[field_presupuesto-value] puntos';
  $handler->display->display_options['fields']['field_presupuesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto']['empty'] = 'No se ha establecido presupuesto para este proyecto';
  $handler->display->display_options['fields']['field_presupuesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_presupuesto']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="titulo-campo">Publicación: </span><span class="valor-campo">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Fecha de inicio requerida - Inicio */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['ui_name'] = 'Fecha de inicio requerida - Inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['text'] = '<span class="titulo-campo">Fecha de inicio: </span><span class="valor-campo">[field_fecha_inicio]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha de inicio requerida - Fin */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['ui_name'] = 'Fecha de inicio requerida - Fin';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['text'] = '<span class="titulo-campo">Fecha de fin: </span<span class="valor-campo">[field_fecha_inicio_1]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Workflow current: Estado actual */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '<span class="titulo-campo">Estado: </span><span class="valor-campo">[sid]</span>';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '292';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mis-proyectos-content clearfix span21 offset1">
<table>
<tr>
<td class="mis-proyectos-content-detalle span8">
<div class="mis-proyectos-content-detalle-content clearfix">
<div class="mis-proyectos-content-detalle-categoria clearfix"><span class="mis-proyectos-content-detalle-categoria-label">Categoria: </span><span class="black semibold mis-proyectos-content-detalle-categoria-value">[field_categoria]</span></div>
<div class="mis-proyectos-content-detalle-presupuesto">Presupuesto: [field_presupuesto]</div>
<div class="mis-proyectos-content-detalle-publicacion">[created]</div>
<div class="mis-proyectos-content-detalle-inicio">[field_fecha_inicio]</div>
<div class="mis-proyectos-content-detalle-fin">[field_fecha_inicio_1]</div>
<div class="mis-proyectos-content-detalle-estado">[sid]</div>
</div>
</td>
<td class="mis-proyectos-content-descripcion span13">
<div class="mis-proyectos-content-descripcion-descripcion">[body]</div>
</td>
</tr>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Usuario UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid_1' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mis Proyectos Emp.Privado */
  $handler = $view->new_display('panel_pane', 'Mis Proyectos Emp.Privado', 'panel_pane_10');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Proyectos</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $proyecto = $base_path . \'node/add/proyecto\'; ?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Proyectos</div>
<p>No tienes ningún proyecto abierto o en curso.</p>
<p class="rojo bold"><a href="<?php print $proyecto; ?>">Crea un proyecto</a></p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Campo: Categoría (field_categoria) */
  $handler->display->display_options['relationships']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['relationships']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['relationships']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => '/ ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Contenido: Presupuesto */
  $handler->display->display_options['fields']['field_presupuesto']['id'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['field'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['text'] = '[field_presupuesto-value] puntos';
  $handler->display->display_options['fields']['field_presupuesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto']['empty'] = 'No se estableció un presupuesto para este proyecto';
  $handler->display->display_options['fields']['field_presupuesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_presupuesto']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="titulo-campo">Publicación: </span><span class="valor-campo">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Fecha de inicio requerida - Inicio */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['ui_name'] = 'Fecha de inicio requerida - Inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['text'] = '<span class="titulo-campo">Fecha de inicio: </span><span class="valor-campo">[field_fecha_inicio]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha de inicio requerida - Fin */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['ui_name'] = 'Fecha de inicio requerida - Fin';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['text'] = '<span class="titulo-campo">Fecha de fin: </span<span class="valor-campo">[field_fecha_inicio_1]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Workflow current: Estado actual */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '<span class="titulo-campo">Estado: </span><span class="valor-campo">[sid]</span>';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '292';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mis-proyectos-content clearfix span21 offset1">
<table>
<tr>
<td class="mis-proyectos-content-detalle span8">
<div class="mis-proyectos-content-detalle-content clearfix">
<div class="mis-proyectos-content-detalle-categoria clearfix"><span class="mis-proyectos-content-detalle-categoria-label">Categoria: </span><span class="black semibold mis-proyectos-content-detalle-categoria-value">[field_categoria]</span></div>
<div class="mis-proyectos-content-detalle-presupuesto">Presupuesto: [field_presupuesto]</div>
<div class="mis-proyectos-content-detalle-publicacion">[created]</div>
<div class="mis-proyectos-content-detalle-inicio">[field_fecha_inicio]</div>
<div class="mis-proyectos-content-detalle-fin">[field_fecha_inicio_1]</div>
<div class="mis-proyectos-content-detalle-estado">[sid]</div>
</div>
</td>
<td class="mis-proyectos-content-descripcion span13">
<div class="mis-proyectos-content-descripcion-descripcion">[body]</div>
</td>
</tr>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Usuario UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'users';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uuid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid_1' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Proyectos Encurso Conteo Pub.Empr */
  $handler = $view->new_display('panel_pane', 'Proyectos Encurso Conteo Pub.Empr', 'panel_pane_11');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="span9">Proyectos en curso</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="span2 align-right">[nid]</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '<div class="span2 align-right">0</div>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: uid del autor',
    ),
    'uid_1' => array(
      'type' => 'panel',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Proyectos Finalizados Conteo Pub.Empr */
  $handler = $view->new_display('panel_pane', 'Proyectos Finalizados Conteo Pub.Empr', 'panel_pane_12');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="span9">Proyectos finalizados</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="span2 align-right">[nid]</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '<div class="span2 align-right">0</div>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: uid del autor',
    ),
    'uid_1' => array(
      'type' => 'panel',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Conteo Consultorías Activas Priv.Tutor */
  $handler = $view->new_display('panel_pane', 'Conteo Consultorías Activas Priv.Tutor', 'panel_pane_13');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black estado-proyecto"><span class="icono-activo">Tutorías Activas</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Conteo Proyectos Contratados Priv.Tutor */
  $handler = $view->new_display('panel_pane', 'Conteo Proyectos Contratados Priv.Tutor', 'panel_pane_14');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="perfil-contratos-realizados span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black contratos-realizados"><span class="icono-contrato">Contratos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['filters']['sid']['value'] = array(
    7 => '7',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mis Consultorias Priv.Tutor */
  $handler = $view->new_display('panel_pane', 'Mis Consultorias Priv.Tutor', 'panel_pane_15');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Consultorías</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $proyecto = $base_path . \'node/add/proyecto\'; ?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Consultorías</div>
<p>No tienes ninguna consultoría activa o finalizada.</p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => '/ ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Contenido: Presupuesto */
  $handler->display->display_options['fields']['field_presupuesto']['id'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['field'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_presupuesto']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['text'] = '[field_presupuesto-value] puntos';
  $handler->display->display_options['fields']['field_presupuesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto']['empty'] = 'No se estableció un presupuesto para este proyecto';
  $handler->display->display_options['fields']['field_presupuesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_presupuesto']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="titulo-campo">Publicación: </span><span class="valor-campo">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Fecha de inicio requerida - Inicio */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_fecha_inicio']['ui_name'] = 'Fecha de inicio requerida - Inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['text'] = '<span class="titulo-campo">Fecha de inicio: </span><span class="valor-campo">[field_fecha_inicio]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha de inicio requerida - Fin */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['ui_name'] = 'Fecha de inicio requerida - Fin';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['text'] = '<span class="titulo-campo">Fecha de fin: </span<span class="valor-campo">[field_fecha_inicio_1]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Workflow current: Estado actual */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '<span class="titulo-campo">Estado: </span><span class="valor-campo">[sid]</span>';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '292';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mis-proyectos-content clearfix span21 offset1">
<table>
<tr>
<td class="mis-proyectos-content-detalle span8">
<div class="mis-proyectos-content-detalle-content clearfix">
<div class="mis-proyectos-content-detalle-categoria clearfix"><span class="mis-proyectos-content-detalle-categoria-label">Categoria: </span><span class="black semibold mis-proyectos-content-detalle-categoria-value">[field_categoria]</span></div>
<div class="mis-proyectos-content-detalle-presupuesto">Presupuesto: [field_presupuesto]</div>
<div class="mis-proyectos-content-detalle-publicacion">[created]</div>
<div class="mis-proyectos-content-detalle-inicio">[field_fecha_inicio]</div>
<div class="mis-proyectos-content-detalle-fin">[field_fecha_inicio_1]</div>
<div class="mis-proyectos-content-detalle-estado">[sid]</div>
</div>
</td>
<td class="mis-proyectos-content-descripcion span13">
<div class="mis-proyectos-content-descripcion-descripcion">[body]</div>
</td>
</tr>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uuid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Usuario UUID',
    ),
  );

  /* Display: Mis Consultorias En curso Priv.Tutor */
  $handler = $view->new_display('panel_pane', 'Mis Consultorias En curso Priv.Tutor', 'panel_pane_16');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Consultorías en Curso</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Consultorías en Curso</div>
<p>No tienes ninguna consultoría en curso en este momento.</p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => '/ ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Contenido: Presupuesto */
  $handler->display->display_options['fields']['field_presupuesto']['id'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['field'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_presupuesto']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['text'] = '[field_presupuesto-value] puntos';
  $handler->display->display_options['fields']['field_presupuesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto']['empty'] = 'No se estableció un presupuesto para este proyecto';
  $handler->display->display_options['fields']['field_presupuesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_presupuesto']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="titulo-campo">Publicación: </span><span class="valor-campo">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Fecha de inicio requerida - Inicio */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_fecha_inicio']['ui_name'] = 'Fecha de inicio requerida - Inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['text'] = '<span class="titulo-campo">Fecha de inicio: </span><span class="valor-campo">[field_fecha_inicio]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha de inicio requerida - Fin */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['ui_name'] = 'Fecha de inicio requerida - Fin';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['text'] = '<span class="titulo-campo">Fecha de fin: </span<span class="valor-campo">[field_fecha_inicio_1]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Workflow current: Estado actual */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '<span class="titulo-campo">Estado: </span><span class="valor-campo">[sid]</span>';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '292';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mis-proyectos-content clearfix span21 offset1">
<table>
<tr>
<td class="mis-proyectos-content-detalle span8">
<div class="mis-proyectos-content-detalle-content clearfix">
<div class="mis-proyectos-content-detalle-categoria clearfix"><span class="mis-proyectos-content-detalle-categoria-label">Categoria: </span><span class="black semibold mis-proyectos-content-detalle-categoria-value">[field_categoria]</span></div>
<div class="mis-proyectos-content-detalle-presupuesto">Presupuesto: [field_presupuesto]</div>
<div class="mis-proyectos-content-detalle-publicacion">[created]</div>
<div class="mis-proyectos-content-detalle-inicio">[field_fecha_inicio]</div>
<div class="mis-proyectos-content-detalle-fin">[field_fecha_inicio_1]</div>
<div class="mis-proyectos-content-detalle-estado">[sid]</div>
</div>
</td>
<td class="mis-proyectos-content-descripcion span13">
<div class="mis-proyectos-content-descripcion-descripcion">[body]</div>
</td>
</tr>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mis Consultorias Finalizadas Priv.Tutor */
  $handler = $view->new_display('panel_pane', 'Mis Consultorias Finalizadas Priv.Tutor', 'panel_pane_17');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Consultorías Finalizadas</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Consultorías Finalizadas</div>
<p>No tienes ninguna consultoría finalizada en este momento.</p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => '/ ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Contenido: Presupuesto */
  $handler->display->display_options['fields']['field_presupuesto']['id'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['field'] = 'field_presupuesto';
  $handler->display->display_options['fields']['field_presupuesto']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_presupuesto']['label'] = '';
  $handler->display->display_options['fields']['field_presupuesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['alter']['text'] = '[field_presupuesto-value] puntos';
  $handler->display->display_options['fields']['field_presupuesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presupuesto']['empty'] = 'No se estableció un presupuesto para este proyecto';
  $handler->display->display_options['fields']['field_presupuesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_presupuesto']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_presupuesto']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="titulo-campo">Publicación: </span><span class="valor-campo">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Fecha de inicio requerida - Inicio */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_fecha_inicio']['ui_name'] = 'Fecha de inicio requerida - Inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['alter']['text'] = '<span class="titulo-campo">Fecha de inicio: </span><span class="valor-campo">[field_fecha_inicio]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha de inicio requerida - Fin */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['ui_name'] = 'Fecha de inicio requerida - Fin';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['alter']['text'] = '<span class="titulo-campo">Fecha de fin: </span<span class="valor-campo">[field_fecha_inicio_1]</span>';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Workflow current: Estado actual */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '<span class="titulo-campo">Estado: </span><span class="valor-campo">[sid]</span>';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '292';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mis-proyectos-content clearfix span21 offset1">
<table>
<tr>
<td class="mis-proyectos-content-detalle span8">
<div class="mis-proyectos-content-detalle-content clearfix">
<div class="mis-proyectos-content-detalle-categoria clearfix"><span class="mis-proyectos-content-detalle-categoria-label">Categoria: </span><span class="black semibold mis-proyectos-content-detalle-categoria-value">[field_categoria]</span></div>
<div class="mis-proyectos-content-detalle-presupuesto">Presupuesto: [field_presupuesto]</div>
<div class="mis-proyectos-content-detalle-publicacion">[created]</div>
<div class="mis-proyectos-content-detalle-inicio">[field_fecha_inicio]</div>
<div class="mis-proyectos-content-detalle-fin">[field_fecha_inicio_1]</div>
<div class="mis-proyectos-content-detalle-estado">[sid]</div>
</div>
</td>
<td class="mis-proyectos-content-descripcion span13">
<div class="mis-proyectos-content-descripcion-descripcion">[body]</div>
</td>
</tr>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Contenidos de interes */
  $handler = $view->new_display('panel_pane', 'Contenidos de interes', 'panel_pane_18');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $tutores = $base_path . \'buscar-tutores\'; ?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Contenidos de interés</div>
<p>Se mostrarán los contenidos generados por los tutores contratados.</p>
<p class="rojo bold"><a href="<?php print $tutores; ?>">Encuentra tutores para tus proyectos</a></p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['relationship'] = 'uid_1';
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid_2']['id'] = 'uid_2';
  $handler->display->display_options['relationships']['uid_2']['table'] = 'users';
  $handler->display->display_options['relationships']['uid_2']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_2']['relationship'] = 'field_tutor_target_id';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
    'image_style' => '45x46',
    'image_link' => 'content',
  );
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['relationship'] = 'uid_2';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_categoria']['separator'] = '<br>';
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'uid_2';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y \\a \\l\\a\\s H:i\\h\\s';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Contenido: Resumen del contenido */
  $handler->display->display_options['fields']['field_resumen_del_contenido']['id'] = 'field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['table'] = 'field_data_field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['field'] = 'field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['relationship'] = 'uid_2';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['label'] = '';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_contenido']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid_2';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="lista-contenido-content clearfix  span21 offset1">
<table class="lista-contenido-content-encabezado">
<tr>
<td class="lista-contenido-content-encabezado-autor-imagen span2">
<span class="span2">[field_imagen_perfil]</span>
</td>
<td class="lista-contenido-content-encabezado-autor-nombre span8">
<span class="verde titulo-dos plus">[name]</span>
</td>
</td>
<td class="lista-contenido-content-encabezado-detalle normal-plus black">
<div class="lista-contenido-content-encabezado-detalle-post">Publicado el [created]</div>
<div class="lista-contenido-content-encabezado-detalle-categoria">[field_categoria]</div>
</td>
<tr>
</table>
<h2 class="lista-contenido-content-titulo plus verde">[title]</h2>
<div class="lista-contenido-content-resumen medium gris-tres">[field_resumen_del_contenido]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid_2';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid_2';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articulo' => 'articulo',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'uid_2';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Proyectos Activos Pub.Tutor */
  $handler = $view->new_display('panel_pane', 'Proyectos Activos Pub.Tutor', 'panel_pane_19');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="servicio-titulo medium verde bold">Proyectos Tutoriame</div>
<div class="proyectos-tutoriame-activos-encabezado medium black bold">Proyectos Activos</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pie de página: Global: Área de texto */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span21">
<a href="<?php print $base_path; ?>users/[uid]/proyectos-activos">Ver más +</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="black medium">El usuario no tiene proyectos activos</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="proyectos-tutoriame clearfix span21 black medium">
<div class="proyectos-tutoriame-titulo">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Proyectos Activos Overlay Pub.Tutor */
  $handler = $view->new_display('page', 'Proyectos Activos Overlay Pub.Tutor', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'publico-tutor-proyectos';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2><span class="gris-tres">Proyectos Activos de</span> <span class="verde">[name]</span></h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="proyectos-tutoriame clearfix black medium">
<div class="proyectos-tutoriame-titulo">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['path'] = 'users/%/proyectos-activos';

  /* Display: Proyectos Finalizados Pub.Tutor */
  $handler = $view->new_display('panel_pane', 'Proyectos Finalizados Pub.Tutor', 'panel_pane_20');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="proyectos-tutoriame-activos-encabezado medium black bold">Proyectos Finalizados</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pie de página: Global: Área de texto */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span21">
<a href="<?php print $base_path; ?>users/[uid]/proyectos-finalizados">Ver más +</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="black medium">El usuario no tiene proyectos finalizados</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="proyectos-tutoriame clearfix span21 black medium">
<div class="proyectos-tutoriame-titulo">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Proyectos Finalizados Overlay Pub.Tutor */
  $handler = $view->new_display('page', 'Proyectos Finalizados Overlay Pub.Tutor', 'page_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'publico-tutor-proyectos';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2><span class="gris-tres">Proyectos Finalizados de</span> <span class="verde">[name]</span></h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['relationship'] = 'field_tutor_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="proyectos-tutoriame clearfix black medium">
<div class="proyectos-tutoriame-titulo">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['path'] = 'users/%/proyectos-finalizados';

  /* Display: Conteo Horas de Tutoría */
  $handler = $view->new_display('panel_pane', 'Conteo Horas de Tutoría', 'panel_pane_22');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Horas acordadas */
  $handler->display->display_options['fields']['field_horas_acordadas_1']['id'] = 'field_horas_acordadas_1';
  $handler->display->display_options['fields']['field_horas_acordadas_1']['table'] = 'field_data_field_horas_acordadas';
  $handler->display->display_options['fields']['field_horas_acordadas_1']['field'] = 'field_horas_acordadas';
  $handler->display->display_options['fields']['field_horas_acordadas_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_horas_acordadas_1']['label'] = '';
  $handler->display->display_options['fields']['field_horas_acordadas_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_horas_acordadas_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_horas_acordadas_1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_horas_acordadas_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_horas_acordadas_1']['group_columns'] = array(
    'value' => 'value',
  );
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black horas-tutoria"><span class="icono-horas">Horas de tutoría</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[field_horas_acordadas_1]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Conteo Puntos Vendidos */
  $handler = $view->new_display('panel_pane', 'Conteo Puntos Vendidos', 'panel_pane_21');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black puntos-vendidos"><span class="icono-puntos-ttm">Puntos  Experto Online Vendidos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">0</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_puntos']['label'] = '';
  $handler->display->display_options['fields']['field_puntos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black puntos-vendidos"><span class="icono-puntos-ttm">Puntos  Experto Online Vendidos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[field_puntos]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta Tutor En curso */
  $handler = $view->new_display('panel_pane', 'Mi cuenta Tutor En curso', 'panel_pane_23');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_puntos' => 'field_puntos',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_puntos' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tienes proyectos en curso';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fecha de modificación */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Inicio proyecto';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'formatos_fecha_dd_de_mes_aaaa';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Concepto';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta Tutor pendiente Calificacion */
  $handler = $view->new_display('panel_pane', 'Mi cuenta Tutor pendiente Calificacion', 'panel_pane_25');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_puntos' => 'field_puntos',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_puntos' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tienes puntos pendientes de calificación';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fecha de modificación */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Fin proyecto';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'formatos_fecha_dd_de_mes_aaaa';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Concepto';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta Tutor pendiente Facturación */
  $handler = $view->new_display('panel_pane', 'Mi cuenta Tutor pendiente Facturación', 'panel_pane_24');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '3';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_puntos' => 'field_puntos',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_puntos' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tienes puntos pendientes de facturación';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fecha de modificación */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Calificación';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'formatos_fecha_dd_de_mes_aaaa';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Concepto';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta Tutor Cobrado */
  $handler = $view->new_display('panel_pane', 'Mi cuenta Tutor Cobrado', 'panel_pane_26');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '4';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_puntos' => 'field_puntos',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_puntos' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No tienes puntos cobrados';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fecha de modificación */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Cobro';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'formatos_fecha_dd_de_mes_aaaa';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Concepto';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta Tutor En curso SUMA */
  $handler = $view->new_display('panel_pane', 'Mi cuenta Tutor En curso SUMA', 'panel_pane_27');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos proyectos en curso</span><span class="puntos span6">0</span>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_puntos']['label'] = '';
  $handler->display->display_options['fields']['field_puntos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['alter']['text'] = '<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos proyectos en curso</span><span class="puntos span6">[field_puntos-value]</span>
</div>';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta Tutor pendiente Calificacion SUMA */
  $handler = $view->new_display('panel_pane', 'Mi cuenta Tutor pendiente Calificacion SUMA', 'panel_pane_28');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos pendientes de calificación</span><span class="puntos span6">0</span>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_puntos']['label'] = '';
  $handler->display->display_options['fields']['field_puntos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['alter']['text'] = '<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos pendientes de calificación</span><span class="puntos span6">[field_puntos-value]</span>
</div>';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta Tutor calificados SUMA */
  $handler = $view->new_display('panel_pane', 'Mi cuenta Tutor calificados SUMA', 'panel_pane_29');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos calificados pendientes de facturación</span><span class="puntos span6">0</span>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_puntos']['label'] = '';
  $handler->display->display_options['fields']['field_puntos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['alter']['text'] = '<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos calificados pendientes de facturación</span><span class="puntos span6">[field_puntos-value]</span>
</div>';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta Tutor cobrados SUMA */
  $handler = $view->new_display('panel_pane', 'Mi cuenta Tutor cobrados SUMA', 'panel_pane_30');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos cobrados</span><span class="puntos span6">0</span>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_puntos']['label'] = '';
  $handler->display->display_options['fields']['field_puntos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['alter']['text'] = '<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos cobrados</span><span class="puntos span6">[field_puntos-value]</span>
</div>';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );
  $translatables['perfil_contenido'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Proyectos Publicados Púb.Emp'),
    t('autor'),
    t('<div class="span9">Proyectos Publicados</div>'),
    t('<div class="span2 align-right">[nid]</div>'),
    t('<div class="span2 align-right">0</div>'),
    t('Todo(s)'),
    t('View panes'),
    t('Proyectos Abiertos Conteo Pub.Empr'),
    t('<div class="span9">Proyectos abiertos</div>'),
    t('Proyecto Activos Pub.Emp'),
    t('<h3 class="verde offset1">Proyectos abiertos</h3>'),
    t('<div class="span7 offset1 clearfix">
<div class="medium bold gris-tres">Publicado<br />hace [created]</div>
</div>'),
    t('Ver más +'),
    t('<div class="span22 clearfix">
<div class="bg-white clearfix proyecto-content">
<h3 class="gris-tres">[title]</h3>
<div class="gris-tres medium">[body]</div>
<div class="medium bold verde align-right">[view_node]</div>
</div>
</div>'),
    t('Proyectos en curso Pub.Emp'),
    t('<h3 class="verde offset1">Proyectos en curso</h3>'),
    t('<div class="span30 offset1 clearfix proyecto-content">
<h3 class="gris-tres">[title]</h3>
</div>'),
    t('Proyectos finalizados Pub.Emp'),
    t('<h3 class="verde offset1">Proyectos finalizados</h3>'),
    t('Mis Contenidos Tutor'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<?php global $base_path;?>
<?php $contenido = $base_path . \'node/add/articulo\'; ?>
<div class="mis-contenidos-vacio span21 offset1">
<div class="mis-contenidos-titulo medium verde bold">Mis Contenidos</div>
<p>Todavía no has creado ningún contenido.</p>
<p class="rojo bold"><a href="<?php print $contenido; ?>">Crea tu primer contenido</a></p>
</div>'),
    t('Perfil'),
    t('término de field_categoria'),
    t('<div class="lista-contenido-content clearfix  span21 offset1">

<table class="lista-contenido-content-encabezado">

<tr>

<td class="lista-contenido-content-encabezado-detalle normal-plus black">
<div class="lista-contenido-content-encabezado-detalle-post">Publicado el [created]</div>
<div class="lista-contenido-content-encabezado-detalle-categoria">[field_categoria]</div>
</td>

<tr>

</table>

<h2 class="lista-contenido-content-titulo plus verde">[title]</h2>
<div class="lista-contenido-content-resumen medium gris-tres">[field_resumen_del_contenido]</div>
</div>'),
    t('Mis Proyectos Abiertos Emprendedor'),
    t('<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Proyectos Abiertos</div>'),
    t('<?php global $base_path;?>
<?php $proyecto = $base_path . \'node/add/proyecto\'; ?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Proyectos Abiertos</div>
<p>No tienes ningún proyecto abierto.</p>
<p class="rojo bold"><a href="<?php print $proyecto; ?>">Crea un nuevo proyecto</a></p>
</div>'),
    t('No se han establecido categorías para este proyecto'),
    t('[field_presupuesto-value] puntos'),
    t('No se ha establecido un presupuesto para este proyecto'),
    t('<span class="titulo-campo">Publicación: </span><span class="valor-campo">[created]</span>'),
    t('<span class="titulo-campo">Fecha de inicio: </span><span class="valor-campo">[field_fecha_inicio]</span>'),
    t('<span class="titulo-campo">Fecha de fin: </span<span class="valor-campo">[field_fecha_inicio_1]</span>'),
    t('<span class="titulo-campo">Estado: </span><span class="valor-campo">[sid]</span>'),
    t('<div class="mis-proyectos-content clearfix span21 offset1">
<table>
<tr>
<td class="mis-proyectos-content-detalle span8">
<div class="mis-proyectos-content-detalle-content clearfix">
<div class="mis-proyectos-content-detalle-categoria clearfix"><span class="mis-proyectos-content-detalle-categoria-label">Categoria: </span><span class="black semibold mis-proyectos-content-detalle-categoria-value">[field_categoria]</span></div>
<div class="mis-proyectos-content-detalle-presupuesto">Presupuesto: [field_presupuesto]</div>
<div class="mis-proyectos-content-detalle-publicacion">[created]</div>
<div class="mis-proyectos-content-detalle-inicio">[field_fecha_inicio]</div>
<div class="mis-proyectos-content-detalle-fin">[field_fecha_inicio_1]</div>
<div class="mis-proyectos-content-detalle-estado">[sid]</div>
</div>
</td>
<td class="mis-proyectos-content-descripcion span13">
<div class="mis-proyectos-content-descripcion-descripcion">[body]</div>
</td>
</tr>
</table>
</div>'),
    t('Mis Proyectos En curso Emprendedor'),
    t('<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Proyectos en Curso</div>'),
    t('Mis Proyectos Finalizados Emprendedor'),
    t('<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Proyectos Finalizados</div>'),
    t('No se ha establecido presupuesto para este proyecto'),
    t('Mis Proyectos Emp.Privado'),
    t('<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Proyectos</div>'),
    t('<?php global $base_path;?>
<?php $proyecto = $base_path . \'node/add/proyecto\'; ?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Proyectos</div>
<p>No tienes ningún proyecto abierto o en curso.</p>
<p class="rojo bold"><a href="<?php print $proyecto; ?>">Crea un proyecto</a></p>
</div>'),
    t('No se estableció un presupuesto para este proyecto'),
    t('Proyectos Encurso Conteo Pub.Empr'),
    t('<div class="span9">Proyectos en curso</div>'),
    t('Proyectos Finalizados Conteo Pub.Empr'),
    t('<div class="span9">Proyectos finalizados</div>'),
    t('Conteo Consultorías Activas Priv.Tutor'),
    t('Usuario entidad referenciada de field_tutor'),
    t('Contenido referencing Usuario from field_tutor'),
    t('Contenido entidad referenciada de field_proyecto'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black estado-proyecto"><span class="icono-activo">Tutorías Activas</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Conteo Proyectos Contratados Priv.Tutor'),
    t('<div class="perfil-contratos-realizados span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black contratos-realizados"><span class="icono-contrato">Contratos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Mis Consultorias Priv.Tutor'),
    t('<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Consultorías</div>'),
    t('<?php global $base_path;?>
<?php $proyecto = $base_path . \'node/add/proyecto\'; ?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Consultorías</div>
<p>No tienes ninguna consultoría activa o finalizada.</p>
</div>'),
    t('Mis Consultorias En curso Priv.Tutor'),
    t('<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Consultorías en Curso</div>'),
    t('<?php global $base_path;?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Consultorías en Curso</div>
<p>No tienes ninguna consultoría en curso en este momento.</p>
</div>'),
    t('Mis Consultorias Finalizadas Priv.Tutor'),
    t('<div class="mis-proyectos-titulo span21 offset1 medium verde bold">Mis Consultorías Finalizadas</div>'),
    t('<?php global $base_path;?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Mis Consultorías Finalizadas</div>
<p>No tienes ninguna consultoría finalizada en este momento.</p>
</div>'),
    t('Contenidos de interes'),
    t('<?php global $base_path;?>
<?php $tutores = $base_path . \'buscar-tutores\'; ?>
<div class="mis-proyectos-vacio span21 offset1">
<div class="mis-proyectos-titulo medium verde bold">Contenidos de interés</div>
<p>Se mostrarán los contenidos generados por los tutores contratados.</p>
<p class="rojo bold"><a href="<?php print $tutores; ?>">Encuentra tutores para tus proyectos</a></p>
</div>'),
    t('nodos'),
    t('<div class="lista-contenido-content clearfix  span21 offset1">
<table class="lista-contenido-content-encabezado">
<tr>
<td class="lista-contenido-content-encabezado-autor-imagen span2">
<span class="span2">[field_imagen_perfil]</span>
</td>
<td class="lista-contenido-content-encabezado-autor-nombre span8">
<span class="verde titulo-dos plus">[name]</span>
</td>
</td>
<td class="lista-contenido-content-encabezado-detalle normal-plus black">
<div class="lista-contenido-content-encabezado-detalle-post">Publicado el [created]</div>
<div class="lista-contenido-content-encabezado-detalle-categoria">[field_categoria]</div>
</td>
<tr>
</table>
<h2 class="lista-contenido-content-titulo plus verde">[title]</h2>
<div class="lista-contenido-content-resumen medium gris-tres">[field_resumen_del_contenido]</div>
</div>'),
    t('Proyectos Activos Pub.Tutor'),
    t('<div class="servicio-titulo medium verde bold">Proyectos Tutoriame</div>
<div class="proyectos-tutoriame-activos-encabezado medium black bold">Proyectos Activos</div>'),
    t('<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span21">
<a href="<?php print $base_path; ?>users/[uid]/proyectos-activos">Ver más +</a>
</div>'),
    t('<div class="black medium">El usuario no tiene proyectos activos</div>'),
    t('<div class="proyectos-tutoriame clearfix span21 black medium">
<div class="proyectos-tutoriame-titulo">[title]</div>
</div>'),
    t('Proyectos Activos Overlay Pub.Tutor'),
    t('<h2><span class="gris-tres">Proyectos Activos de</span> <span class="verde">[name]</span></h2>'),
    t('<div class="proyectos-tutoriame clearfix black medium">
<div class="proyectos-tutoriame-titulo">[title]</div>
</div>'),
    t('Proyectos Finalizados Pub.Tutor'),
    t('<div class="proyectos-tutoriame-activos-encabezado medium black bold">Proyectos Finalizados</div>'),
    t('<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span21">
<a href="<?php print $base_path; ?>users/[uid]/proyectos-finalizados">Ver más +</a>
</div>'),
    t('<div class="black medium">El usuario no tiene proyectos finalizados</div>'),
    t('Proyectos Finalizados Overlay Pub.Tutor'),
    t('<h2><span class="gris-tres">Proyectos Finalizados de</span> <span class="verde">[name]</span></h2>'),
    t('Conteo Horas de Tutoría'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black horas-tutoria"><span class="icono-horas">Horas de tutoría</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[field_horas_acordadas_1]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Conteo Puntos Vendidos'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black puntos-vendidos"><span class="icono-puntos-ttm">Puntos  Experto Online Vendidos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">0</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black puntos-vendidos"><span class="icono-puntos-ttm">Puntos  Experto Online Vendidos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[field_puntos]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Mi cuenta Tutor En curso'),
    t('No tienes proyectos en curso'),
    t('Inicio proyecto'),
    t('Concepto'),
    t('Puntos'),
    t('Mi cuenta Tutor pendiente Calificacion'),
    t('No tienes puntos pendientes de calificación'),
    t('Fin proyecto'),
    t('Mi cuenta Tutor pendiente Facturación'),
    t('No tienes puntos pendientes de facturación'),
    t('Calificación'),
    t('Mi cuenta Tutor Cobrado'),
    t('No tienes puntos cobrados'),
    t('Cobro'),
    t('Mi cuenta Tutor En curso SUMA'),
    t('<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos proyectos en curso</span><span class="puntos span6">0</span>
</div>'),
    t('<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos proyectos en curso</span><span class="puntos span6">[field_puntos-value]</span>
</div>'),
    t('Mi cuenta Tutor pendiente Calificacion SUMA'),
    t('<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos pendientes de calificación</span><span class="puntos span6">0</span>
</div>'),
    t('<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos pendientes de calificación</span><span class="puntos span6">[field_puntos-value]</span>
</div>'),
    t('Mi cuenta Tutor calificados SUMA'),
    t('<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos calificados pendientes de facturación</span><span class="puntos span6">0</span>
</div>'),
    t('<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos calificados pendientes de facturación</span><span class="puntos span6">[field_puntos-value]</span>
</div>'),
    t('Mi cuenta Tutor cobrados SUMA'),
    t('<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos cobrados</span><span class="puntos span6">0</span>
</div>'),
    t('<div class="total-puntos-categoria bold rojo">
<span class="label-puntos span15">Puntos cobrados</span><span class="puntos span6">[field_puntos-value]</span>
</div>'),
  );
  $export['perfil_contenido'] = $view;

  $view = new view();
  $view->name = 'usuario';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'usuario';
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
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
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
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'emprendedor' => 'emprendedor',
    'main' => 'main',
    'tutor' => 'tutor',
  );
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Campo: Usuario: Imagen */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'perfil_93x94';
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Criterios de filtrado: Usuario: Activo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Info Usuario Privado */
  $handler = $view->new_display('panel_pane', 'Info Usuario Privado', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relación: Perfil: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_lid_1']['id'] = 'field_pais_lid_1';
  $handler->display->display_options['relationships']['field_pais_lid_1']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_lid_1']['field'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid_1']['relationship'] = 'profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Perfil: Nombres */
  $handler->display->display_options['fields']['field_nombres']['id'] = 'field_nombres';
  $handler->display->display_options['fields']['field_nombres']['table'] = 'field_data_field_nombres';
  $handler->display->display_options['fields']['field_nombres']['field'] = 'field_nombres';
  $handler->display->display_options['fields']['field_nombres']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_nombres']['label'] = '';
  $handler->display->display_options['fields']['field_nombres']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nombres']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nombres']['element_default_classes'] = FALSE;
  /* Campo: Perfil: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_apellido']['label'] = '';
  $handler->display->display_options['fields']['field_apellido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apellido']['element_default_classes'] = FALSE;
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => 'perfil_93x94',
    'image_link' => '',
  );
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Location: Provincia */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_pais_lid_1';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province], ';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Campo: Location: País */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_pais_lid_1';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['text'] = '[province][country]';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="info-usuario-content clearfix">
<h1 class="nombre-apellido verde">[field_nombres] [field_apellido]</h1>
<div class="info-usuario-detalle clearfix">
<div class="info-usuario-imagen span4">[field_imagen_perfil]</div>
<div class="info-usuario-nick-ubicacion span6 offset1 semibold normal">Nick: [name]<br />[country]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Link Edit Usuario */
  $handler = $view->new_display('panel_pane', 'Link Edit Usuario', 'panel_pane_2');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Enlace de edición */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Editar perfil';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Info Usuario Público */
  $handler = $view->new_display('panel_pane', 'Info Usuario Público', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relación: Perfil: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_lid_1']['id'] = 'field_pais_lid_1';
  $handler->display->display_options['relationships']['field_pais_lid_1']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_lid_1']['field'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid_1']['relationship'] = 'profile';
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
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => 'perfil_93x94',
    'image_link' => '',
  );
  /* Campo: Usuario: Fecha de creación */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<br>Miembro desde: [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'America/Argentina/Buenos_Aires';
  /* Campo: Location: Provincia */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_pais_lid_1';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province], ';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Campo: Location: País */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_pais_lid_1';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['text'] = '[province][country]';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<br>
<span>Participa en: [name_1]</span>';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="info-usuario-content clearfix">
<h1 class="nombre-apellido verde">[name]</h1>
<div class="info-usuario-detalle clearfix">
<div class="info-usuario-imagen span4">[field_imagen_perfil]</div>
<div class="info-usuario-nick-ubicacion span6 offset1 semibold normal">[country]<br />[uid]<br />[created]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Info Usuario Público Tutor */
  $handler = $view->new_display('panel_pane', 'Info Usuario Público Tutor', 'panel_pane_4');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Relación Main Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Relación Main Profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relación: Perfil: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_lid_1']['id'] = 'field_pais_lid_1';
  $handler->display->display_options['relationships']['field_pais_lid_1']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_lid_1']['field'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid_1']['relationship'] = 'profile';
  /* Relación: Relación Profile Tutor */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['ui_name'] = 'Relación Profile Tutor';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'tutor' => 'tutor',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Campo: Calificacion general */
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['id'] = 'field_calificacion_general_tutor';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['table'] = 'field_data_field_calificacion_general_tutor';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['field'] = 'field_calificacion_general_tutor';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['label'] = '';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => 'perfil_93x94',
    'image_link' => '',
  );
  /* Campo: Usuario: Fecha de creación */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Miembro desde: [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'America/Argentina/Buenos_Aires';
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['empty'] = 'No han sido seleccionadas categorías para este perfil';
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' / ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_categoria']['separator'] = '<br>';
  /* Campo: Location: Provincia */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_pais_lid_1';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province], ';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Campo: Location: País */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_pais_lid_1';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['text'] = '[province][country]';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Campo: Perfil: Tarifa */
  $handler->display->display_options['fields']['field_tarifa']['id'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['field'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_tarifa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['text'] = '<div class="span11 offset1 clearfix">
<table>
<tbody>
<tr>
<td><span class="span7 normal-min black bold uppercase">Valor hora de consultoría</span></td>
<td><span class="span4 normal-min black bold uppercase align-right"><span>Puntos</span> <span class="puntos-value">[field_tarifa-value]</span></span></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['field_tarifa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 0,
  );
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="info-usuario-content clearfix">
<div class="info-usuario-content-basic clearfix span11 offset1">
<h1 class="nombre-apellido verde">[name]</h1>
<div class="info-usuario-detalle clearfix">
<div class="info-usuario-imagen span4">[field_imagen_perfil]</div>
<div class="info-usuario-nick-ubicacion span6 offset1 semibold normal">
<div id="calificacion">[field_calificacion_general_tutor]</div>
<div>Categoría:<br>[field_categoria]<br /><br />[country]</div>
</div>
</div>
</div>
<div class="info-usuario-tarifa span13">[field_tarifa]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Usuario Puntos Perfil Privado */
  $handler = $view->new_display('panel_pane', 'Usuario Puntos Perfil Privado', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = '';
  $handler->display->display_options['fields']['points']['exclude'] = TRUE;
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['points']['separator'] = '';
  $handler->display->display_options['fields']['points']['format_plural'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="usuario-puntos-ttm span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black puntos-ttm"><span class="icono-puntos-ttm">Puntos  Experto Online</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[points]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta  Experto Online Tabla */
  $handler = $view->new_display('panel_pane', 'Mi cuenta  Experto Online Tabla', 'panel_pane_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'span21 offset1';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Opciones avanzadas',
    ),
    'time_stamp' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'description' => 'description',
    'entity_id' => 'entity_id',
    'points' => 'points',
    'operation' => 'operation',
    'time_stamp' => 'time_stamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'description' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'points' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'operation' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'time_stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong class="verde">No tienes movimientos en el período solicitado</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Transacciones de puntos de usuario: Sello temporal */
  $handler->display->display_options['fields']['time_stamp']['id'] = 'time_stamp';
  $handler->display->display_options['fields']['time_stamp']['table'] = 'userpoints_txn';
  $handler->display->display_options['fields']['time_stamp']['field'] = 'time_stamp';
  $handler->display->display_options['fields']['time_stamp']['label'] = 'Fecha';
  $handler->display->display_options['fields']['time_stamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['time_stamp']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['time_stamp']['second_date_format'] = 'formatos_fecha_dd_mm_aa';
  /* Campo: Transacciones de puntos de usuario: Descripción */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'userpoints_txn';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Concepto';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Campo: Transacciones de puntos de usuario: Puntos */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_txn';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['points']['separator'] = '.';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Transacciones de puntos de usuario: Sello temporal */
  $handler->display->display_options['sorts']['time_stamp']['id'] = 'time_stamp';
  $handler->display->display_options['sorts']['time_stamp']['table'] = 'userpoints_txn';
  $handler->display->display_options['sorts']['time_stamp']['field'] = 'time_stamp';
  $handler->display->display_options['sorts']['time_stamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['time_stamp']['expose']['label'] = 'Sello temporal';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Transacciones de puntos de usuario: Sello temporal */
  $handler->display->display_options['filters']['time_stamp']['id'] = 'time_stamp';
  $handler->display->display_options['filters']['time_stamp']['table'] = 'userpoints_txn';
  $handler->display->display_options['filters']['time_stamp']['field'] = 'time_stamp';
  $handler->display->display_options['filters']['time_stamp']['operator'] = 'between';
  $handler->display->display_options['filters']['time_stamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['time_stamp']['expose']['operator_id'] = 'time_stamp_op';
  $handler->display->display_options['filters']['time_stamp']['expose']['label'] = 'Filtrar por rango de fecha';
  $handler->display->display_options['filters']['time_stamp']['expose']['operator'] = 'time_stamp_op';
  $handler->display->display_options['filters']['time_stamp']['expose']['identifier'] = 'time_stamp';
  $handler->display->display_options['filters']['time_stamp']['expose']['remember_roles'] = array(
    2 => '2',
    8 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['time_stamp']['group_info']['label'] = 'Sello temporal';
  $handler->display->display_options['filters']['time_stamp']['group_info']['identifier'] = 'time_stamp';
  $handler->display->display_options['filters']['time_stamp']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['time_stamp']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Conteo Proyectos Activos Privado */
  $handler = $view->new_display('panel_pane', 'Conteo Proyectos Activos Privado', 'panel_pane_7');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black estado-proyecto"><span class="icono-activo">Proyectos abiertos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Artículos Publicados Tutor Público */
  $handler = $view->new_display('panel_pane', 'Artículos Publicados Tutor Público', 'panel_pane_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="normal-min bold black uppercase span11 offset1">
Contenidos Publicados en Tutoriame
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pie de página: Global: Área de texto */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span11 offset1">
<a href="<?php print $base_path; ?>users/[uid]/contenidos-publicados">Ver más +</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'black normal-plus';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'articulo-publicado-titulo span11 offset1';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articulo' => 'articulo',
  );
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Servicio Tutor Público */
  $handler = $view->new_display('panel_pane', 'Servicio Tutor Público', 'panel_pane_9');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Perfil: Resumen del servicio */
  $handler->display->display_options['fields']['field_resumen_del_servicio']['id'] = 'field_resumen_del_servicio';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['table'] = 'field_data_field_resumen_del_servicio';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['field'] = 'field_resumen_del_servicio';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['label'] = '';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_servicio']['alter']['text'] = '<div class="servicio-content">
<div class="servicio-titulo medium verde bold">Resumen del servicio</div>
<div class="servicio-resumen black medium">[field_resumen_del_servicio]</div>
</div>';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resumen_del_servicio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resumen_del_servicio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_servicio']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Formación Tutor Público */
  $handler = $view->new_display('panel_pane', 'Formación Tutor Público', 'panel_pane_10');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="servicio-titulo medium verde bold">Formación</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'emprendedor' => 'emprendedor',
    'main' => 'main',
    'tutor' => 'tutor',
  );
  /* Relación: Perfil: Formación (field_formacion) */
  $handler->display->display_options['relationships']['field_formacion_value']['id'] = 'field_formacion_value';
  $handler->display->display_options['relationships']['field_formacion_value']['table'] = 'field_data_field_formacion';
  $handler->display->display_options['relationships']['field_formacion_value']['field'] = 'field_formacion_value';
  $handler->display->display_options['relationships']['field_formacion_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_formacion_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Field collection item: Título */
  $handler->display->display_options['fields']['field_formacion_titulo']['id'] = 'field_formacion_titulo';
  $handler->display->display_options['fields']['field_formacion_titulo']['table'] = 'field_data_field_formacion_titulo';
  $handler->display->display_options['fields']['field_formacion_titulo']['field'] = 'field_formacion_titulo';
  $handler->display->display_options['fields']['field_formacion_titulo']['relationship'] = 'field_formacion_value';
  $handler->display->display_options['fields']['field_formacion_titulo']['label'] = '';
  $handler->display->display_options['fields']['field_formacion_titulo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_formacion_titulo']['element_class'] = 'medium bold black';
  $handler->display->display_options['fields']['field_formacion_titulo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_formacion_titulo']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_formacion_titulo']['element_wrapper_class'] = 'formacion-titulo';
  $handler->display->display_options['fields']['field_formacion_titulo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_formacion_titulo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_formacion_titulo']['empty_zero'] = TRUE;
  /* Campo: Field collection item: Institución */
  $handler->display->display_options['fields']['field_formacion_institucion']['id'] = 'field_formacion_institucion';
  $handler->display->display_options['fields']['field_formacion_institucion']['table'] = 'field_data_field_formacion_institucion';
  $handler->display->display_options['fields']['field_formacion_institucion']['field'] = 'field_formacion_institucion';
  $handler->display->display_options['fields']['field_formacion_institucion']['relationship'] = 'field_formacion_value';
  $handler->display->display_options['fields']['field_formacion_institucion']['label'] = '';
  $handler->display->display_options['fields']['field_formacion_institucion']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_formacion_institucion']['element_class'] = 'medium black';
  $handler->display->display_options['fields']['field_formacion_institucion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_formacion_institucion']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_formacion_institucion']['element_wrapper_class'] = 'formacion-institucion';
  $handler->display->display_options['fields']['field_formacion_institucion']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_formacion_institucion']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_formacion_institucion']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_formacion_institucion']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Perfil: Formación (field_formacion:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_formacion';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'profile';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Experiencia Tutor Público */
  $handler = $view->new_display('panel_pane', 'Experiencia Tutor Público', 'panel_pane_11');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="servicio-titulo medium verde bold">Experiencia</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pie de página: Global: Área de texto */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span21">
<a href="<?php print $base_path; ?>users/[uid]/experiencia">Ver más +</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'emprendedor' => 'emprendedor',
    'main' => 'main',
    'tutor' => 'tutor',
  );
  /* Relación: Perfil: Experiencia laboral (field_experiencia_laboral) */
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['id'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['table'] = 'field_data_field_experiencia_laboral';
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['field'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Field collection item: Nombre del puesto */
  $handler->display->display_options['fields']['field_nombre_del_puesto']['id'] = 'field_nombre_del_puesto';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['table'] = 'field_data_field_nombre_del_puesto';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['field'] = 'field_nombre_del_puesto';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['relationship'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['label'] = '';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nombre_del_puesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nombre_del_puesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nombre_del_puesto']['empty_zero'] = TRUE;
  /* Campo: Field collection item: Empresa */
  $handler->display->display_options['fields']['field_empresa']['id'] = 'field_empresa';
  $handler->display->display_options['fields']['field_empresa']['table'] = 'field_data_field_empresa';
  $handler->display->display_options['fields']['field_empresa']['field'] = 'field_empresa';
  $handler->display->display_options['fields']['field_empresa']['relationship'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['fields']['field_empresa']['label'] = '';
  $handler->display->display_options['fields']['field_empresa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_empresa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_empresa']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_empresa']['empty_zero'] = TRUE;
  /* Campo: Fecha Ingreso start */
  $handler->display->display_options['fields']['field_experiencia_ingreso']['id'] = 'field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['table'] = 'field_data_field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['field'] = 'field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['relationship'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['ui_name'] = 'Fecha Ingreso start';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['label'] = '';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['alter']['text'] = '[field_experiencia_ingreso]';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['settings'] = array(
    'format_type' => 'a_o',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Fecha ingreso end */
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['id'] = 'field_experiencia_ingreso_1';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['table'] = 'field_data_field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['field'] = 'field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['relationship'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['ui_name'] = 'Fecha ingreso end';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['label'] = '';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['alter']['text'] = '-[field_experiencia_ingreso_1]';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['settings'] = array(
    'format_type' => 'a_o',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="black medium">
<div class="experiencia-puesto bold">[field_nombre_del_puesto]</div>
<div class="experiencia-empresa">[field_empresa]</div>
<div class="experiencia-fechas">[field_experiencia_ingreso][field_experiencia_ingreso_1]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Perfil: Experiencia laboral (field_experiencia_laboral:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_experiencia_laboral';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'profile';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Contenidos Publicados Tutor Público */
  $handler = $view->new_display('panel_pane', 'Contenidos Publicados Tutor Público', 'panel_pane_12');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="servicio-titulo medium verde bold">Contenidos publicados</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pie de página: Global: Área de texto */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span21">
<a href="<?php print $base_path; ?>users/[uid]/contenidos-publicados">Ver más +</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Estadísticas de contenido: Total de vistas */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['relationship'] = 'uid';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['alter']['text'] = 'Vistas: [totalcount]';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'uid';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Publicado hace: [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="black medium">
<div class="contenidos-titulo bold">[title]</div>
<div class="contenidos-info">
<span class="contenidos-info-item-odd">[created]</span> | <span class="icono-vistas contenidos-info-item-even">[totalcount]</span>
</div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articulo' => 'articulo',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Conteo Contenidos Publicados Tutor Público */
  $handler = $view->new_display('panel_pane', 'Conteo Contenidos Publicados Tutor Público', 'panel_pane_13');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 normal-min uppercase bold black contenidos-publicados"><span class="icono-contenidos">Publicaciones</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articulo' => 'articulo',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Contenidos Publicados Overlay Tutor Público */
  $handler = $view->new_display('page', 'Contenidos Publicados Overlay Tutor Público', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'contenidos-publicados-overlay';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2><span class="gris-tres">Contenidos publicados por</span> <span class="verde">[name]</span></h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'uid';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Publicado hace: [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Campo: Estadísticas de contenido: Total de vistas */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['relationship'] = 'uid';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['alter']['text'] = 'Vistas: [totalcount]';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="black medium">
<div class="contenidos-titulo bold">[title]</div>
<div class="contenidos-info">
<span class="contenidos-info-item-odd">[created]</span> | <span class="icono-vistas contenidos-info-item-even">[totalcount]</span>
</div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articulo' => 'articulo',
  );
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'users/%/contenidos-publicados';

  /* Display: Experiencia Overlay Público Tutor */
  $handler = $view->new_display('page', 'Experiencia Overlay Público Tutor', 'page_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'experiencia-laboral-overlay';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2><span class="gris-tres">Experiencia laboral</span> <span class="verde">[name]</span></h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tutor' => 'tutor',
  );
  /* Relación: Perfil: Experiencia laboral (field_experiencia_laboral) */
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['id'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['table'] = 'field_data_field_experiencia_laboral';
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['field'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_experiencia_laboral_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Field collection item: Nombre del puesto */
  $handler->display->display_options['fields']['field_nombre_del_puesto']['id'] = 'field_nombre_del_puesto';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['table'] = 'field_data_field_nombre_del_puesto';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['field'] = 'field_nombre_del_puesto';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['relationship'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['label'] = '';
  $handler->display->display_options['fields']['field_nombre_del_puesto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nombre_del_puesto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nombre_del_puesto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nombre_del_puesto']['empty_zero'] = TRUE;
  /* Campo: Field collection item: Empresa */
  $handler->display->display_options['fields']['field_empresa']['id'] = 'field_empresa';
  $handler->display->display_options['fields']['field_empresa']['table'] = 'field_data_field_empresa';
  $handler->display->display_options['fields']['field_empresa']['field'] = 'field_empresa';
  $handler->display->display_options['fields']['field_empresa']['relationship'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['fields']['field_empresa']['label'] = '';
  $handler->display->display_options['fields']['field_empresa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_empresa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_empresa']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_empresa']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_empresa']['type'] = 'text_plain';
  /* Campo: fecha ingreso start */
  $handler->display->display_options['fields']['field_experiencia_ingreso']['id'] = 'field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['table'] = 'field_data_field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['field'] = 'field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['relationship'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['ui_name'] = 'fecha ingreso start';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['label'] = '';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['alter']['text'] = '[field_experiencia_ingreso]';
  $handler->display->display_options['fields']['field_experiencia_ingreso']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso']['settings'] = array(
    'format_type' => 'a_o',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: fecha ingreso end */
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['id'] = 'field_experiencia_ingreso_1';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['table'] = 'field_data_field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['field'] = 'field_experiencia_ingreso';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['relationship'] = 'field_experiencia_laboral_value';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['ui_name'] = 'fecha ingreso end';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['label'] = '';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['alter']['text'] = '-[field_experiencia_ingreso_1]';
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_ingreso_1']['settings'] = array(
    'format_type' => 'a_o',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="black medium">
<div class="experiencia-puesto bold">[field_nombre_del_puesto]</div>
<div class="experiencia-empresa">[field_empresa]</div>
<div class="experiencia-fechas">[field_experiencia_ingreso][field_experiencia_ingreso_1]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Perfil: Experiencia laboral (field_experiencia_laboral:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_experiencia_laboral';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'profile';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'users/%/experiencia';

  /* Display: Encabezado Usuario Edit */
  $handler = $view->new_display('panel_pane', 'Encabezado Usuario Edit', 'panel_pane_14');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h1 class="verde">Bienvenido "[name]",</h1>
<div>completa tu perfil para aprovechar al máximo tu cuenta en Tutoriame:</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Conteo Contratos Realizados Empr.Privado */
  $handler = $view->new_display('panel_pane', 'Conteo Contratos Realizados Empr.Privado', 'panel_pane_15');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-contratos-realizados span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black contratos-realizados"><span class="icono-usuario">Contratos Realizados</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  /* Criterios de filtrado: Workflow history: New state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Bloque Mis Tutores */
  $handler = $view->new_display('panel_pane', 'Bloque Mis Tutores', 'panel_pane_16');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="perfil-mis-tutores-encabezado">
<table>
<tbody>
<tr class="encabezado">
<td class="medium verde bold">Mis Tutores</td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $tutores = $base_path . \'buscar-tutores\'; ?>
<div class="mis-proyectos-vacio">
<div class="mis-proyectos-titulo medium verde bold">Mis Tutores</div>
<p>No tienes tutorías activas.</p>
<p class="rojo bold"><a href="<?php print $tutores; ?>">Encuentra tutores para tus proyectos</a></p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'uid';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['relationship'] = 'uid';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_tutor_target_id';
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
    'image_style' => '26x27',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_imagen_perfil']['group_column'] = 'entity_id';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="perfil-mis-tutores-listado">
<table>
<tbody>
<tr class="usuario-enlace">
<td>
<div class="usuario-imagen">[field_imagen_perfil]</div>
<div class="usuario-nombre">[name]</div>
</td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Bloque Mis Tutoriados */
  $handler = $view->new_display('panel_pane', 'Bloque Mis Tutoriados', 'panel_pane_17');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="perfil-mis-tutores-encabezado">
<table>
<tbody>
<tr class="encabezado">
<td class="medium verde bold">Mis Tutoriados</td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $proyectos = $base_path . \'buscar-proyectos\'; ?>
<div class="mis-proyectos-vacio">
<div class="mis-proyectos-titulo medium verde bold">Mis Tutoriados</div>
<p>No tienes consultorías activas.</p>
<p class="rojo bold"><a href="<?php print $proyectos; ?>">Encuentra proyectos que puedan interesarte</a></p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'field_proyecto_target_id';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid_1';
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
    'image_style' => '26x27',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_imagen_perfil']['group_column'] = 'entity_id';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="perfil-mis-tutores-listado">
<div class="usuario-enlace">
<div class="usuario-imagen">[field_imagen_perfil]</div>
<div class="usuario-nombre">[name]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mis Tutores */
  $handler = $view->new_display('panel_pane', 'Mis Tutores', 'panel_pane_18');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix span23';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="perfil-mis-tutores-encabezado">
<table>
<tbody>
<tr class="encabezado">
<td class="medium verde bold">Mis Tutores</td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $tutores = $base_path . \'buscar-tutores\'; ?>
<div class="mis-proyectos-vacio">
<div class="mis-proyectos-titulo medium verde bold">Mis Tutores</div>
<p>No tienes tutorías activas.</p>
<p class="rojo bold"><a href="<?php print $tutores; ?>">Encuentra tutores para tus proyectos</a></p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'uid';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_tutor_target_id']['id'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['relationships']['field_tutor_target_id']['field'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['field_tutor_target_id']['relationship'] = 'uid';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tutor' => 'tutor',
  );
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relación: Perfil: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_lid']['id'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_lid']['field'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['relationship'] = 'profile_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => 'perfil_93x94',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_imagen_perfil']['group_column'] = 'entity_id';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Campo: Calificacion general */
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['id'] = 'field_calificacion_general_tutor';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['table'] = 'field_data_field_calificacion_general_tutor';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['field'] = 'field_calificacion_general_tutor';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['label'] = '';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_calificacion_general_tutor']['group_column'] = 'entity_id';
  /* Campo: Global: Vista */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'tutores_proyectos_finalizados';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!uid]';
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_categoria']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'span',
    'separator' => ' / ',
  );
  $handler->display->display_options['fields']['field_categoria']['delta_offset'] = '0';
  /* Campo: Campo: Habilidades */
  $handler->display->display_options['fields']['field_habilidades_requeridas']['id'] = 'field_habilidades_requeridas';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['table'] = 'field_data_field_habilidades_requeridas';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['field'] = 'field_habilidades_requeridas';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['label'] = '';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_habilidades_requeridas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_habilidades_requeridas']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['delta_offset'] = '0';
  /* Campo: Perfil: Tarifa */
  $handler->display->display_options['fields']['field_tarifa']['id'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['field'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_tarifa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['text'] = '[field_tarifa-value] puntos';
  $handler->display->display_options['fields']['field_tarifa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Campo: Location: País */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_pais_lid';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table class="span21 offset1">
<tbody>
<tr>
<td class="buscar-tutores-imagen span4">[field_imagen_perfil]</td>
<td class="buscar-tutores-detalle-tutor span16">
<div class="buscar-tutores-detalle-tutor-encabezado clearfix">
<span class="buscar-tutores-detalle-tutor-encabezado-nick normal bold span8">[name]</span><span id="calificacion" class="publico-tutor buscar-tutores-detalle-tutor-encabezado-calificacion bold span7 offset1">
<span class="span3">calificación </span><span class="span4">[field_calificacion_general_tutor]</span>
</span>
</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info black normal span16 clearfix">
<div class="buscar-tutores-detalle-tutor-encabezado-info-finalizados span16"><span class="span5">Proyectos finalizados:</span><span class="span10">[view]</span></div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-tarifa span16">Tarifa horaria: [field_tarifa]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-pais span16">[country]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-categoria span16">Categoría: [field_categoria]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-habilidades span16">Habilidades: [field_habilidades_requeridas]</div>
</div>
</td>
</tr>
</tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 1;
  /* Criterios de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'field_tutor_target_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mis Tutoriados */
  $handler = $view->new_display('panel_pane', 'Mis Tutoriados', 'panel_pane_19');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
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
  $handler->display->display_options['style_options']['row_class'] = 'clearfix span23';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="perfil-mis-tutores-encabezado">
<table>
<tbody>
<tr class="encabezado">
<td class="medium verde bold">Mis Tutoriados</td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php global $base_path;?>
<?php $proyectos = $base_path . \'buscar-proyectos\'; ?>
<div class="mis-proyectos-vacio">
<div class="mis-proyectos-titulo medium verde bold">Mis Tutoriados</div>
<p>No tienes consultorías activas.</p>
<p class="rojo bold"><a href="<?php print $proyectos; ?>">Encuentra proyectos que puedan interesarte</a></p>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'field_proyecto_target_id';
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'emprendedor' => 'emprendedor',
  );
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relación: Perfil: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_lid']['id'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_lid']['field'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['relationship'] = 'profile_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Campo: Perfil: Imagen de perfil */
  $handler->display->display_options['fields']['field_imagen_perfil']['id'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['table'] = 'field_data_field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['field'] = 'field_imagen_perfil';
  $handler->display->display_options['fields']['field_imagen_perfil']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_imagen_perfil']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_perfil']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_perfil']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_perfil']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_perfil']['settings'] = array(
    'image_style' => 'perfil_93x94',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_imagen_perfil']['group_column'] = 'entity_id';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Global: Vista */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'tutores_proyectos_finalizados';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_2';
  $handler->display->display_options['fields']['view']['arguments'] = '[!uid]';
  /* Campo: Location: País */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_pais_lid';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table class="span21 offset1">
<tbody>
<tr>
<td class="buscar-tutores-imagen span4">[field_imagen_perfil]</td>
<td class="buscar-tutores-detalle-tutor span16">
<div class="buscar-tutores-detalle-tutor-encabezado clearfix">
<span class="buscar-tutores-detalle-tutor-encabezado-nick normal verde bold span9">[name]</span></div>
<div class="buscar-tutores-detalle-tutor-encabezado-info black normal span16 clearfix">
<div class="buscar-tutores-detalle-tutor-encabezado-info-finalizados span16"><span class="span5">Proyectos finalizados:</span><span class="span10">[view]</span></div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-pais span16">[country]</div>
</div>
</td>
</tr>
</tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Conteo Proyectos Activos Pub.Tutor */
  $handler = $view->new_display('panel_pane', 'Conteo Proyectos Activos Pub.Tutor', 'panel_pane_20');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 normal-min uppercase bold black estado-proyecto"><span class="icono-activo">Proyectos activos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Conteo Proyectos Finalizados Pub.Tutor */
  $handler = $view->new_display('panel_pane', 'Conteo Proyectos Finalizados Pub.Tutor', 'panel_pane_21');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_proyecto_target_id']['id'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['field'] = 'field_proyecto_target_id';
  $handler->display->display_options['relationships']['field_proyecto_target_id']['relationship'] = 'reverse_field_tutor_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 normal-min uppercase bold black estado-proyecto"><span class="icono-finalizado">Proyectos finalizados</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Conteo Contratos Realizados Empr.Privado En Proyecto */
  $handler = $view->new_display('panel_pane', 'Conteo Contratos Realizados Empr.Privado En Proyecto', 'panel_pane_22');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-contratos-realizados span9 offset1 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black"><span class="icono-usuario">Contratos realizados</span></div></td>
<td><div class="span3 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrato' => 'contrato',
  );
  /* Criterios de filtrado: Workflow history: New state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Conteo Contenidos Publicados Tutor Privado */
  $handler = $view->new_display('panel_pane', 'Conteo Contenidos Publicados Tutor Privado', 'panel_pane_23');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Contenido generado */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black contenidos-publicados"><span class="icono-contenidos">Publicaciones</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articulo' => 'articulo',
  );
  /* Criterios de filtrado: Usuario: Actual */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Calificacion Publica Tutor */
  $handler = $view->new_display('panel_pane', 'Calificacion Publica Tutor', 'panel_pane_24');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tutor' => 'tutor',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Calidad del trabajo */
  $handler->display->display_options['fields']['field_calidad_del_trabajo']['id'] = 'field_calidad_del_trabajo';
  $handler->display->display_options['fields']['field_calidad_del_trabajo']['table'] = 'field_data_field_calidad_del_trabajo';
  $handler->display->display_options['fields']['field_calidad_del_trabajo']['field'] = 'field_calidad_del_trabajo';
  $handler->display->display_options['fields']['field_calidad_del_trabajo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_calidad_del_trabajo']['alter']['text'] = '<div class="calificacion">
<span class="calificacion-label">Calidad del trabajo</span>
<span class="calificacion-rating">[field_calidad_del_trabajo-rating]</span>
</div>';
  $handler->display->display_options['fields']['field_calidad_del_trabajo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calidad_del_trabajo']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_calidad_del_trabajo']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Campo: Campo: Experiencia */
  $handler->display->display_options['fields']['field_experiencia']['id'] = 'field_experiencia';
  $handler->display->display_options['fields']['field_experiencia']['table'] = 'field_data_field_experiencia';
  $handler->display->display_options['fields']['field_experiencia']['field'] = 'field_experiencia';
  $handler->display->display_options['fields']['field_experiencia']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_experiencia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experiencia']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_experiencia']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Campo: Campo: Conocimientos */
  $handler->display->display_options['fields']['field_conocimientos']['id'] = 'field_conocimientos';
  $handler->display->display_options['fields']['field_conocimientos']['table'] = 'field_data_field_conocimientos';
  $handler->display->display_options['fields']['field_conocimientos']['field'] = 'field_conocimientos';
  $handler->display->display_options['fields']['field_conocimientos']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_conocimientos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conocimientos']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_conocimientos']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Campo: Campo: Comunicación */
  $handler->display->display_options['fields']['field_comunicacion']['id'] = 'field_comunicacion';
  $handler->display->display_options['fields']['field_comunicacion']['table'] = 'field_data_field_comunicacion';
  $handler->display->display_options['fields']['field_comunicacion']['field'] = 'field_comunicacion';
  $handler->display->display_options['fields']['field_comunicacion']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_comunicacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comunicacion']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_comunicacion']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Campo: Campo: Cumplimiento de plazos */
  $handler->display->display_options['fields']['field_cumplimiento_de_plazos']['id'] = 'field_cumplimiento_de_plazos';
  $handler->display->display_options['fields']['field_cumplimiento_de_plazos']['table'] = 'field_data_field_cumplimiento_de_plazos';
  $handler->display->display_options['fields']['field_cumplimiento_de_plazos']['field'] = 'field_cumplimiento_de_plazos';
  $handler->display->display_options['fields']['field_cumplimiento_de_plazos']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cumplimiento_de_plazos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cumplimiento_de_plazos']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_cumplimiento_de_plazos']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );

  /* Display: Mi cuenta  Experto Online Total */
  $handler = $view->new_display('panel_pane', 'Mi cuenta  Experto Online Total', 'panel_pane_25');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'span21 offset1';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2 class="plus verde">Estado de cuenta</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2 class="plus verde">Estado de cuenta</h2>
<div class="mi-cuenta-ttm-total-puntos">
<span>Saldo en puntos:</span> <span class="bold rojo">0</span>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points_1']['id'] = 'points_1';
  $handler->display->display_options['fields']['points_1']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points_1']['field'] = 'points';
  $handler->display->display_options['fields']['points_1']['label'] = '';
  $handler->display->display_options['fields']['points_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['points_1']['alter']['text'] = '<div class="mi-cuenta-ttm-total-puntos">
<span>Saldo en puntos:</span> <span class="bold rojo">[points_1]</span>
</div>';
  $handler->display->display_options['fields']['points_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['points_1']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Usuario: Uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['usuario'] = array(
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
    t('Perfil'),
    t('Todo(s)'),
    t('Info Usuario Privado'),
    t('Location from field_pais'),
    t('[province], '),
    t('[province][country]'),
    t('<div class="info-usuario-content clearfix">
<h1 class="nombre-apellido verde">[field_nombres] [field_apellido]</h1>
<div class="info-usuario-detalle clearfix">
<div class="info-usuario-imagen span4">[field_imagen_perfil]</div>
<div class="info-usuario-nick-ubicacion span6 offset1 semibold normal">Nick: [name]<br />[country]</div>
</div>
</div>'),
    t('View panes'),
    t('Link Edit Usuario'),
    t('Editar perfil'),
    t('Info Usuario Público'),
    t('Usuario entidad referenciada de field_institucion'),
    t('<br>Miembro desde: [created]'),
    t('<br>
<span>Participa en: [name_1]</span>'),
    t('<div class="info-usuario-content clearfix">
<h1 class="nombre-apellido verde">[name]</h1>
<div class="info-usuario-detalle clearfix">
<div class="info-usuario-imagen span4">[field_imagen_perfil]</div>
<div class="info-usuario-nick-ubicacion span6 offset1 semibold normal">[country]<br />[uid]<br />[created]</div>
</div>
</div>'),
    t('Info Usuario Público Tutor'),
    t('Miembro desde: [created]'),
    t('No han sido seleccionadas categorías para este perfil'),
    t('<div class="span11 offset1 clearfix">
<table>
<tbody>
<tr>
<td><span class="span7 normal-min black bold uppercase">Valor hora de consultoría</span></td>
<td><span class="span4 normal-min black bold uppercase align-right"><span>Puntos</span> <span class="puntos-value">[field_tarifa-value]</span></span></td>
</tr>
</tbody>
</table>
</div>'),
    t('<div class="info-usuario-content clearfix">
<div class="info-usuario-content-basic clearfix span11 offset1">
<h1 class="nombre-apellido verde">[name]</h1>
<div class="info-usuario-detalle clearfix">
<div class="info-usuario-imagen span4">[field_imagen_perfil]</div>
<div class="info-usuario-nick-ubicacion span6 offset1 semibold normal">
<div id="calificacion">[field_calificacion_general_tutor]</div>
<div>Categoría:<br>[field_categoria]<br /><br />[country]</div>
</div>
</div>
</div>
<div class="info-usuario-tarifa span13">[field_tarifa]</div>
</div>'),
    t('Usuario Puntos Perfil Privado'),
    t('.'),
    t('<div class="usuario-puntos-ttm span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black puntos-ttm"><span class="icono-puntos-ttm">Puntos  Experto Online</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[points]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Mi cuenta  Experto Online Tabla'),
    t('Filtrar'),
    t('Seleccione cualquier filtro y haga clic en Aplicar para ver los resultados'),
    t('<strong class="verde">No tienes movimientos en el período solicitado</strong>'),
    t('Fecha'),
    t('Concepto'),
    t('Puntos'),
    t('Sello temporal'),
    t('Filtrar por rango de fecha'),
    t('Conteo Proyectos Activos Privado'),
    t('nodos'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black estado-proyecto"><span class="icono-activo">Proyectos abiertos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Artículos Publicados Tutor Público'),
    t('<div class="normal-min bold black uppercase span11 offset1">
Contenidos Publicados en Tutoriame
</div>'),
    t('<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span11 offset1">
<a href="<?php print $base_path; ?>users/[uid]/contenidos-publicados">Ver más +</a>
</div>'),
    t('Servicio Tutor Público'),
    t('<div class="servicio-content">
<div class="servicio-titulo medium verde bold">Resumen del servicio</div>
<div class="servicio-resumen black medium">[field_resumen_del_servicio]</div>
</div>'),
    t('Formación Tutor Público'),
    t('<div class="servicio-titulo medium verde bold">Formación</div>'),
    t('field collection item from field_formacion'),
    t('Experiencia Tutor Público'),
    t('<div class="servicio-titulo medium verde bold">Experiencia</div>'),
    t('<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span21">
<a href="<?php print $base_path; ?>users/[uid]/experiencia">Ver más +</a>
</div>'),
    t('field collection item from field_experiencia_laboral'),
    t('[field_experiencia_ingreso]'),
    t('-[field_experiencia_ingreso_1]'),
    t('<div class="black medium">
<div class="experiencia-puesto bold">[field_nombre_del_puesto]</div>
<div class="experiencia-empresa">[field_empresa]</div>
<div class="experiencia-fechas">[field_experiencia_ingreso][field_experiencia_ingreso_1]</div>
</div>'),
    t('Contenidos Publicados Tutor Público'),
    t('<div class="servicio-titulo medium verde bold">Contenidos publicados</div>'),
    t('<?php global $base_path;?>
<div class="ver-mas align-right verde bold medium span21">
<a href="<?php print $base_path; ?>users/[uid]/contenidos-publicados">Ver más +</a>
</div>'),
    t('Vistas: [totalcount]'),
    t(','),
    t('Publicado hace: [created]'),
    t('<div class="black medium">
<div class="contenidos-titulo bold">[title]</div>
<div class="contenidos-info">
<span class="contenidos-info-item-odd">[created]</span> | <span class="icono-vistas contenidos-info-item-even">[totalcount]</span>
</div>

</div>'),
    t('Conteo Contenidos Publicados Tutor Público'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 normal-min uppercase bold black contenidos-publicados"><span class="icono-contenidos">Publicaciones</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Contenidos Publicados Overlay Tutor Público'),
    t('<h2><span class="gris-tres">Contenidos publicados por</span> <span class="verde">[name]</span></h2>'),
    t('Experiencia Overlay Público Tutor'),
    t('<h2><span class="gris-tres">Experiencia laboral</span> <span class="verde">[name]</span></h2>'),
    t('Encabezado Usuario Edit'),
    t('<h1 class="verde">Bienvenido "[name]",</h1>
<div>completa tu perfil para aprovechar al máximo tu cuenta en Tutoriame:</div>
'),
    t('Conteo Contratos Realizados Empr.Privado'),
    t('<div class="autor-contratos-realizados span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black contratos-realizados"><span class="icono-usuario">Contratos Realizados</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Bloque Mis Tutores'),
    t('<div class="perfil-mis-tutores-encabezado">
<table>
<tbody>
<tr class="encabezado">
<td class="medium verde bold">Mis Tutores</td>
</tr>
</tbody>
</table>
</div>'),
    t('<?php global $base_path;?>
<?php $tutores = $base_path . \'buscar-tutores\'; ?>
<div class="mis-proyectos-vacio">
<div class="mis-proyectos-titulo medium verde bold">Mis Tutores</div>
<p>No tienes tutorías activas.</p>
<p class="rojo bold"><a href="<?php print $tutores; ?>">Encuentra tutores para tus proyectos</a></p>
</div>'),
    t('Contenido entidad referenciada de field_proyecto'),
    t('Usuario entidad referenciada de field_tutor'),
    t('<div class="perfil-mis-tutores-listado">
<table>
<tbody>
<tr class="usuario-enlace">
<td>
<div class="usuario-imagen">[field_imagen_perfil]</div>
<div class="usuario-nombre">[name]</div>
</td>
</tr>
</tbody>
</table>
</div>'),
    t('Bloque Mis Tutoriados'),
    t('<div class="perfil-mis-tutores-encabezado">
<table>
<tbody>
<tr class="encabezado">
<td class="medium verde bold">Mis Tutoriados</td>
</tr>
</tbody>
</table>
</div>'),
    t('<?php global $base_path;?>
<?php $proyectos = $base_path . \'buscar-proyectos\'; ?>
<div class="mis-proyectos-vacio">
<div class="mis-proyectos-titulo medium verde bold">Mis Tutoriados</div>
<p>No tienes consultorías activas.</p>
<p class="rojo bold"><a href="<?php print $proyectos; ?>">Encuentra proyectos que puedan interesarte</a></p>
</div>'),
    t('Contenido referencing Usuario from field_tutor'),
    t('autor'),
    t('<div class="perfil-mis-tutores-listado">
<div class="usuario-enlace">
<div class="usuario-imagen">[field_imagen_perfil]</div>
<div class="usuario-nombre">[name]</div>
</div>
</div>'),
    t('Mis Tutores'),
    t('[field_tarifa-value] puntos'),
    t('<table class="span21 offset1">
<tbody>
<tr>
<td class="buscar-tutores-imagen span4">[field_imagen_perfil]</td>
<td class="buscar-tutores-detalle-tutor span16">
<div class="buscar-tutores-detalle-tutor-encabezado clearfix">
<span class="buscar-tutores-detalle-tutor-encabezado-nick normal bold span8">[name]</span><span id="calificacion" class="publico-tutor buscar-tutores-detalle-tutor-encabezado-calificacion bold span7 offset1">
<span class="span3">calificación </span><span class="span4">[field_calificacion_general_tutor]</span>
</span>
</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info black normal span16 clearfix">
<div class="buscar-tutores-detalle-tutor-encabezado-info-finalizados span16"><span class="span5">Proyectos finalizados:</span><span class="span10">[view]</span></div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-tarifa span16">Tarifa horaria: [field_tarifa]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-pais span16">[country]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-categoria span16">Categoría: [field_categoria]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-habilidades span16">Habilidades: [field_habilidades_requeridas]</div>
</div>
</td>
</tr>
</tbody>
</table>'),
    t('Mis Tutoriados'),
    t('<table class="span21 offset1">
<tbody>
<tr>
<td class="buscar-tutores-imagen span4">[field_imagen_perfil]</td>
<td class="buscar-tutores-detalle-tutor span16">
<div class="buscar-tutores-detalle-tutor-encabezado clearfix">
<span class="buscar-tutores-detalle-tutor-encabezado-nick normal verde bold span9">[name]</span></div>
<div class="buscar-tutores-detalle-tutor-encabezado-info black normal span16 clearfix">
<div class="buscar-tutores-detalle-tutor-encabezado-info-finalizados span16"><span class="span5">Proyectos finalizados:</span><span class="span10">[view]</span></div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-pais span16">[country]</div>
</div>
</td>
</tr>
</tbody>
</table>'),
    t('Conteo Proyectos Activos Pub.Tutor'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 normal-min uppercase bold black estado-proyecto"><span class="icono-activo">Proyectos activos</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Conteo Proyectos Finalizados Pub.Tutor'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 normal-min uppercase bold black estado-proyecto"><span class="icono-finalizado">Proyectos finalizados</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Conteo Contratos Realizados Empr.Privado En Proyecto'),
    t('<div class="autor-contratos-realizados span9 offset1 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black"><span class="icono-usuario">Contratos realizados</span></div></td>
<td><div class="span3 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Conteo Contenidos Publicados Tutor Privado'),
    t('<div class="autor-proyectos-activos span8 clearfix">
<table>
<tbody>
<tr>
<td><div class="span6 min uppercase bold black contenidos-publicados"><span class="icono-contenidos">Publicaciones</span></div></td>
<td><div class="span1 align-right normal-min bold gris-tres">[nid]</td></td>
</tr>
</tbody>
</table>
</div>'),
    t('Calificacion Publica Tutor'),
    t('Calidad del trabajo'),
    t('<div class="calificacion">
<span class="calificacion-label">Calidad del trabajo</span>
<span class="calificacion-rating">[field_calidad_del_trabajo-rating]</span>
</div>'),
    t('Experiencia'),
    t('Conocimientos'),
    t('Comunicación'),
    t('Cumplimiento de plazos'),
    t('Mi cuenta  Experto Online Total'),
    t('<h2 class="plus verde">Estado de cuenta</h2>'),
    t('<h2 class="plus verde">Estado de cuenta</h2>
<div class="mi-cuenta-ttm-total-puntos">
<span>Saldo en puntos:</span> <span class="bold rojo">0</span>
</div>'),
    t('<div class="mi-cuenta-ttm-total-puntos">
<span>Saldo en puntos:</span> <span class="bold rojo">[points_1]</span>
</div>'),
  );
  $export['usuario'] = $view;

  return $export;
}
