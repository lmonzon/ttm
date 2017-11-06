<?php
/**
 * @file
 * usuarios.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function usuarios_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit_panel_context';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Emprendedor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Usuario',
        'keyword' => 'user_3',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      1 => array(
        'identifier' => 'Perfil de Usuario (en profile.uid)',
        'keyword' => 'user_2',
        'name' => 'entity_from_schema:uid-user-profile2',
        'context' => 'argument_user_edit_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'User category edit form from user',
        'keyword' => 'user_category_form',
        'name' => 'user_category_edit_form_from_user',
        'context' => 'argument_user_edit_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 6,
            ),
          ),
          'context' => 'argument_user_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_row_span20';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f707a9a7-5fca-4ed0-8c80-dccd74433489';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0976e270-4ae7-4285-97dc-0a75f30020a4';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0976e270-4ae7-4285-97dc-0a75f30020a4';
    $display->content['new-0976e270-4ae7-4285-97dc-0a75f30020a4'] = $pane;
    $display->panels['row'][0] = 'new-0976e270-4ae7-4285-97dc-0a75f30020a4';
    $pane = new stdClass();
    $pane->pid = 'new-f63e4161-7207-4f8e-a4ad-e9b380557fb9';
    $pane->panel = 'row';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-edit-form',
      'css_class' => 'formulario span20 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f63e4161-7207-4f8e-a4ad-e9b380557fb9';
    $display->content['new-f63e4161-7207-4f8e-a4ad-e9b380557fb9'] = $pane;
    $display->panels['row'][1] = 'new-f63e4161-7207-4f8e-a4ad-e9b380557fb9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f63e4161-7207-4f8e-a4ad-e9b380557fb9';
  $handler->conf['display'] = $display;
  $export['user_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit_panel_context_2';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Tutor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Perfil de Usuario (en profile.uid)',
        'keyword' => 'user_2',
        'name' => 'entity_from_schema:uid-user-profile2',
        'context' => 'argument_user_edit_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'User category edit form from user',
        'keyword' => 'user_category_form',
        'name' => 'user_category_edit_form_from_user',
        'context' => 'argument_user_edit_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 5,
            ),
          ),
          'context' => 'argument_user_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_row_span20';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f707a9a7-5fca-4ed0-8c80-dccd74433489';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3dcb6df-b33c-40c6-99f7-351a9000ed83';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3dcb6df-b33c-40c6-99f7-351a9000ed83';
    $display->content['new-d3dcb6df-b33c-40c6-99f7-351a9000ed83'] = $pane;
    $display->panels['row'][0] = 'new-d3dcb6df-b33c-40c6-99f7-351a9000ed83';
    $pane = new stdClass();
    $pane->pid = 'new-f63e4161-7207-4f8e-a4ad-e9b380557fb9';
    $pane->panel = 'row';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-edit-form',
      'css_class' => 'formulario span20 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f63e4161-7207-4f8e-a4ad-e9b380557fb9';
    $display->content['new-f63e4161-7207-4f8e-a4ad-e9b380557fb9'] = $pane;
    $display->panels['row'][1] = 'new-f63e4161-7207-4f8e-a4ad-e9b380557fb9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f63e4161-7207-4f8e-a4ad-e9b380557fb9';
  $handler->conf['display'] = $display;
  $export['user_edit_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_http_response';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Acceso Denegado',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '403',
    'destination' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 7,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 8,
              1 => 7,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['user_view_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Privado Emprendedor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Usuario',
        'keyword' => 'user_2',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_3_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
      'left' => NULL,
      'main' => NULL,
      'right' => NULL,
      'header' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd77bfd9d-b6ef-4e32-a9f6-3f92c777a763';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2e2ac80-774a-4d05-a40c-85441cfc8375';
    $pane->panel = 'headerrow';
    $pane->type = 'block';
    $pane->subtype = 'pcp-pcp_profile2_emprendedor';
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
      'css_id' => 'perfil-completado',
      'css_class' => 'privado-emprendedor span6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2e2ac80-774a-4d05-a40c-85441cfc8375';
    $display->content['new-e2e2ac80-774a-4d05-a40c-85441cfc8375'] = $pane;
    $display->panels['headerrow'][0] = 'new-e2e2ac80-774a-4d05-a40c-85441cfc8375';
    $pane = new stdClass();
    $pane->pid = 'new-5c3a1155-c681-41ce-83ae-210380c77df5';
    $pane->panel = 'headerrow';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-enlace-edit',
      'css_class' => 'privado-emprendedor span6 offset1 uppercase black normal-min bold',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c3a1155-c681-41ce-83ae-210380c77df5';
    $display->content['new-5c3a1155-c681-41ce-83ae-210380c77df5'] = $pane;
    $display->panels['headerrow'][1] = 'new-5c3a1155-c681-41ce-83ae-210380c77df5';
    $pane = new stdClass();
    $pane->pid = 'new-b02cf6d0-9624-4086-9e41-d68b4a50fc48';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'info-usuario',
      'css_class' => 'privado-emprendedor span13',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b02cf6d0-9624-4086-9e41-d68b4a50fc48';
    $display->content['new-b02cf6d0-9624-4086-9e41-d68b4a50fc48'] = $pane;
    $display->panels['left'][0] = 'new-b02cf6d0-9624-4086-9e41-d68b4a50fc48';
    $pane = new stdClass();
    $pane->pid = 'new-767cb1de-da03-46eb-87c0-d98e96e7e684';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'bloque_institucion-bloque_institucion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h5 class="black uppercase">Participa en:</h5>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-institucion',
      'css_class' => 'span13',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '767cb1de-da03-46eb-87c0-d98e96e7e684';
    $display->content['new-767cb1de-da03-46eb-87c0-d98e96e7e684'] = $pane;
    $display->panels['left'][1] = 'new-767cb1de-da03-46eb-87c0-d98e96e7e684';
    $pane = new stdClass();
    $pane->pid = 'new-a73cca25-2db0-4e60-90d3-2da6b4ae1519';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-usuario-emprendedor';
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
      'css_id' => 'menu-de-usuario',
      'css_class' => 'span13',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a73cca25-2db0-4e60-90d3-2da6b4ae1519';
    $display->content['new-a73cca25-2db0-4e60-90d3-2da6b4ae1519'] = $pane;
    $display->panels['left'][2] = 'new-a73cca25-2db0-4e60-90d3-2da6b4ae1519';
    $pane = new stdClass();
    $pane->pid = 'new-5ba1f96e-e6e4-4947-bf01-4aaac24b9921';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-proyectos-abiertos',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ba1f96e-e6e4-4947-bf01-4aaac24b9921';
    $display->content['new-5ba1f96e-e6e4-4947-bf01-4aaac24b9921'] = $pane;
    $display->panels['main'][0] = 'new-5ba1f96e-e6e4-4947-bf01-4aaac24b9921';
    $pane = new stdClass();
    $pane->pid = 'new-e7cfae86-6407-4354-b8a7-b0e252fdf4ee';
    $pane->panel = 'main';
    $pane->type = 'usuarios_institucion';
    $pane->subtype = 'usuarios_institucion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'cantidad' => '999',
      'image_style_usuarios' => '26x27',
      'image_style_logo' => 'width100',
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-usuarios-institucion',
      'css_class' => 'span11 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e7cfae86-6407-4354-b8a7-b0e252fdf4ee';
    $display->content['new-e7cfae86-6407-4354-b8a7-b0e252fdf4ee'] = $pane;
    $display->panels['main'][1] = 'new-e7cfae86-6407-4354-b8a7-b0e252fdf4ee';
    $pane = new stdClass();
    $pane->pid = 'new-abb286ce-ea15-4a46-8365-3206af267083';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_16';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-mis-tutores',
      'css_class' => 'span11 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'abb286ce-ea15-4a46-8365-3206af267083';
    $display->content['new-abb286ce-ea15-4a46-8365-3206af267083'] = $pane;
    $display->panels['main'][2] = 'new-abb286ce-ea15-4a46-8365-3206af267083';
    $pane = new stdClass();
    $pane->pid = 'new-179eed9d-8441-412f-86f1-6a3cc9752d12';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'privado_emprendedor_estadisticas';
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
      'css_id' => 'usuario-estadisticas',
      'css_class' => 'span8 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '179eed9d-8441-412f-86f1-6a3cc9752d12';
    $display->content['new-179eed9d-8441-412f-86f1-6a3cc9752d12'] = $pane;
    $display->panels['right'][0] = 'new-179eed9d-8441-412f-86f1-6a3cc9752d12';
    $pane = new stdClass();
    $pane->pid = 'new-acbfbba1-a74b-4030-9efa-71ee463f002d';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'boton_comprar_puntos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-boton-comprar-puntos',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acbfbba1-a74b-4030-9efa-71ee463f002d';
    $display->content['new-acbfbba1-a74b-4030-9efa-71ee463f002d'] = $pane;
    $display->panels['right'][1] = 'new-acbfbba1-a74b-4030-9efa-71ee463f002d';
    $pane = new stdClass();
    $pane->pid = 'new-3d4ab254-43a6-4479-9d11-52ee8209f9bb';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'calendario';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '<h5 class="bg-rojo white uppercase">Eventos tutoriame</h5>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'calendario-eventos',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3d4ab254-43a6-4479-9d11-52ee8209f9bb';
    $display->content['new-3d4ab254-43a6-4479-9d11-52ee8209f9bb'] = $pane;
    $display->panels['right'][2] = 'new-3d4ab254-43a6-4479-9d11-52ee8209f9bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Público Emprendedor',
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
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '0',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_2_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'main' => NULL,
      'right' => NULL,
      'header' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:name';
  $display->uuid = 'fd86f432-fde3-4d03-82f1-de78b9339cc3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e292c2de-f063-4036-b249-3a3fec0eaf99';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'info-usuario',
      'css_class' => 'publico-emprendedor span13',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e292c2de-f063-4036-b249-3a3fec0eaf99';
    $display->content['new-e292c2de-f063-4036-b249-3a3fec0eaf99'] = $pane;
    $display->panels['left'][0] = 'new-e292c2de-f063-4036-b249-3a3fec0eaf99';
    $pane = new stdClass();
    $pane->pid = 'new-25c072e0-dda7-46ce-8c93-41bbe98936d0';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publico_emprendedor_actividad';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h3 class="verde offset1">Actividad</h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-publico-emprendedor-actividad',
      'css_class' => 'span32 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '25c072e0-dda7-46ce-8c93-41bbe98936d0';
    $display->content['new-25c072e0-dda7-46ce-8c93-41bbe98936d0'] = $pane;
    $display->panels['main'][0] = 'new-25c072e0-dda7-46ce-8c93-41bbe98936d0';
    $pane = new stdClass();
    $pane->pid = 'new-d34e79d7-0141-499f-bab9-542cc72fda0f';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-publico-emprendedor-proyectos-activos',
      'css_class' => 'span32 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd34e79d7-0141-499f-bab9-542cc72fda0f';
    $display->content['new-d34e79d7-0141-499f-bab9-542cc72fda0f'] = $pane;
    $display->panels['main'][1] = 'new-d34e79d7-0141-499f-bab9-542cc72fda0f';
    $pane = new stdClass();
    $pane->pid = 'new-954e55fe-9900-4f92-a309-79596cbfd1a0';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-publico-emprendedor-proyectos-en-curso',
      'css_class' => 'span32 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '954e55fe-9900-4f92-a309-79596cbfd1a0';
    $display->content['new-954e55fe-9900-4f92-a309-79596cbfd1a0'] = $pane;
    $display->panels['main'][2] = 'new-954e55fe-9900-4f92-a309-79596cbfd1a0';
    $pane = new stdClass();
    $pane->pid = 'new-456494bf-9be7-4bac-9775-9ce55dda8fd0';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-publico-emprendedor-proyectos-finalizados',
      'css_class' => 'span32 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '456494bf-9be7-4bac-9775-9ce55dda8fd0';
    $display->content['new-456494bf-9be7-4bac-9775-9ce55dda8fd0'] = $pane;
    $display->panels['main'][3] = 'new-456494bf-9be7-4bac-9775-9ce55dda8fd0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_3';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Privado Tutor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Usuario',
        'keyword' => 'user_2',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_3_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
      'left' => NULL,
      'main' => NULL,
      'right' => NULL,
      'header' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd77bfd9d-b6ef-4e32-a9f6-3f92c777a763';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36c50562-6687-4e7b-9519-ddd18e00b8b5';
    $pane->panel = 'headerrow';
    $pane->type = 'block';
    $pane->subtype = 'pcp-pcp_profile2_tutor';
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
      'css_id' => 'perfil-completado',
      'css_class' => 'privado-emprendedor span6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '36c50562-6687-4e7b-9519-ddd18e00b8b5';
    $display->content['new-36c50562-6687-4e7b-9519-ddd18e00b8b5'] = $pane;
    $display->panels['headerrow'][0] = 'new-36c50562-6687-4e7b-9519-ddd18e00b8b5';
    $pane = new stdClass();
    $pane->pid = 'new-26e48793-0d55-4eb4-9a3f-9671e1bd2eae';
    $pane->panel = 'headerrow';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-enlace-edit',
      'css_class' => 'privado-emprendedor span6 offset1 uppercase black normal-min bold',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '26e48793-0d55-4eb4-9a3f-9671e1bd2eae';
    $display->content['new-26e48793-0d55-4eb4-9a3f-9671e1bd2eae'] = $pane;
    $display->panels['headerrow'][1] = 'new-26e48793-0d55-4eb4-9a3f-9671e1bd2eae';
    $pane = new stdClass();
    $pane->pid = 'new-d57132d2-9870-4a60-b3a9-a7fe62215921';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'info-usuario',
      'css_class' => 'privado-emprendedor span13',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd57132d2-9870-4a60-b3a9-a7fe62215921';
    $display->content['new-d57132d2-9870-4a60-b3a9-a7fe62215921'] = $pane;
    $display->panels['left'][0] = 'new-d57132d2-9870-4a60-b3a9-a7fe62215921';
    $pane = new stdClass();
    $pane->pid = 'new-12ce8782-37df-4356-9c6d-9563c3c3221c';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'bloque_institucion-bloque_institucion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h5 class="black uppercase">Participa en:</h5>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-institucion',
      'css_class' => 'span13',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '12ce8782-37df-4356-9c6d-9563c3c3221c';
    $display->content['new-12ce8782-37df-4356-9c6d-9563c3c3221c'] = $pane;
    $display->panels['left'][1] = 'new-12ce8782-37df-4356-9c6d-9563c3c3221c';
    $pane = new stdClass();
    $pane->pid = 'new-150323a9-7663-4f63-9f57-c00bdabbc4ca';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-usuario-tutor';
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
      'css_id' => 'menu-de-usuario',
      'css_class' => 'span13',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '150323a9-7663-4f63-9f57-c00bdabbc4ca';
    $display->content['new-150323a9-7663-4f63-9f57-c00bdabbc4ca'] = $pane;
    $display->panels['left'][2] = 'new-150323a9-7663-4f63-9f57-c00bdabbc4ca';
    $pane = new stdClass();
    $pane->pid = 'new-0d6de344-bb85-435d-bcb8-8f84ae87e61c';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_15';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-proyectos-abiertos',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d6de344-bb85-435d-bcb8-8f84ae87e61c';
    $display->content['new-0d6de344-bb85-435d-bcb8-8f84ae87e61c'] = $pane;
    $display->panels['main'][0] = 'new-0d6de344-bb85-435d-bcb8-8f84ae87e61c';
    $pane = new stdClass();
    $pane->pid = 'new-46624fc1-59bc-4aa2-b598-12c3eee52dfa';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_17';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'perfil-mis-tutoriados',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '46624fc1-59bc-4aa2-b598-12c3eee52dfa';
    $display->content['new-46624fc1-59bc-4aa2-b598-12c3eee52dfa'] = $pane;
    $display->panels['main'][1] = 'new-46624fc1-59bc-4aa2-b598-12c3eee52dfa';
    $pane = new stdClass();
    $pane->pid = 'new-33d565b5-0202-41a1-8e10-3f467b0af172';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'privado_tutor_estadisticas';
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
      'css_id' => 'usuario-estadisticas',
      'css_class' => 'span8 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '33d565b5-0202-41a1-8e10-3f467b0af172';
    $display->content['new-33d565b5-0202-41a1-8e10-3f467b0af172'] = $pane;
    $display->panels['right'][0] = 'new-33d565b5-0202-41a1-8e10-3f467b0af172';
    $pane = new stdClass();
    $pane->pid = 'new-250479c9-e917-4884-a590-8c14b8219418';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'calendario';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '<h5 class="bg-rojo white uppercase">Eventos tutoriame</h5>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'calendario-eventos',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '250479c9-e917-4884-a590-8c14b8219418';
    $display->content['new-250479c9-e917-4884-a590-8c14b8219418'] = $pane;
    $display->panels['right'][1] = 'new-250479c9-e917-4884-a590-8c14b8219418';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_4';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Público Tutor',
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
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '0',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_3_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'main' => NULL,
      'right' => NULL,
      'header' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fd86f432-fde3-4d03-82f1-de78b9339cc3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fca35ee1-162f-430a-9485-e2bbd9f57fe4';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publico_tutor_info';
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
      'css_id' => 'info-usuario-tutor-publico',
      'css_class' => 'bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fca35ee1-162f-430a-9485-e2bbd9f57fe4';
    $display->content['new-fca35ee1-162f-430a-9485-e2bbd9f57fe4'] = $pane;
    $display->panels['left'][0] = 'new-fca35ee1-162f-430a-9485-e2bbd9f57fe4';
    $pane = new stdClass();
    $pane->pid = 'new-e2252618-7d0e-4909-861e-064574b1d766';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publico_tutor_servicio';
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
      'css_id' => 'publico-tutor-servicio-content',
      'css_class' => 'bg-gris-uno span23',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2252618-7d0e-4909-861e-064574b1d766';
    $display->content['new-e2252618-7d0e-4909-861e-064574b1d766'] = $pane;
    $display->panels['main'][0] = 'new-e2252618-7d0e-4909-861e-064574b1d766';
    $pane = new stdClass();
    $pane->pid = 'new-28069c3f-5f04-47c2-b198-62747cb2bd79';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publico_tutor_estadisticas';
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
      'css_id' => 'usuario-estadisticas',
      'css_class' => 'span8 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '28069c3f-5f04-47c2-b198-62747cb2bd79';
    $display->content['new-28069c3f-5f04-47c2-b198-62747cb2bd79'] = $pane;
    $display->panels['right'][0] = 'new-28069c3f-5f04-47c2-b198-62747cb2bd79';
    $pane = new stdClass();
    $pane->pid = 'new-30df1d8c-1029-42ac-bce6-d3c408dea9c7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_24';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'calificacion',
      'css_class' => 'span8 bg-gris-uno publico-tutor',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '30df1d8c-1029-42ac-bce6-d3c408dea9c7';
    $display->content['new-30df1d8c-1029-42ac-bce6-d3c408dea9c7'] = $pane;
    $display->panels['right'][1] = 'new-30df1d8c-1029-42ac-bce6-d3c408dea9c7';
    $pane = new stdClass();
    $pane->pid = 'new-bf603904-e49b-454d-950a-cdaee8aabe26';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'tutoriame_privatemsg-tutoriame_privatemsg-consultar';
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
      'css_id' => 'boton-consulta',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bf603904-e49b-454d-950a-cdaee8aabe26';
    $display->content['new-bf603904-e49b-454d-950a-cdaee8aabe26'] = $pane;
    $display->panels['right'][2] = 'new-bf603904-e49b-454d-950a-cdaee8aabe26';
    $pane = new stdClass();
    $pane->pid = 'new-978cb633-4699-4e47-9515-62d3c5c2bc27';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'tutoriame_contratar-ttm_contratar-contratar';
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
      'css_id' => 'boton-contratar-usuario',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '978cb633-4699-4e47-9515-62d3c5c2bc27';
    $display->content['new-978cb633-4699-4e47-9515-62d3c5c2bc27'] = $pane;
    $display->panels['right'][3] = 'new-978cb633-4699-4e47-9515-62d3c5c2bc27';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_5';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Usuarios para Admin',
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
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'administer users',
          ),
          'context' => 'logged-in-user',
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
  $display->uuid = '50787d1c-b07a-4a45-a905-51d0c3bf80c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-96fcf387-c23d-47d5-8540-872392ac1209';
    $pane->panel = 'row';
    $pane->type = 'token';
    $pane->subtype = 'user:name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span36 offset1 verde titulo-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '96fcf387-c23d-47d5-8540-872392ac1209';
    $display->content['new-96fcf387-c23d-47d5-8540-872392ac1209'] = $pane;
    $display->panels['row'][0] = 'new-96fcf387-c23d-47d5-8540-872392ac1209';
    $pane = new stdClass();
    $pane->pid = 'new-b7ea440d-4d73-4048-8d45-e05558c9ee6d';
    $pane->panel = 'row';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:profile_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span36 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b7ea440d-4d73-4048-8d45-e05558c9ee6d';
    $display->content['new-b7ea440d-4d73-4048-8d45-e05558c9ee6d'] = $pane;
    $display->panels['row'][1] = 'new-b7ea440d-4d73-4048-8d45-e05558c9ee6d';
    $pane = new stdClass();
    $pane->pid = 'new-d8310142-1f48-4f5f-9f75-9d9c77e354d5';
    $pane->panel = 'row';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:profile_emprendedor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span36 offset1',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd8310142-1f48-4f5f-9f75-9d9c77e354d5';
    $display->content['new-d8310142-1f48-4f5f-9f75-9d9c77e354d5'] = $pane;
    $display->panels['row'][2] = 'new-d8310142-1f48-4f5f-9f75-9d9c77e354d5';
    $pane = new stdClass();
    $pane->pid = 'new-cb5bc8a6-5fca-461c-b9d7-20ab8886fce9';
    $pane->panel = 'row';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:profile_tutor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span36 offset1',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cb5bc8a6-5fca-461c-b9d7-20ab8886fce9';
    $display->content['new-cb5bc8a6-5fca-461c-b9d7-20ab8886fce9'] = $pane;
    $display->panels['row'][3] = 'new-cb5bc8a6-5fca-461c-b9d7-20ab8886fce9';
    $pane = new stdClass();
    $pane->pid = 'new-6f6b9c53-7bed-4670-9bd1-7d6d44f1c08d';
    $pane->panel = 'row';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 7,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span36 offset1',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6f6b9c53-7bed-4670-9bd1-7d6d44f1c08d';
    $display->content['new-6f6b9c53-7bed-4670-9bd1-7d6d44f1c08d'] = $pane;
    $display->panels['row'][4] = 'new-6f6b9c53-7bed-4670-9bd1-7d6d44f1c08d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b7ea440d-4d73-4048-8d45-e05558c9ee6d';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_5'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function usuarios_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contenidos_de_interes';
  $page->task = 'page';
  $page->admin_title = 'Contenidos de interés';
  $page->admin_description = '';
  $page->path = 'contenidos-de-interes';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contenidos_de_interes_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contenidos_de_interes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'Contenidos de interés';
  $display->uuid = '948a673d-34dd-400a-b3c6-27f672f7c06a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-748380d3-d71a-4ab1-b4ba-552a3ad34358';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_18';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-contenidos',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '748380d3-d71a-4ab1-b4ba-552a3ad34358';
    $display->content['new-748380d3-d71a-4ab1-b4ba-552a3ad34358'] = $pane;
    $display->panels['row'][0] = 'new-748380d3-d71a-4ab1-b4ba-552a3ad34358';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contenidos_de_interes'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mi_cuenta_ttm';
  $page->task = 'page';
  $page->admin_title = 'Mi cuenta TTM';
  $page->admin_description = '';
  $page->path = 'mi-cuenta-ttm';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mi_cuenta_ttm_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'mi_cuenta_ttm';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Mi Cuenta TTM Tutor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Usuario',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'context_user_1',
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
  $display->title = 'Mi cuenta TTM';
  $display->uuid = '3e951510-9a1d-4906-ac5b-23aea7a86d73';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aa81f5a1-da04-4ef9-b977-efb66bd0972c';
    $pane->panel = 'row';
    $pane->type = 'panels_mini';
    $pane->subtype = 'privado_tutor_mi_cuenta';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h2 class="plus verde span21 offset1">Estado de cuenta</h2>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mi-cuenta-ttm',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa81f5a1-da04-4ef9-b977-efb66bd0972c';
    $display->content['new-aa81f5a1-da04-4ef9-b977-efb66bd0972c'] = $pane;
    $display->panels['row'][0] = 'new-aa81f5a1-da04-4ef9-b977-efb66bd0972c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mi_cuenta_ttm_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mi_cuenta_ttm';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Mi cuenta TTM',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Usuario',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
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
  $display->title = 'Mi cuenta TTM';
  $display->uuid = '3e951510-9a1d-4906-ac5b-23aea7a86d73';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-33226d00-96a2-4912-bf9e-f8b35b32b257';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_25';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mi-cuenta-ttm-total',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '33226d00-96a2-4912-bf9e-f8b35b32b257';
    $display->content['new-33226d00-96a2-4912-bf9e-f8b35b32b257'] = $pane;
    $display->panels['row'][0] = 'new-33226d00-96a2-4912-bf9e-f8b35b32b257';
    $pane = new stdClass();
    $pane->pid = 'new-db4c0750-c832-4b65-b5a4-c81f342511e6';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mi-cuenta-ttm',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db4c0750-c832-4b65-b5a4-c81f342511e6';
    $display->content['new-db4c0750-c832-4b65-b5a4-c81f342511e6'] = $pane;
    $display->panels['row'][1] = 'new-db4c0750-c832-4b65-b5a4-c81f342511e6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mi_cuenta_ttm'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mis_consultorias';
  $page->task = 'page';
  $page->admin_title = 'Mis consultorias';
  $page->admin_description = '';
  $page->path = 'mis-consultorias';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mis_consultorias_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mis_consultorias';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Usuario',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
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
  $display->uuid = 'ea2537de-3e7b-4ebe-84b1-6d4235e47581';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93ce62b9-649e-4f42-b92e-4706396847d3';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_16';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-consultorias-en-curso',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '93ce62b9-649e-4f42-b92e-4706396847d3';
    $display->content['new-93ce62b9-649e-4f42-b92e-4706396847d3'] = $pane;
    $display->panels['row'][0] = 'new-93ce62b9-649e-4f42-b92e-4706396847d3';
    $pane = new stdClass();
    $pane->pid = 'new-afe46ba8-97f2-4556-83db-493748d274ee';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_17';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-consultorias-finalizadas',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'afe46ba8-97f2-4556-83db-493748d274ee';
    $display->content['new-afe46ba8-97f2-4556-83db-493748d274ee'] = $pane;
    $display->panels['row'][1] = 'new-afe46ba8-97f2-4556-83db-493748d274ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-93ce62b9-649e-4f42-b92e-4706396847d3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mis_consultorias'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mis_contenidos';
  $page->task = 'page';
  $page->admin_title = 'Mis contenidos';
  $page->admin_description = '';
  $page->path = 'mis-contenidos';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mis_contenidos_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mis_contenidos';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Usuario',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
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
  $display->uuid = '3204e0ea-419c-484b-b565-def5c12a8442';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-636609f0-0eb0-4aaa-a116-54f98b0b3826';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-contenidos',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '636609f0-0eb0-4aaa-a116-54f98b0b3826';
    $display->content['new-636609f0-0eb0-4aaa-a116-54f98b0b3826'] = $pane;
    $display->panels['row'][0] = 'new-636609f0-0eb0-4aaa-a116-54f98b0b3826';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-636609f0-0eb0-4aaa-a116-54f98b0b3826';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mis_contenidos'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mis_proyectos';
  $page->task = 'page';
  $page->admin_title = 'Mis proyectos';
  $page->admin_description = '';
  $page->path = 'mis-proyectos';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mis_proyectos_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mis_proyectos';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Usuario',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
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
  $display->uuid = '83b88e24-b6f5-4913-ab5c-94009bef20e6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8304e13b-3bbf-42af-a722-0cb696983bd1';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-proyectos-abiertos',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8304e13b-3bbf-42af-a722-0cb696983bd1';
    $display->content['new-8304e13b-3bbf-42af-a722-0cb696983bd1'] = $pane;
    $display->panels['row'][0] = 'new-8304e13b-3bbf-42af-a722-0cb696983bd1';
    $pane = new stdClass();
    $pane->pid = 'new-e2564e2f-3e6b-4f22-97a5-78394c3d7d45';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-proyectos-en-curso',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e2564e2f-3e6b-4f22-97a5-78394c3d7d45';
    $display->content['new-e2564e2f-3e6b-4f22-97a5-78394c3d7d45'] = $pane;
    $display->panels['row'][1] = 'new-e2564e2f-3e6b-4f22-97a5-78394c3d7d45';
    $pane = new stdClass();
    $pane->pid = 'new-9a48d3ca-7780-4400-b873-f9a5c25a7b56';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-proyectos-finalizados',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9a48d3ca-7780-4400-b873-f9a5c25a7b56';
    $display->content['new-9a48d3ca-7780-4400-b873-f9a5c25a7b56'] = $pane;
    $display->panels['row'][2] = 'new-9a48d3ca-7780-4400-b873-f9a5c25a7b56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8304e13b-3bbf-42af-a722-0cb696983bd1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mis_proyectos'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mis_tutores';
  $page->task = 'page';
  $page->admin_title = 'Mis Tutores';
  $page->admin_description = '';
  $page->path = 'mis-tutores';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mis_tutores_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mis_tutores';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->uuid = '0d487632-eba6-41a6-8a52-6c8cf12541cf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f4cf6cf7-77f8-4ce2-8740-e0ba4b905e6d';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_18';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-tutores',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4cf6cf7-77f8-4ce2-8740-e0ba4b905e6d';
    $display->content['new-f4cf6cf7-77f8-4ce2-8740-e0ba4b905e6d'] = $pane;
    $display->panels['row'][0] = 'new-f4cf6cf7-77f8-4ce2-8740-e0ba4b905e6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f4cf6cf7-77f8-4ce2-8740-e0ba4b905e6d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mis_tutores'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mis_tutoriados';
  $page->task = 'page';
  $page->admin_title = 'Mis Tutoriados';
  $page->admin_description = '';
  $page->path = 'mis-tutoriados';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mis_tutoriados_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mis_tutoriados';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->uuid = 'abe34036-dfc3-4bf0-8806-81a9d0799af2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-56bfdb9e-b4e7-4f4d-ab2d-2f20c028c753';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_19';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-tutoriados',
      'css_class' => 'span23 bg-gris-uno',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '56bfdb9e-b4e7-4f4d-ab2d-2f20c028c753';
    $display->content['new-56bfdb9e-b4e7-4f4d-ab2d-2f20c028c753'] = $pane;
    $display->panels['row'][0] = 'new-56bfdb9e-b4e7-4f4d-ab2d-2f20c028c753';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-56bfdb9e-b4e7-4f4d-ab2d-2f20c028c753';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mis_tutoriados'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'registro';
  $page->task = 'page';
  $page->admin_title = 'Registro';
  $page->admin_description = '';
  $page->path = 'registro';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_registro_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'registro';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'Registro';
  $display->uuid = '30798ee6-51da-4d9e-aad9-de0e95dbc9ad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74e4dc56-5df9-4e58-8b4b-4ddf15dfa657';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-encabezado_registro_titulo';
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
      'css_id' => 'registro-titulo',
      'css_class' => 'span46 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '74e4dc56-5df9-4e58-8b4b-4ddf15dfa657';
    $display->content['new-74e4dc56-5df9-4e58-8b4b-4ddf15dfa657'] = $pane;
    $display->panels['row'][0] = 'new-74e4dc56-5df9-4e58-8b4b-4ddf15dfa657';
    $pane = new stdClass();
    $pane->pid = 'new-9bb8aa9d-37b5-48d4-b109-5254e82d9b61';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'connector-one_click_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h2 class="plus gris-tres">Regístrate con:</h2>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'registro-botones-redes',
      'css_class' => 'registro-redes span46 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9bb8aa9d-37b5-48d4-b109-5254e82d9b61';
    $display->content['new-9bb8aa9d-37b5-48d4-b109-5254e82d9b61'] = $pane;
    $display->panels['row'][1] = 'new-9bb8aa9d-37b5-48d4-b109-5254e82d9b61';
    $pane = new stdClass();
    $pane->pid = 'new-2d31a6a7-cfe4-4643-b930-b854367045a5';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-encabezado_registro';
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
      'css_id' => '',
      'css_class' => 'span46 offset1',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2d31a6a7-cfe4-4643-b930-b854367045a5';
    $display->content['new-2d31a6a7-cfe4-4643-b930-b854367045a5'] = $pane;
    $display->panels['row'][2] = 'new-2d31a6a7-cfe4-4643-b930-b854367045a5';
    $pane = new stdClass();
    $pane->pid = 'new-5c70ad1d-0260-4d7a-ac26-c2e4e4e4766f';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'profile2_regpath-p2rp_register_main';
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
      'css_id' => '',
      'css_class' => 'formulario span20 offset1',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5c70ad1d-0260-4d7a-ac26-c2e4e4e4766f';
    $display->content['new-5c70ad1d-0260-4d7a-ac26-c2e4e4e4766f'] = $pane;
    $display->panels['row'][3] = 'new-5c70ad1d-0260-4d7a-ac26-c2e4e4e4766f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9bb8aa9d-37b5-48d4-b109-5254e82d9b61';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['registro'] = $page;

  return $pages;

}
