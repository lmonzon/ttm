<?php
/**
 * @file
 * contrato.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function contrato_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contrato';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'contrato';
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

  /* Display: nodo contrato */
  $handler = $view->new_display('panel_pane', 'nodo contrato', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  /* Campo: Contenido: Proyecto */
  $handler->display->display_options['fields']['field_proyecto']['id'] = 'field_proyecto';
  $handler->display->display_options['fields']['field_proyecto']['table'] = 'field_data_field_proyecto';
  $handler->display->display_options['fields']['field_proyecto']['field'] = 'field_proyecto';
  $handler->display->display_options['fields']['field_proyecto']['label'] = '';
  $handler->display->display_options['fields']['field_proyecto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_proyecto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proyecto']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Contenido: Tutor */
  $handler->display->display_options['fields']['field_tutor']['id'] = 'field_tutor';
  $handler->display->display_options['fields']['field_tutor']['table'] = 'field_data_field_tutor';
  $handler->display->display_options['fields']['field_tutor']['field'] = 'field_tutor';
  $handler->display->display_options['fields']['field_tutor']['label'] = '';
  $handler->display->display_options['fields']['field_tutor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tutor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tutor']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Contenido: Horas acordadas */
  $handler->display->display_options['fields']['field_horas_acordadas']['id'] = 'field_horas_acordadas';
  $handler->display->display_options['fields']['field_horas_acordadas']['table'] = 'field_data_field_horas_acordadas';
  $handler->display->display_options['fields']['field_horas_acordadas']['field'] = 'field_horas_acordadas';
  $handler->display->display_options['fields']['field_horas_acordadas']['label'] = '';
  $handler->display->display_options['fields']['field_horas_acordadas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_horas_acordadas']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_horas_acordadas']['alter']['text'] = '[field_horas_acordadas-value] horas';
  $handler->display->display_options['fields']['field_horas_acordadas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_horas_acordadas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Campo: Contenido: Puntos */
  $handler->display->display_options['fields']['field_puntos']['id'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['table'] = 'field_data_field_puntos';
  $handler->display->display_options['fields']['field_puntos']['field'] = 'field_puntos';
  $handler->display->display_options['fields']['field_puntos']['label'] = '';
  $handler->display->display_options['fields']['field_puntos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_puntos']['alter']['text'] = '[field_puntos-value] puntos';
  $handler->display->display_options['fields']['field_puntos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_puntos']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Campo: Contenido: Fecha acordada */
  $handler->display->display_options['fields']['field_fecha_acordada']['id'] = 'field_fecha_acordada';
  $handler->display->display_options['fields']['field_fecha_acordada']['table'] = 'field_data_field_fecha_acordada';
  $handler->display->display_options['fields']['field_fecha_acordada']['field'] = 'field_fecha_acordada';
  $handler->display->display_options['fields']['field_fecha_acordada']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_acordada']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_acordada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_acordada']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenido: Fecha acordada */
  $handler->display->display_options['fields']['field_fecha_acordada_1']['id'] = 'field_fecha_acordada_1';
  $handler->display->display_options['fields']['field_fecha_acordada_1']['table'] = 'field_data_field_fecha_acordada';
  $handler->display->display_options['fields']['field_fecha_acordada_1']['field'] = 'field_fecha_acordada';
  $handler->display->display_options['fields']['field_fecha_acordada_1']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_acordada_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_acordada_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_acordada_1']['settings'] = array(
    'format_type' => 'formatos_fecha_dd_mm_aa',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Campo: Contenido: Videoconferencias */
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['id'] = 'field_fechas_videoconferencia';
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['table'] = 'field_data_field_fechas_videoconferencia';
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['field'] = 'field_fechas_videoconferencia';
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['label'] = '';
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['settings'] = array(
    'format_type' => 'formatos_fecha_dia_mes_aaaa_a_las_hh_mm',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fechas_videoconferencia']['separator'] = '<br>';
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="contrato-tutor"><span class="gris-tres">Contrato </span><span class="verde">[name] - [field_tutor]</span></h2>
<div class="contrato-detalle clearfix medium black">
<div class="contrato-proyecto contrato-item"><span class="bold">Proyecto: </span><span>[field_proyecto]</span></div>
<div class="contrato-horas-acordadas contrato-item"><span class="bold">Horas acordadas: </span><span>[field_horas_acordadas]</span></div>
<div class="contrato-puntos contrato-item"><span class="bold">Puntos: </span><span>[field_puntos]</span></div>
<div class="contrato-fecha-acordada contrato-item"><span class="bold">Fecha de inicio acordada: </span><span>[field_fecha_acordada]</span></div>
<div class="contrato-fecha-acordada contrato-item"><span class="bold">Fecha de fin acordada: </span><span>[field_fecha_acordada_1]</span></div>
<div class="contrato-descripcion contrato-item"><span class="bold">Descripción del servicio: </span><span>[body]</span></div>
<div class="contrato-videoconferencias contrato-item">
<table>
<tbody>
<tr>
<td>
<span class="bold">Videoconferencias acordadas:</span>
</td>
<td>
<span>[field_fechas_videoconferencia]</span>
</td>
</tr>
</tbody>
</table>
</div>
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
  $translatables['contrato'] = array(
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
    t('nodo contrato'),
    t('autor'),
    t('[field_horas_acordadas-value] horas'),
    t('[field_puntos-value] puntos'),
    t('<h2 class="contrato-tutor"><span class="gris-tres">Contrato </span><span class="verde">[name] - [field_tutor]</span></h2>
<div class="contrato-detalle clearfix medium black">
<div class="contrato-proyecto contrato-item"><span class="bold">Proyecto: </span><span>[field_proyecto]</span></div>
<div class="contrato-horas-acordadas contrato-item"><span class="bold">Horas acordadas: </span><span>[field_horas_acordadas]</span></div>
<div class="contrato-puntos contrato-item"><span class="bold">Puntos: </span><span>[field_puntos]</span></div>
<div class="contrato-fecha-acordada contrato-item"><span class="bold">Fecha de inicio acordada: </span><span>[field_fecha_acordada]</span></div>
<div class="contrato-fecha-acordada contrato-item"><span class="bold">Fecha de fin acordada: </span><span>[field_fecha_acordada_1]</span></div>
<div class="contrato-descripcion contrato-item"><span class="bold">Descripción del servicio: </span><span>[body]</span></div>
<div class="contrato-videoconferencias contrato-item">
<table>
<tbody>
<tr>
<td>
<span class="bold">Videoconferencias acordadas:</span>
</td>
<td>
<span>[field_fechas_videoconferencia]</span>
</td>
</tr>
</tbody>
</table>
</div>
</div>'),
    t('Todo(s)'),
    t('View panes'),
  );
  $export['contrato'] = $view;

  return $export;
}
