<?php
/**
 * @file
 * busqueda_proyectos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function busqueda_proyectos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'buscar_proyectos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'buscar_proyectos';
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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Fecha del envío';
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
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Buscar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Opciones avanzadas',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
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
    'field_categoria_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
    'field_habilidades_requeridas_tid' => array(
      'bef_format' => 'default',
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
    'country' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No se han encontrado resultados para tu búsqueda.
Por favor, inténtalo de nuevo ingresando otras opciones para los filtros.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
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
  /* Relación: Perfil: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_lid']['id'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_lid']['field'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['relationship'] = 'profile';
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
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'formatos_fecha_dd_mm_aa';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenido: Fecha de inicio requerida */
  $handler->display->display_options['fields']['field_fecha_inicio']['id'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenido: Fecha de inicio requerida */
  $handler->display->display_options['fields']['field_fecha_inicio_1']['id'] = 'field_fecha_inicio_1';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['table'] = 'field_data_field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['field'] = 'field_fecha_inicio';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_inicio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_inicio_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Location: País */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_pais_lid';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '292';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
<tbody>
<tr class="buscar-proyecto-encabezado-proyecto span21 offset1">
<td>
<div class="buscar-proyectos-titulo titulo-tres">[title]</div>
</td>
</tr>

<tr class="span21 offset1">

<td class="black normal buscar-proyectos-detalle span8">
<div class="buscar-proyectos-detalle-content clearfix">
<div class="buscar-proyectos-item"><span>Categoria: </span><span>[field_categoria]</span></div>
<div class="buscar-proyectos-item">Presupuesto: [field_presupuesto]</div>
<div class="buscar-proyectos-item">Publicación: [created]</div>
<div class="buscar-proyectos-item">Fecha de inicio: [field_fecha_inicio]</div>
<div class="buscar-proyectos-item">Fecha de fin: [field_fecha_inicio_1]</div>
</div>
</td>

<td class="buscar-proyectos-descripcion span13">
<div class="buscar-proyectos-descripcion-content clearfix semibold verde normal">[body]</div>
</td>

</tr>

<tr class="span21 offset1 buscar-proyecto-bottom-proyecto">
<td class="black normal">
<div class="buscar-proyectos-item">[country]</div>
</td>
</tr>

</tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Últimos publicados';
  /* Criterio de ordenación: Contenido: Presupuesto (field_presupuesto) */
  $handler->display->display_options['sorts']['field_presupuesto_value']['id'] = 'field_presupuesto_value';
  $handler->display->display_options['sorts']['field_presupuesto_value']['table'] = 'field_data_field_presupuesto';
  $handler->display->display_options['sorts']['field_presupuesto_value']['field'] = 'field_presupuesto_value';
  $handler->display->display_options['sorts']['field_presupuesto_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_presupuesto_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_presupuesto_value']['expose']['label'] = 'Mejor presupuesto';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Global: Combinar los campos de filtro */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Qué buscas?';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_categoria' => 'field_categoria',
    'country' => 'country',
    'body' => 'body',
  );
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Criterios de filtrado: Contenido: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Categoría';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    8 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'tutorias_categorias';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '1';
  /* Criterios de filtrado: Campo: Habilidades (field_habilidades_requeridas) */
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['id'] = 'field_habilidades_requeridas_tid';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['table'] = 'field_data_field_habilidades_requeridas';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['field'] = 'field_habilidades_requeridas_tid';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['value'] = '';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['expose']['operator_id'] = 'field_habilidades_requeridas_tid_op';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['expose']['label'] = 'Habilidades';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['expose']['operator'] = 'field_habilidades_requeridas_tid_op';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['expose']['identifier'] = 'field_habilidades_requeridas_tid';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['vocabulary'] = 'habilidades';
  /* Criterios de filtrado: Location: País */
  $handler->display->display_options['filters']['country']['id'] = 'country';
  $handler->display->display_options['filters']['country']['table'] = 'location';
  $handler->display->display_options['filters']['country']['field'] = 'country';
  $handler->display->display_options['filters']['country']['relationship'] = 'field_pais_lid';
  $handler->display->display_options['filters']['country']['group'] = 1;
  $handler->display->display_options['filters']['country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
  $handler->display->display_options['filters']['country']['expose']['label'] = 'Localización (país del emprendedor)';
  $handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
  $handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['country']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'busqueda-proyectos-abiertos';
  $translatables['buscar_proyectos'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Seleccione cualquier filtro y haga clic en Aplicar para ver los resultados'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Fecha del envío'),
    t('Página'),
    t('Buscar'),
    t('No se han encontrado resultados para tu búsqueda.
Por favor, inténtalo de nuevo ingresando otras opciones para los filtros.'),
    t('autor'),
    t('Perfil'),
    t('Location from field_pais'),
    t('No se han establecido categorías para este proyecto'),
    t('[field_presupuesto-value] puntos'),
    t('No se ha establecido presupuesto para este proyecto'),
    t('<table>
<tbody>
<tr class="buscar-proyecto-encabezado-proyecto span21 offset1">
<td>
<div class="buscar-proyectos-titulo titulo-tres">[title]</div>
</td>
</tr>

<tr class="span21 offset1">

<td class="black normal buscar-proyectos-detalle span8">
<div class="buscar-proyectos-detalle-content clearfix">
<div class="buscar-proyectos-item"><span>Categoria: </span><span>[field_categoria]</span></div>
<div class="buscar-proyectos-item">Presupuesto: [field_presupuesto]</div>
<div class="buscar-proyectos-item">Publicación: [created]</div>
<div class="buscar-proyectos-item">Fecha de inicio: [field_fecha_inicio]</div>
<div class="buscar-proyectos-item">Fecha de fin: [field_fecha_inicio_1]</div>
</div>
</td>

<td class="buscar-proyectos-descripcion span13">
<div class="buscar-proyectos-descripcion-content clearfix semibold verde normal">[body]</div>
</td>

</tr>

<tr class="span21 offset1 buscar-proyecto-bottom-proyecto">
<td class="black normal">
<div class="buscar-proyectos-item">[country]</div>
</td>
</tr>

</tbody>
</table>'),
    t('Últimos publicados'),
    t('Mejor presupuesto'),
    t('Qué buscas?'),
    t('Categoría'),
    t('Habilidades'),
    t('Localización (país del emprendedor)'),
  );
  $export['buscar_proyectos'] = $view;

  return $export;
}
