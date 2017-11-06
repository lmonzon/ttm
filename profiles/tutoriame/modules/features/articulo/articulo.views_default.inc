<?php
/**
 * @file
 * articulo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function articulo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contenido';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'contenido';
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
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Nodo Contenido */
  $handler = $view->new_display('panel_pane', 'Nodo Contenido', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
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
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y \\a \\l\\a\\s H:i\\h\\s';
  /* Campo: Contenido: Resumen del contenido */
  $handler->display->display_options['fields']['field_resumen_del_contenido']['id'] = 'field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['table'] = 'field_data_field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['field'] = 'field_resumen_del_contenido';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['label'] = '';
  $handler->display->display_options['fields']['field_resumen_del_contenido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_contenido']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resumen_del_contenido']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_contenido']['empty_zero'] = TRUE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="nodo-contenido-content clearfix span25">
<table class="nodo-contenido-content-encabezado">
<tr>
<td class="nodo-contenido-content-encabezado-autor-imagen span2">
<span class="span2">[field_imagen_perfil]</span>
</td>
<td class="nodo-contenido-content-encabezado-autor-nombre span8">
<span class="verde titulo-uno plus">[name]</span>
</td>
</td>
<td class="nodo-contenido-content-encabezado-detalle normal-plus black">
<div class="nodo-contenido-content-encabezado-detalle-post">Publicado el [created]</div>
<div class="nodo-contenido-content-encabezado-detalle-categoria">[field_categoria]</div>
</td>
<tr>
</table>
<h1 class="nodo-contenido-content-titulo plus verde">[title]</h1>
<div class="nodo-contenido-content-resumen semibold large gris-tres">[field_resumen_del_contenido]</div>
<div class="nodo-contenido-content-body gris-tres medium">[body]</div>
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

  /* Display: Imágenes Nodo Contenido */
  $handler = $view->new_display('panel_pane', 'Imágenes Nodo Contenido', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span12';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Adjuntar imágenes */
  $handler->display->display_options['fields']['field_imagen_articulo']['id'] = 'field_imagen_articulo';
  $handler->display->display_options['fields']['field_imagen_articulo']['table'] = 'field_data_field_imagen_articulo';
  $handler->display->display_options['fields']['field_imagen_articulo']['field'] = 'field_imagen_articulo';
  $handler->display->display_options['fields']['field_imagen_articulo']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_articulo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_articulo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_articulo']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_imagen_articulo']['settings'] = array(
    'colorbox_node_style' => '300x168',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'height700',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_imagen_articulo']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_articulo']['delta_offset'] = '0';
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

  /* Display: Archivos Nodo Contenido */
  $handler = $view->new_display('panel_pane', 'Archivos Nodo Contenido', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span12';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Subir archivos */
  $handler->display->display_options['fields']['field_documento']['id'] = 'field_documento';
  $handler->display->display_options['fields']['field_documento']['table'] = 'field_data_field_documento';
  $handler->display->display_options['fields']['field_documento']['field'] = 'field_documento';
  $handler->display->display_options['fields']['field_documento']['label'] = '';
  $handler->display->display_options['fields']['field_documento']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documento']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_documento']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_documento']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documento']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_documento']['separator'] = '<br>';
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
  $translatables['contenido'] = array(
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
    t('Nodo Contenido'),
    t('Perfil'),
    t('<div class="nodo-contenido-content clearfix span25">
<table class="nodo-contenido-content-encabezado">
<tr>
<td class="nodo-contenido-content-encabezado-autor-imagen span2">
<span class="span2">[field_imagen_perfil]</span>
</td>
<td class="nodo-contenido-content-encabezado-autor-nombre span8">
<span class="verde titulo-uno plus">[name]</span>
</td>
</td>
<td class="nodo-contenido-content-encabezado-detalle normal-plus black">
<div class="nodo-contenido-content-encabezado-detalle-post">Publicado el [created]</div>
<div class="nodo-contenido-content-encabezado-detalle-categoria">[field_categoria]</div>
</td>
<tr>
</table>
<h1 class="nodo-contenido-content-titulo plus verde">[title]</h1>
<div class="nodo-contenido-content-resumen semibold large gris-tres">[field_resumen_del_contenido]</div>
<div class="nodo-contenido-content-body gris-tres medium">[body]</div>
</div>'),
    t('Todo(s)'),
    t('View panes'),
    t('Imágenes Nodo Contenido'),
    t('Archivos Nodo Contenido'),
  );
  $export['contenido'] = $view;

  return $export;
}
