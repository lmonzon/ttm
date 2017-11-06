<?php
/**
 * @file
 * proyecto.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function proyecto_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Proyecto Agregar',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'proyecto' => 'proyecto',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/add/proyecto',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_row';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c97dbd50-af07-415a-a7d5-1d9b23ea2e19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c69e2dcf-35a2-46a8-b3ba-ea2c9d918483';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-formulario_proyecto_encabezado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'formulario-proyecto-encabezado',
      'css_class' => 'span46 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c69e2dcf-35a2-46a8-b3ba-ea2c9d918483';
    $display->content['new-c69e2dcf-35a2-46a8-b3ba-ea2c9d918483'] = $pane;
    $display->panels['row'][0] = 'new-c69e2dcf-35a2-46a8-b3ba-ea2c9d918483';
    $pane = new stdClass();
    $pane->pid = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
    $pane->panel = 'row';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'formulario-proyecto',
      'css_class' => 'formulario span20 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
    $display->content['new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1'] = $pane;
    $display->panels['row'][1] = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Proyecto Edición',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'proyecto' => 'proyecto',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_row';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c97dbd50-af07-415a-a7d5-1d9b23ea2e19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
    $pane->panel = 'row';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '<div class="verde titulo-dos">Editar "%title"</div>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'formulario-proyecto',
      'css_class' => 'formulario span20 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
    $display->content['new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1'] = $pane;
    $display->panels['row'][0] = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Fallback',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '403',
    'destination' => '<front>',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $export['node_view_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Proyecto',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Usuario desde Nodo (en node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'proyecto' => 'proyecto',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'permisos de usuarios',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_2_cols_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'left' => NULL,
      'main' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3af89831-a4d8-4ec9-9085-79e7be46cc57';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f239b18d-ac2b-4bfa-8133-8a93c5444458';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'proyecto_nodo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'info-proyecto',
      'css_class' => 'bg-gris-uno span34',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f239b18d-ac2b-4bfa-8133-8a93c5444458';
    $display->content['new-f239b18d-ac2b-4bfa-8133-8a93c5444458'] = $pane;
    $display->panels['main'][0] = 'new-f239b18d-ac2b-4bfa-8133-8a93c5444458';
    $pane = new stdClass();
    $pane->pid = 'new-b05e8379-8f5d-4841-b1e2-f551f78ecbef';
    $pane->panel = 'main';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:proyecto:field_estado_del_proyecto',
          'settings' => array(
            'field_estado_del_proyecto' => array(
              'und' => array(
                0 => array(
                  'value' => '2',
                ),
              ),
            ),
            'field_estado_del_proyecto_value' => '2',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'flag_is_flagged:node',
          'settings' => array(
            'flag_name' => 'conversaciones',
            'flag_user' => 'user',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    );
    $pane->configuration = array(
      'flag_name' => 'me_interesa',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'boton-me-interesa',
      'css_class' => 'span34 botones-proyecto',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b05e8379-8f5d-4841-b1e2-f551f78ecbef';
    $display->content['new-b05e8379-8f5d-4841-b1e2-f551f78ecbef'] = $pane;
    $display->panels['main'][1] = 'new-b05e8379-8f5d-4841-b1e2-f551f78ecbef';
    $pane = new stdClass();
    $pane->pid = 'new-45c3f96e-e657-4b50-a3cb-67dc433945bf';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'tutoriame_contratar-ttm_contratar-contratar_para';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'boton-contratar-nodo',
      'css_class' => 'span34 botones-proyecto',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '45c3f96e-e657-4b50-a3cb-67dc433945bf';
    $display->content['new-45c3f96e-e657-4b50-a3cb-67dc433945bf'] = $pane;
    $display->panels['main'][2] = 'new-45c3f96e-e657-4b50-a3cb-67dc433945bf';
    $pane = new stdClass();
    $pane->pid = 'new-75c4c136-4b33-445b-954b-fda9b91e8f47';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'videoconferencia-videoconferencia-enlace';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'videoconferencia_disponible',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'boton-videoconferencias',
      'css_class' => 'span34 botones-proyecto',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '75c4c136-4b33-445b-954b-fda9b91e8f47';
    $display->content['new-75c4c136-4b33-445b-954b-fda9b91e8f47'] = $pane;
    $display->panels['main'][3] = 'new-75c4c136-4b33-445b-954b-fda9b91e8f47';
    $pane = new stdClass();
    $pane->pid = 'new-1f9e2651-8c04-4fd9-a424-c75158d7dc88';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'tutoriame_contratar-ttm_contratar-ver_contrato';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'boton-contratar',
      'css_class' => 'span34 botones-proyecto',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1f9e2651-8c04-4fd9-a424-c75158d7dc88';
    $display->content['new-1f9e2651-8c04-4fd9-a424-c75158d7dc88'] = $pane;
    $display->panels['main'][4] = 'new-1f9e2651-8c04-4fd9-a424-c75158d7dc88';
    $pane = new stdClass();
    $pane->pid = 'new-a36c65ab-a2c2-4148-846b-cd98d39a1c20';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'tutoriame_calificar-ttm_calificar-calificar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'boton-calificar',
      'css_class' => 'span34 botones-proyecto',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a36c65ab-a2c2-4148-846b-cd98d39a1c20';
    $display->content['new-a36c65ab-a2c2-4148-846b-cd98d39a1c20'] = $pane;
    $display->panels['main'][5] = 'new-a36c65ab-a2c2-4148-846b-cd98d39a1c20';
    $pane = new stdClass();
    $pane->pid = 'new-8416c3d9-d2ea-4ee5-b05e-534aa5ef1e6d';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'calificacion-para-emprendedor',
      'css_class' => 'span34 calificacion-proyecto',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '8416c3d9-d2ea-4ee5-b05e-534aa5ef1e6d';
    $display->content['new-8416c3d9-d2ea-4ee5-b05e-534aa5ef1e6d'] = $pane;
    $display->panels['main'][6] = 'new-8416c3d9-d2ea-4ee5-b05e-534aa5ef1e6d';
    $pane = new stdClass();
    $pane->pid = 'new-d9797db8-9196-4bac-9bcb-82a69f223c99';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'calificacion-para-tutor',
      'css_class' => 'span34 calificacion-proyecto',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd9797db8-9196-4bac-9bcb-82a69f223c99';
    $display->content['new-d9797db8-9196-4bac-9bcb-82a69f223c99'] = $pane;
    $display->panels['main'][7] = 'new-d9797db8-9196-4bac-9bcb-82a69f223c99';
    $pane = new stdClass();
    $pane->pid = 'new-846bb31d-f273-4a6b-9efc-c7fb0a69ed4d';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'calificacion-para-tutor-privada',
      'css_class' => 'span34 calificacion-proyecto',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '846bb31d-f273-4a6b-9efc-c7fb0a69ed4d';
    $display->content['new-846bb31d-f273-4a6b-9efc-c7fb0a69ed4d'] = $pane;
    $display->panels['main'][8] = 'new-846bb31d-f273-4a6b-9efc-c7fb0a69ed4d';
    $pane = new stdClass();
    $pane->pid = 'new-3967c90c-91c9-4145-b020-bc2c0af23b46';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyecto-autor',
      'css_class' => 'bg-gris-uno span11',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3967c90c-91c9-4145-b020-bc2c0af23b46';
    $display->content['new-3967c90c-91c9-4145-b020-bc2c0af23b46'] = $pane;
    $display->panels['right'][0] = 'new-3967c90c-91c9-4145-b020-bc2c0af23b46';
    $pane = new stdClass();
    $pane->pid = 'new-5ecbea71-8309-496d-96ef-699a1f8a0fdc';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'nodo_proyecto_autor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'relationship_entity_from_schema:uid-node-user_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyecto-autor-privado',
      'css_class' => 'bg-gris-uno span11',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5ecbea71-8309-496d-96ef-699a1f8a0fdc';
    $display->content['new-5ecbea71-8309-496d-96ef-699a1f8a0fdc'] = $pane;
    $display->panels['right'][1] = 'new-5ecbea71-8309-496d-96ef-699a1f8a0fdc';
    $pane = new stdClass();
    $pane->pid = 'new-f340e786-3f25-4a57-9cb7-c85dddd18c20';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'nodo_proyecto_categorias';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-proyecto-categorias',
      'css_class' => 'span11 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f340e786-3f25-4a57-9cb7-c85dddd18c20';
    $display->content['new-f340e786-3f25-4a57-9cb7-c85dddd18c20'] = $pane;
    $display->panels['right'][2] = 'new-f340e786-3f25-4a57-9cb7-c85dddd18c20';
    $pane = new stdClass();
    $pane->pid = 'new-3f94d871-7ba0-47e2-a7ea-ba2662972b6d';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'relationship_entity_from_schema:uid-node-user_1',
            1 => 'logged-in-user',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-proyecto-buscar-tutores',
      'css_class' => 'span11 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3f94d871-7ba0-47e2-a7ea-ba2662972b6d';
    $display->content['new-3f94d871-7ba0-47e2-a7ea-ba2662972b6d'] = $pane;
    $display->panels['right'][3] = 'new-3f94d871-7ba0-47e2-a7ea-ba2662972b6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function proyecto_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'clone_proyecto';
  $page->task = 'page';
  $page->admin_title = 'Clone proyecto';
  $page->admin_description = 'Al clonar un proyecto, queremos tener la misma vista de edicion';
  $page->path = 'node/%node/clone/confirm';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Nodo: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_clone_proyecto_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'clone_proyecto';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node edit form from node',
        'keyword' => 'node_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_row';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '494ae911-452c-4a9b-8394-e3a9df086a39';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f1394427-ec88-4c0a-81a5-28985ac95aca';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-formulario_proyecto_encabezado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f1394427-ec88-4c0a-81a5-28985ac95aca';
    $display->content['new-f1394427-ec88-4c0a-81a5-28985ac95aca'] = $pane;
    $display->panels['row'][0] = 'new-f1394427-ec88-4c0a-81a5-28985ac95aca';
    $pane = new stdClass();
    $pane->pid = 'new-8b594fdf-f317-46bc-a92a-c1b0db2d5574';
    $pane->panel = 'row';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Formulario clonación',
      'title' => '',
      'body' => '<?php
$node = node_load("%node:nid");
module_load_include(\'inc\', \'clone\', \'clone.pages\');
$clone = clone_node_prepopulate($node);
print drupal_render($clone);
?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'formulario-proyecto',
      'css_class' => 'formulario span20 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8b594fdf-f317-46bc-a92a-c1b0db2d5574';
    $display->content['new-8b594fdf-f317-46bc-a92a-c1b0db2d5574'] = $pane;
    $display->panels['row'][1] = 'new-8b594fdf-f317-46bc-a92a-c1b0db2d5574';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f1394427-ec88-4c0a-81a5-28985ac95aca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['clone_proyecto'] = $page;

  return $pages;

}
