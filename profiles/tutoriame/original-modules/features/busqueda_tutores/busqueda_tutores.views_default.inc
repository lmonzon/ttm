<?php
/**
 * @file
 * busqueda_tutores.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function busqueda_tutores_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'buscar_tutores';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'buscar_tutores';
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
  /* Criterio de ordenación: Usuario: Fecha de creación */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Página */
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '<strong class="verde">Ingresa los criterios de tu búsqueda y has clic en Buscar.</strong>';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamiento si no hay resultados: Global: Área de texto */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No se han encontrado resultados para tu búsqueda.
Por favor, inténtalo de nuevo ingresando otras opciones para los filtros.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Main */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Main';
  $handler->display->display_options['relationships']['profile']['label'] = 'Perfil main';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relación: Tutor */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['ui_name'] = 'Tutor';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Perfil tutor';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'tutor' => 'tutor',
  );
  /* Relación: Perfil: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_lid']['id'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_lid']['field'] = 'field_pais_lid';
  $handler->display->display_options['relationships']['field_pais_lid']['relationship'] = 'profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
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
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
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
    'image_style' => 'perfil_93x94',
    'image_link' => 'content',
  );
  /* Campo: Proyectos finalizados */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Proyectos finalizados';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print busqueda_tutores_get_proyectos_finalizados($row->uid); ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Campo: Location: País */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['relationship'] = 'field_pais_lid';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Campo: Campo: Categoría */
  $handler->display->display_options['fields']['field_categoria']['id'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['fields']['field_categoria']['field'] = 'field_categoria';
  $handler->display->display_options['fields']['field_categoria']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categoria']['empty'] = 'No se han establecido categorías para este perfil';
  $handler->display->display_options['fields']['field_categoria']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_habilidades_requeridas']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['label'] = '';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_habilidades_requeridas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_habilidades_requeridas']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_habilidades_requeridas']['delta_offset'] = '0';
  /* Campo: Perfil: Tarifa */
  $handler->display->display_options['fields']['field_tarifa']['id'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['field'] = 'field_tarifa';
  $handler->display->display_options['fields']['field_tarifa']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_tarifa']['label'] = '';
  $handler->display->display_options['fields']['field_tarifa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['alter']['text'] = '[field_tarifa-value] puntos';
  $handler->display->display_options['fields']['field_tarifa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tarifa']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tarifa']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
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
<span class="buscar-tutores-detalle-tutor-encabezado-nick medium rojo bold span8">[name]</span><span id="calificacion" class="buscar-tutores-detalle-tutor-encabezado-calificacion rojo bold span7 offset1">
<span class="span3">calificación </span><span class="span4">[field_calificacion_general_tutor]</span>
</span>
</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info black normal span16 clearfix">
<div class="buscar-tutores-detalle-tutor-encabezado-info-finalizados span16"><span class="span5">Proyectos finalizados:</span><span class="span10">[php]</span></div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-tarifa span16">Tarifa horaria: [field_tarifa]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-pais span16">[country]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-categoria span16">Categoría: [field_categoria]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-habilidades span16">Habilidades: [field_habilidades_requeridas]</div>
</div>
</td>
</tr>
</tbody>
</table>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Location: Provincia */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_pais_lid';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Campo: Perfil: Resumen del servicio */
  $handler->display->display_options['fields']['field_resumen_del_servicio']['id'] = 'field_resumen_del_servicio';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['table'] = 'field_data_field_resumen_del_servicio';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['field'] = 'field_resumen_del_servicio';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['label'] = '';
  $handler->display->display_options['fields']['field_resumen_del_servicio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resumen_del_servicio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resumen_del_servicio']['type'] = 'text_plain';
  /* Campo: Perfil: Formación */
  $handler->display->display_options['fields']['field_formacion']['id'] = 'field_formacion';
  $handler->display->display_options['fields']['field_formacion']['table'] = 'field_data_field_formacion';
  $handler->display->display_options['fields']['field_formacion']['field'] = 'field_formacion';
  $handler->display->display_options['fields']['field_formacion']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_formacion']['label'] = '';
  $handler->display->display_options['fields']['field_formacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_formacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_formacion']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_formacion']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_formacion']['delta_offset'] = '0';
  /* Campo: Perfil: Experiencia laboral */
  $handler->display->display_options['fields']['field_experiencia_laboral']['id'] = 'field_experiencia_laboral';
  $handler->display->display_options['fields']['field_experiencia_laboral']['table'] = 'field_data_field_experiencia_laboral';
  $handler->display->display_options['fields']['field_experiencia_laboral']['field'] = 'field_experiencia_laboral';
  $handler->display->display_options['fields']['field_experiencia_laboral']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_experiencia_laboral']['label'] = '';
  $handler->display->display_options['fields']['field_experiencia_laboral']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_experiencia_laboral']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experiencia_laboral']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_experiencia_laboral']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_experiencia_laboral']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Perfil: Tarifa (field_tarifa) */
  $handler->display->display_options['sorts']['field_tarifa_value']['id'] = 'field_tarifa_value';
  $handler->display->display_options['sorts']['field_tarifa_value']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['sorts']['field_tarifa_value']['field'] = 'field_tarifa_value';
  $handler->display->display_options['sorts']['field_tarifa_value']['relationship'] = 'profile_1';
  $handler->display->display_options['sorts']['field_tarifa_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_tarifa_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_tarifa_value']['expose']['label'] = 'Tarifa más alta';
  /* Criterio de ordenación: Perfil: Tarifa (field_tarifa) */
  $handler->display->display_options['sorts']['field_tarifa_value_1']['id'] = 'field_tarifa_value_1';
  $handler->display->display_options['sorts']['field_tarifa_value_1']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['sorts']['field_tarifa_value_1']['field'] = 'field_tarifa_value';
  $handler->display->display_options['sorts']['field_tarifa_value_1']['relationship'] = 'profile_1';
  $handler->display->display_options['sorts']['field_tarifa_value_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_tarifa_value_1']['expose']['label'] = 'Tarifa más baja';
  /* Criterio de ordenación: Campo: Calificacion general (field_calificacion_general_tutor:rating) */
  $handler->display->display_options['sorts']['field_calificacion_general_tutor_rating']['id'] = 'field_calificacion_general_tutor_rating';
  $handler->display->display_options['sorts']['field_calificacion_general_tutor_rating']['table'] = 'field_data_field_calificacion_general_tutor';
  $handler->display->display_options['sorts']['field_calificacion_general_tutor_rating']['field'] = 'field_calificacion_general_tutor_rating';
  $handler->display->display_options['sorts']['field_calificacion_general_tutor_rating']['relationship'] = 'profile_1';
  $handler->display->display_options['sorts']['field_calificacion_general_tutor_rating']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_calificacion_general_tutor_rating']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_calificacion_general_tutor_rating']['expose']['label'] = 'Mejor calificados';
  /* Criterio de ordenación: Proyectos finalizados */
  $handler->display->display_options['sorts']['php']['id'] = 'php';
  $handler->display->display_options['sorts']['php']['table'] = 'views';
  $handler->display->display_options['sorts']['php']['field'] = 'php';
  $handler->display->display_options['sorts']['php']['ui_name'] = 'Proyectos finalizados';
  $handler->display->display_options['sorts']['php']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['php']['expose']['label'] = 'Proyectos finalizados';
  $handler->display->display_options['sorts']['php']['use_php_setup'] = 0;
  $handler->display->display_options['sorts']['php']['php_sort'] = 'return busqueda_tutores_comparar_proyectos_finalizados($row1->uid, $row2->uid);';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['rid']['group'] = 1;
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
    8 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
    'field_habilidades_requeridas' => 'field_habilidades_requeridas',
    'province' => 'province',
    'field_resumen_del_servicio' => 'field_resumen_del_servicio',
    'field_formacion' => 'field_formacion',
    'field_experiencia_laboral' => 'field_experiencia_laboral',
  );
  /* Criterios de filtrado: Taxonomy Entity Index: Has taxonomy terms on Perfil (with depth and indexed in taxonomy_entity_index; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['id'] = 'shs_taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['table'] = 'profile';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['field'] = 'shs_taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['relationship'] = 'profile_1';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'shs_taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['expose']['label'] = 'Categoría';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['expose']['operator'] = 'shs_taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['vocabulary'] = 'tutorias_categorias';
  $handler->display->display_options['filters']['shs_taxonomy_entity_index_tid_depth']['depth'] = '1';
  /* Criterios de filtrado: Campo: Habilidades (field_habilidades_requeridas) */
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['id'] = 'field_habilidades_requeridas_tid';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['table'] = 'field_data_field_habilidades_requeridas';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['field'] = 'field_habilidades_requeridas_tid';
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['relationship'] = 'profile_1';
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
  $handler->display->display_options['filters']['field_habilidades_requeridas_tid']['reduce_duplicates'] = TRUE;
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
  $handler->display->display_options['filters']['country']['expose']['label'] = 'País';
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
  /* Criterios de filtrado: Perfil: Tarifa (field_tarifa) */
  $handler->display->display_options['filters']['field_tarifa_value']['id'] = 'field_tarifa_value';
  $handler->display->display_options['filters']['field_tarifa_value']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['filters']['field_tarifa_value']['field'] = 'field_tarifa_value';
  $handler->display->display_options['filters']['field_tarifa_value']['relationship'] = 'profile_1';
  $handler->display->display_options['filters']['field_tarifa_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_tarifa_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tarifa_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tarifa_value']['expose']['operator_id'] = 'field_tarifa_value_op';
  $handler->display->display_options['filters']['field_tarifa_value']['expose']['operator'] = 'field_tarifa_value_op';
  $handler->display->display_options['filters']['field_tarifa_value']['expose']['identifier'] = 'tarifa_desde';
  $handler->display->display_options['filters']['field_tarifa_value']['expose']['remember_roles'] = array(
    2 => '2',
    8 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Criterios de filtrado: Perfil: Tarifa (field_tarifa) */
  $handler->display->display_options['filters']['field_tarifa_value_1']['id'] = 'field_tarifa_value_1';
  $handler->display->display_options['filters']['field_tarifa_value_1']['table'] = 'field_data_field_tarifa';
  $handler->display->display_options['filters']['field_tarifa_value_1']['field'] = 'field_tarifa_value';
  $handler->display->display_options['filters']['field_tarifa_value_1']['relationship'] = 'profile_1';
  $handler->display->display_options['filters']['field_tarifa_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_tarifa_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_tarifa_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tarifa_value_1']['expose']['operator_id'] = 'field_tarifa_value_1_op';
  $handler->display->display_options['filters']['field_tarifa_value_1']['expose']['operator'] = 'field_tarifa_value_1_op';
  $handler->display->display_options['filters']['field_tarifa_value_1']['expose']['identifier'] = 'tarifa_hasta';
  $handler->display->display_options['filters']['field_tarifa_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    8 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_tarifa_value_1']['group_info']['label'] = 'Tarifa (field_tarifa)';
  $handler->display->display_options['filters']['field_tarifa_value_1']['group_info']['identifier'] = 'field_tarifa_value_1';
  $handler->display->display_options['filters']['field_tarifa_value_1']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_tarifa_value_1']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Criterios de filtrado: Campo: Calificacion general (field_calificacion_general_tutor:rating) */
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['id'] = 'field_calificacion_general_tutor_rating';
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['table'] = 'field_data_field_calificacion_general_tutor';
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['field'] = 'field_calificacion_general_tutor_rating';
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['relationship'] = 'profile_1';
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['group'] = 1;
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['expose']['operator_id'] = 'field_calificacion_general_tutor_rating_op';
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['expose']['label'] = 'Calificación';
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['expose']['operator'] = 'field_calificacion_general_tutor_rating_op';
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['expose']['identifier'] = 'calificacion';
  $handler->display->display_options['filters']['field_calificacion_general_tutor_rating']['expose']['remember_roles'] = array(
    2 => '2',
    8 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['path'] = 'busqueda-tutores-activos';

  /* Display: Bloque */
  $handler = $view->new_display('block', 'Bloque', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'Perfil tutor';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tutor' => 'tutor',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Campo: Categoría (field_categoria) */
  $handler->display->display_options['arguments']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['arguments']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['arguments']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['arguments']['field_categoria_tid']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_categoria_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_categoria_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_categoria_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_categoria_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_categoria_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_categoria_tid']['summary_options']['items_per_page'] = '25';
  $translatables['buscar_tutores'] = array(
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
    t('Página'),
    t('Buscar'),
    t('<strong class="verde">Ingresa los criterios de tu búsqueda y has clic en Buscar.</strong>'),
    t('No se han encontrado resultados para tu búsqueda.
Por favor, inténtalo de nuevo ingresando otras opciones para los filtros.'),
    t('Perfil main'),
    t('Perfil tutor'),
    t('Location from field_pais'),
    t('No se han establecido categorías para este perfil'),
    t('[field_tarifa-value] puntos'),
    t('<table class="span21 offset1">
<tbody>
<tr>
<td class="buscar-tutores-imagen span4">[field_imagen_perfil]</td>
<td class="buscar-tutores-detalle-tutor span16">
<div class="buscar-tutores-detalle-tutor-encabezado clearfix">
<span class="buscar-tutores-detalle-tutor-encabezado-nick medium rojo bold span8">[name]</span><span id="calificacion" class="buscar-tutores-detalle-tutor-encabezado-calificacion rojo bold span7 offset1">
<span class="span3">calificación </span><span class="span4">[field_calificacion_general_tutor]</span>
</span>
</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info black normal span16 clearfix">
<div class="buscar-tutores-detalle-tutor-encabezado-info-finalizados span16"><span class="span5">Proyectos finalizados:</span><span class="span10">[php]</span></div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-tarifa span16">Tarifa horaria: [field_tarifa]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-pais span16">[country]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-categoria span16">Categoría: [field_categoria]</div>
<div class="buscar-tutores-detalle-tutor-encabezado-info-habilidades span16">Habilidades: [field_habilidades_requeridas]</div>
</div>
</td>
</tr>
</tbody>
</table>
'),
    t('Tarifa más alta'),
    t('Tarifa más baja'),
    t('Mejor calificados'),
    t('Proyectos finalizados'),
    t('Qué buscas?'),
    t('Categoría'),
    t('Habilidades'),
    t('País'),
    t('Tarifa (field_tarifa)'),
    t('Calificación'),
    t('Bloque'),
    t('Todo(s)'),
  );
  $export['buscar_tutores'] = $view;

  $view = new view();
  $view->name = 'tutores_proyectos_finalizados';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'tutores_proyectos_finalizados';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['id'] = 'reverse_field_tutor_node';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_tutor_node']['field'] = 'reverse_field_tutor_node';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;

  /* Display: proyectos finalizados tutor */
  $handler = $view->new_display('panel_pane', 'proyectos finalizados tutor', 'panel_pane_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterios de filtrado: Workflow history: New state */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_history';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['relationship'] = 'field_proyecto_target_id';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['sid_1']['expose']['workflow_reduce_wid'] = FALSE;

  /* Display: proyectos finalizados emprendedor */
  $handler = $view->new_display('panel_pane', 'proyectos finalizados emprendedor', 'panel_pane_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['empty'] = '0';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
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
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proyecto' => 'proyecto',
  );
  /* Criterios de filtrado: Workflow current: Estado actual */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
  );
  $translatables['tutores_proyectos_finalizados'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Contenido referencing Usuario from field_tutor'),
    t('proyectos finalizados tutor'),
    t('Contenido entidad referenciada de field_proyecto'),
    t('Todo(s)'),
    t('View panes'),
    t('proyectos finalizados emprendedor'),
    t('nodos'),
  );
  $export['tutores_proyectos_finalizados'] = $view;

  return $export;
}
