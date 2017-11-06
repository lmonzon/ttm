<?php
/**
 * @file
 * site_default_template.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function site_default_template_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Tutoriame SDT',
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
  $display->layout = 'tutoriame_site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navbar' => NULL,
      'header' => NULL,
      'hero' => NULL,
      'main' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58eb499f-1b31-4ec8-a0ee-fb44d3641492';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>

<div class="logo-footer span1">
<img src="<?php print $imagenes; ?>ttm-footer.png" />
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home-footer-logo',
      'css_class' => 'span1 offset1 semibold footer-logo',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a641c58d-23d8-4417-9df9-92451539e959';
    $display->content['new-a641c58d-23d8-4417-9df9-92451539e959'] = $pane;
    $display->panels['footer'][0] = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane = new stdClass();
    $pane->pid = 'new-51348988-7694-464f-9328-0548f7db63c8';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menues';
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
      'css_id' => 'ttm-footer-menu',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '51348988-7694-464f-9328-0548f7db63c8';
    $display->content['new-51348988-7694-464f-9328-0548f7db63c8'] = $pane;
    $display->panels['footer'][1] = 'new-51348988-7694-464f-9328-0548f7db63c8';
    $pane = new stdClass();
    $pane->pid = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_top';
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
      'css_id' => 'header-top',
      'css_class' => 'span48',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $display->content['new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67'] = $pane;
    $display->panels['header'][0] = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane = new stdClass();
    $pane->pid = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => 'span47 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $display->content['new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342'] = $pane;
    $display->panels['header'][1] = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane = new stdClass();
    $pane->pid = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-anonimo';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 6,
              3 => 5,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $display->content['new-0bdce174-28d0-49db-8c5a-1f9eec1873a2'] = $pane;
    $display->panels['header'][2] = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane = new stdClass();
    $pane->pid = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-emprendedor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $display->content['new-e4763ce2-2f48-4855-b8a6-45fc16f63548'] = $pane;
    $display->panels['header'][3] = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane = new stdClass();
    $pane->pid = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-tutor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $display->content['new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d'] = $pane;
    $display->panels['header'][4] = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane = new stdClass();
    $pane->pid = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $display->content['new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff'] = $pane;
    $display->panels['main'][0] = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane = new stdClass();
    $pane->pid = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $display->content['new-b4fc6790-6597-402b-82a2-c388d3ae6bc8'] = $pane;
    $display->panels['main'][1] = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_3';
  $handler->task = 'site_template';
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
      1 => array(
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
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mi-cuenta-ttm
mis-proyectos
mis-conversaciones
contenidos-de-interes
mis-tutores',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_site_template_3_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navbar' => NULL,
      'header' => NULL,
      'hero' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58eb499f-1b31-4ec8-a0ee-fb44d3641492';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>

<div class="logo-footer span1">
<img src="<?php print $imagenes; ?>ttm-footer.png" />
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home-footer-logo',
      'css_class' => 'span1 offset1 semibold footer-logo',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a641c58d-23d8-4417-9df9-92451539e959';
    $display->content['new-a641c58d-23d8-4417-9df9-92451539e959'] = $pane;
    $display->panels['footer'][0] = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane = new stdClass();
    $pane->pid = 'new-9ad60d62-1c76-4349-badc-7947d66c5f31';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menues';
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
      'css_id' => 'ttm-footer-menu',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9ad60d62-1c76-4349-badc-7947d66c5f31';
    $display->content['new-9ad60d62-1c76-4349-badc-7947d66c5f31'] = $pane;
    $display->panels['footer'][1] = 'new-9ad60d62-1c76-4349-badc-7947d66c5f31';
    $pane = new stdClass();
    $pane->pid = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_top';
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
      'css_id' => 'header-top',
      'css_class' => 'span48',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $display->content['new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67'] = $pane;
    $display->panels['header'][0] = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane = new stdClass();
    $pane->pid = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => 'span47 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $display->content['new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342'] = $pane;
    $display->panels['header'][1] = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane = new stdClass();
    $pane->pid = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-anonimo';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $display->content['new-0bdce174-28d0-49db-8c5a-1f9eec1873a2'] = $pane;
    $display->panels['header'][2] = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane = new stdClass();
    $pane->pid = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-emprendedor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $display->content['new-e4763ce2-2f48-4855-b8a6-45fc16f63548'] = $pane;
    $display->panels['header'][3] = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane = new stdClass();
    $pane->pid = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-tutor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $display->content['new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d'] = $pane;
    $display->panels['header'][4] = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane = new stdClass();
    $pane->pid = 'new-0eedff0f-51db-4fd4-bd74-bee63d7a3a2a';
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
    $pane->uuid = '0eedff0f-51db-4fd4-bd74-bee63d7a3a2a';
    $display->content['new-0eedff0f-51db-4fd4-bd74-bee63d7a3a2a'] = $pane;
    $display->panels['headerrow'][0] = 'new-0eedff0f-51db-4fd4-bd74-bee63d7a3a2a';
    $pane = new stdClass();
    $pane->pid = 'new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
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
    $pane->uuid = '6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
    $display->content['new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8'] = $pane;
    $display->panels['headerrow'][1] = 'new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
    $pane = new stdClass();
    $pane->pid = 'new-4efa259f-3a15-4d34-95ac-968e14e04415';
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
    $pane->uuid = '4efa259f-3a15-4d34-95ac-968e14e04415';
    $display->content['new-4efa259f-3a15-4d34-95ac-968e14e04415'] = $pane;
    $display->panels['left'][0] = 'new-4efa259f-3a15-4d34-95ac-968e14e04415';
    $pane = new stdClass();
    $pane->pid = 'new-2db1efc5-c0f8-4781-a9ed-5ae1d092fe99';
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
    $pane->uuid = '2db1efc5-c0f8-4781-a9ed-5ae1d092fe99';
    $display->content['new-2db1efc5-c0f8-4781-a9ed-5ae1d092fe99'] = $pane;
    $display->panels['left'][1] = 'new-2db1efc5-c0f8-4781-a9ed-5ae1d092fe99';
    $pane = new stdClass();
    $pane->pid = 'new-ab8fbad0-3c2e-477a-86c4-7851dfa531cb';
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
    $pane->uuid = 'ab8fbad0-3c2e-477a-86c4-7851dfa531cb';
    $display->content['new-ab8fbad0-3c2e-477a-86c4-7851dfa531cb'] = $pane;
    $display->panels['left'][2] = 'new-ab8fbad0-3c2e-477a-86c4-7851dfa531cb';
    $pane = new stdClass();
    $pane->pid = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $display->content['new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff'] = $pane;
    $display->panels['main'][0] = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane = new stdClass();
    $pane->pid = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $display->content['new-b4fc6790-6597-402b-82a2-c388d3ae6bc8'] = $pane;
    $display->panels['main'][1] = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane = new stdClass();
    $pane->pid = 'new-690f1aa5-7e1a-4ca5-bdd0-b045cdfd212e';
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
    $pane->uuid = '690f1aa5-7e1a-4ca5-bdd0-b045cdfd212e';
    $display->content['new-690f1aa5-7e1a-4ca5-bdd0-b045cdfd212e'] = $pane;
    $display->panels['right'][0] = 'new-690f1aa5-7e1a-4ca5-bdd0-b045cdfd212e';
    $pane = new stdClass();
    $pane->pid = 'new-025ea45a-085b-4576-9f56-7d0f682974bc';
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
    $pane->uuid = '025ea45a-085b-4576-9f56-7d0f682974bc';
    $display->content['new-025ea45a-085b-4576-9f56-7d0f682974bc'] = $pane;
    $display->panels['right'][1] = 'new-025ea45a-085b-4576-9f56-7d0f682974bc';
    $pane = new stdClass();
    $pane->pid = 'new-f15fbc82-c404-4034-89dc-fa8ee4428519';
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
    $pane->uuid = 'f15fbc82-c404-4034-89dc-fa8ee4428519';
    $display->content['new-f15fbc82-c404-4034-89dc-fa8ee4428519'] = $pane;
    $display->panels['right'][2] = 'new-f15fbc82-c404-4034-89dc-fa8ee4428519';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_4';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Privado Tutor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      1 => array(
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
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'mi-cuenta-ttm
mis-contenidos
mis-conversaciones
mis-consultorias
mis-tutoriados',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_site_template_3_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navbar' => NULL,
      'header' => NULL,
      'hero' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58eb499f-1b31-4ec8-a0ee-fb44d3641492';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>

<div class="logo-footer span1">
<img src="<?php print $imagenes; ?>ttm-footer.png" />
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home-footer-logo',
      'css_class' => 'span1 offset1 semibold footer-logo',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a641c58d-23d8-4417-9df9-92451539e959';
    $display->content['new-a641c58d-23d8-4417-9df9-92451539e959'] = $pane;
    $display->panels['footer'][0] = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane = new stdClass();
    $pane->pid = 'new-1508286a-10d7-474f-a982-03aeb444757c';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menues';
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
      'css_id' => 'ttm-footer-menu',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1508286a-10d7-474f-a982-03aeb444757c';
    $display->content['new-1508286a-10d7-474f-a982-03aeb444757c'] = $pane;
    $display->panels['footer'][1] = 'new-1508286a-10d7-474f-a982-03aeb444757c';
    $pane = new stdClass();
    $pane->pid = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_top';
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
      'css_id' => 'header-top',
      'css_class' => 'span48',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $display->content['new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67'] = $pane;
    $display->panels['header'][0] = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane = new stdClass();
    $pane->pid = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => 'span47 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $display->content['new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342'] = $pane;
    $display->panels['header'][1] = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane = new stdClass();
    $pane->pid = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-anonimo';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 6,
              3 => 5,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $display->content['new-0bdce174-28d0-49db-8c5a-1f9eec1873a2'] = $pane;
    $display->panels['header'][2] = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane = new stdClass();
    $pane->pid = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-emprendedor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $display->content['new-e4763ce2-2f48-4855-b8a6-45fc16f63548'] = $pane;
    $display->panels['header'][3] = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane = new stdClass();
    $pane->pid = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-tutor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $display->content['new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d'] = $pane;
    $display->panels['header'][4] = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane = new stdClass();
    $pane->pid = 'new-84492947-a3f0-430b-adbd-9590462350c7';
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
    $pane->uuid = '84492947-a3f0-430b-adbd-9590462350c7';
    $display->content['new-84492947-a3f0-430b-adbd-9590462350c7'] = $pane;
    $display->panels['headerrow'][0] = 'new-84492947-a3f0-430b-adbd-9590462350c7';
    $pane = new stdClass();
    $pane->pid = 'new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
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
    $pane->uuid = '6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
    $display->content['new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8'] = $pane;
    $display->panels['headerrow'][1] = 'new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
    $pane = new stdClass();
    $pane->pid = 'new-4efa259f-3a15-4d34-95ac-968e14e04415';
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
    $pane->uuid = '4efa259f-3a15-4d34-95ac-968e14e04415';
    $display->content['new-4efa259f-3a15-4d34-95ac-968e14e04415'] = $pane;
    $display->panels['left'][0] = 'new-4efa259f-3a15-4d34-95ac-968e14e04415';
    $pane = new stdClass();
    $pane->pid = 'new-f0f0e9fb-87d8-44ed-acba-cf85c39286d0';
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
    $pane->uuid = 'f0f0e9fb-87d8-44ed-acba-cf85c39286d0';
    $display->content['new-f0f0e9fb-87d8-44ed-acba-cf85c39286d0'] = $pane;
    $display->panels['left'][1] = 'new-f0f0e9fb-87d8-44ed-acba-cf85c39286d0';
    $pane = new stdClass();
    $pane->pid = 'new-49b79a5e-d5d9-483b-9714-0167da125859';
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
    $pane->uuid = '49b79a5e-d5d9-483b-9714-0167da125859';
    $display->content['new-49b79a5e-d5d9-483b-9714-0167da125859'] = $pane;
    $display->panels['left'][2] = 'new-49b79a5e-d5d9-483b-9714-0167da125859';
    $pane = new stdClass();
    $pane->pid = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $display->content['new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff'] = $pane;
    $display->panels['main'][0] = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane = new stdClass();
    $pane->pid = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $display->content['new-b4fc6790-6597-402b-82a2-c388d3ae6bc8'] = $pane;
    $display->panels['main'][1] = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane = new stdClass();
    $pane->pid = 'new-709332f2-9180-48ae-8591-fabf70483495';
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
    $pane->uuid = '709332f2-9180-48ae-8591-fabf70483495';
    $display->content['new-709332f2-9180-48ae-8591-fabf70483495'] = $pane;
    $display->panels['right'][0] = 'new-709332f2-9180-48ae-8591-fabf70483495';
    $pane = new stdClass();
    $pane->pid = 'new-f15fbc82-c404-4034-89dc-fa8ee4428519';
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
    $pane->uuid = 'f15fbc82-c404-4034-89dc-fa8ee4428519';
    $display->content['new-f15fbc82-c404-4034-89dc-fa8ee4428519'] = $pane;
    $display->panels['right'][1] = 'new-f15fbc82-c404-4034-89dc-fa8ee4428519';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_5';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Privado Emprendedor 2 columnas',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      1 => array(
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
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'foros/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_site_template_2_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navbar' => NULL,
      'header' => NULL,
      'hero' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58eb499f-1b31-4ec8-a0ee-fb44d3641492';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>

<div class="logo-footer span1">
<img src="<?php print $imagenes; ?>ttm-footer.png" />
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home-footer-logo',
      'css_class' => 'span1 offset1 semibold footer-logo',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a641c58d-23d8-4417-9df9-92451539e959';
    $display->content['new-a641c58d-23d8-4417-9df9-92451539e959'] = $pane;
    $display->panels['footer'][0] = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane = new stdClass();
    $pane->pid = 'new-e240cfe7-b4a5-422e-938c-517eb3f0fa29';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menues';
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
      'css_id' => 'ttm-footer-menu',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e240cfe7-b4a5-422e-938c-517eb3f0fa29';
    $display->content['new-e240cfe7-b4a5-422e-938c-517eb3f0fa29'] = $pane;
    $display->panels['footer'][1] = 'new-e240cfe7-b4a5-422e-938c-517eb3f0fa29';
    $pane = new stdClass();
    $pane->pid = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_top';
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
      'css_id' => 'header-top',
      'css_class' => 'span48',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $display->content['new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67'] = $pane;
    $display->panels['header'][0] = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane = new stdClass();
    $pane->pid = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => 'span47 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $display->content['new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342'] = $pane;
    $display->panels['header'][1] = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane = new stdClass();
    $pane->pid = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-anonimo';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 6,
              3 => 5,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $display->content['new-0bdce174-28d0-49db-8c5a-1f9eec1873a2'] = $pane;
    $display->panels['header'][2] = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane = new stdClass();
    $pane->pid = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-emprendedor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $display->content['new-e4763ce2-2f48-4855-b8a6-45fc16f63548'] = $pane;
    $display->panels['header'][3] = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane = new stdClass();
    $pane->pid = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-tutor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $display->content['new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d'] = $pane;
    $display->panels['header'][4] = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane = new stdClass();
    $pane->pid = 'new-0eedff0f-51db-4fd4-bd74-bee63d7a3a2a';
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
    $pane->uuid = '0eedff0f-51db-4fd4-bd74-bee63d7a3a2a';
    $display->content['new-0eedff0f-51db-4fd4-bd74-bee63d7a3a2a'] = $pane;
    $display->panels['headerrow'][0] = 'new-0eedff0f-51db-4fd4-bd74-bee63d7a3a2a';
    $pane = new stdClass();
    $pane->pid = 'new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
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
    $pane->uuid = '6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
    $display->content['new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8'] = $pane;
    $display->panels['headerrow'][1] = 'new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
    $pane = new stdClass();
    $pane->pid = 'new-4efa259f-3a15-4d34-95ac-968e14e04415';
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
    $pane->uuid = '4efa259f-3a15-4d34-95ac-968e14e04415';
    $display->content['new-4efa259f-3a15-4d34-95ac-968e14e04415'] = $pane;
    $display->panels['left'][0] = 'new-4efa259f-3a15-4d34-95ac-968e14e04415';
    $pane = new stdClass();
    $pane->pid = 'new-f1e22608-2cfa-434b-9500-6324873a547b';
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
    $pane->uuid = 'f1e22608-2cfa-434b-9500-6324873a547b';
    $display->content['new-f1e22608-2cfa-434b-9500-6324873a547b'] = $pane;
    $display->panels['left'][1] = 'new-f1e22608-2cfa-434b-9500-6324873a547b';
    $pane = new stdClass();
    $pane->pid = 'new-ab8fbad0-3c2e-477a-86c4-7851dfa531cb';
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
    $pane->uuid = 'ab8fbad0-3c2e-477a-86c4-7851dfa531cb';
    $display->content['new-ab8fbad0-3c2e-477a-86c4-7851dfa531cb'] = $pane;
    $display->panels['left'][2] = 'new-ab8fbad0-3c2e-477a-86c4-7851dfa531cb';
    $pane = new stdClass();
    $pane->pid = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $display->content['new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff'] = $pane;
    $display->panels['main'][0] = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane = new stdClass();
    $pane->pid = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $display->content['new-b4fc6790-6597-402b-82a2-c388d3ae6bc8'] = $pane;
    $display->panels['main'][1] = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_6';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Privado Tutor 2 columnas',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      1 => array(
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
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'foros/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_site_template_2_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navbar' => NULL,
      'header' => NULL,
      'hero' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58eb499f-1b31-4ec8-a0ee-fb44d3641492';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>

<div class="logo-footer span1">
<img src="<?php print $imagenes; ?>ttm-footer.png" />
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home-footer-logo',
      'css_class' => 'span1 offset1 semibold footer-logo',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a641c58d-23d8-4417-9df9-92451539e959';
    $display->content['new-a641c58d-23d8-4417-9df9-92451539e959'] = $pane;
    $display->panels['footer'][0] = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane = new stdClass();
    $pane->pid = 'new-8a0e3a90-b926-441c-8496-17f0f3da1e29';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menues';
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
      'css_id' => 'ttm-footer-menu',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a0e3a90-b926-441c-8496-17f0f3da1e29';
    $display->content['new-8a0e3a90-b926-441c-8496-17f0f3da1e29'] = $pane;
    $display->panels['footer'][1] = 'new-8a0e3a90-b926-441c-8496-17f0f3da1e29';
    $pane = new stdClass();
    $pane->pid = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_top';
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
      'css_id' => 'header-top',
      'css_class' => 'span48',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $display->content['new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67'] = $pane;
    $display->panels['header'][0] = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane = new stdClass();
    $pane->pid = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => 'span47 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $display->content['new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342'] = $pane;
    $display->panels['header'][1] = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane = new stdClass();
    $pane->pid = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-anonimo';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 6,
              3 => 5,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $display->content['new-0bdce174-28d0-49db-8c5a-1f9eec1873a2'] = $pane;
    $display->panels['header'][2] = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane = new stdClass();
    $pane->pid = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-emprendedor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $display->content['new-e4763ce2-2f48-4855-b8a6-45fc16f63548'] = $pane;
    $display->panels['header'][3] = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane = new stdClass();
    $pane->pid = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-tutor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $display->content['new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d'] = $pane;
    $display->panels['header'][4] = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane = new stdClass();
    $pane->pid = 'new-0da7a5a8-8b95-4449-a2ec-f2b924af3a71';
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
    $pane->uuid = '0da7a5a8-8b95-4449-a2ec-f2b924af3a71';
    $display->content['new-0da7a5a8-8b95-4449-a2ec-f2b924af3a71'] = $pane;
    $display->panels['headerrow'][0] = 'new-0da7a5a8-8b95-4449-a2ec-f2b924af3a71';
    $pane = new stdClass();
    $pane->pid = 'new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
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
    $pane->uuid = '6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
    $display->content['new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8'] = $pane;
    $display->panels['headerrow'][1] = 'new-6a28a445-9d95-4a77-89f2-db8dc41cfeb8';
    $pane = new stdClass();
    $pane->pid = 'new-4efa259f-3a15-4d34-95ac-968e14e04415';
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
    $pane->uuid = '4efa259f-3a15-4d34-95ac-968e14e04415';
    $display->content['new-4efa259f-3a15-4d34-95ac-968e14e04415'] = $pane;
    $display->panels['left'][0] = 'new-4efa259f-3a15-4d34-95ac-968e14e04415';
    $pane = new stdClass();
    $pane->pid = 'new-e4fef150-8037-4133-a604-23d53686ae0c';
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
    $pane->uuid = 'e4fef150-8037-4133-a604-23d53686ae0c';
    $display->content['new-e4fef150-8037-4133-a604-23d53686ae0c'] = $pane;
    $display->panels['left'][1] = 'new-e4fef150-8037-4133-a604-23d53686ae0c';
    $pane = new stdClass();
    $pane->pid = 'new-49b79a5e-d5d9-483b-9714-0167da125859';
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
    $pane->uuid = '49b79a5e-d5d9-483b-9714-0167da125859';
    $display->content['new-49b79a5e-d5d9-483b-9714-0167da125859'] = $pane;
    $display->panels['left'][2] = 'new-49b79a5e-d5d9-483b-9714-0167da125859';
    $pane = new stdClass();
    $pane->pid = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $display->content['new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff'] = $pane;
    $display->panels['main'][0] = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane = new stdClass();
    $pane->pid = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $display->content['new-b4fc6790-6597-402b-82a2-c388d3ae6bc8'] = $pane;
    $display->panels['main'][1] = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_7';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Privado Emprendedor sidebar right',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      1 => array(
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
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'messages/view/*
cart/checkout
cart
mis-conversaciones/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_site_template_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navbar' => NULL,
      'header' => NULL,
      'hero' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58eb499f-1b31-4ec8-a0ee-fb44d3641492';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>

<div class="logo-footer span1">
<img src="<?php print $imagenes; ?>ttm-footer.png" />
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home-footer-logo',
      'css_class' => 'span1 offset1 semibold footer-logo',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a641c58d-23d8-4417-9df9-92451539e959';
    $display->content['new-a641c58d-23d8-4417-9df9-92451539e959'] = $pane;
    $display->panels['footer'][0] = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane = new stdClass();
    $pane->pid = 'new-02753013-39a5-45a7-9f09-fbc1797a4663';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menues';
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
      'css_id' => 'ttm-footer-menu',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '02753013-39a5-45a7-9f09-fbc1797a4663';
    $display->content['new-02753013-39a5-45a7-9f09-fbc1797a4663'] = $pane;
    $display->panels['footer'][1] = 'new-02753013-39a5-45a7-9f09-fbc1797a4663';
    $pane = new stdClass();
    $pane->pid = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_top';
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
      'css_id' => 'header-top',
      'css_class' => 'span48',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $display->content['new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67'] = $pane;
    $display->panels['header'][0] = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane = new stdClass();
    $pane->pid = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => 'span47 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $display->content['new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342'] = $pane;
    $display->panels['header'][1] = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane = new stdClass();
    $pane->pid = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-anonimo';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 6,
              3 => 5,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $display->content['new-0bdce174-28d0-49db-8c5a-1f9eec1873a2'] = $pane;
    $display->panels['header'][2] = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane = new stdClass();
    $pane->pid = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-emprendedor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $display->content['new-e4763ce2-2f48-4855-b8a6-45fc16f63548'] = $pane;
    $display->panels['header'][3] = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane = new stdClass();
    $pane->pid = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-tutor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $display->content['new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d'] = $pane;
    $display->panels['header'][4] = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane = new stdClass();
    $pane->pid = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $display->content['new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff'] = $pane;
    $display->panels['main'][0] = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane = new stdClass();
    $pane->pid = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'conversacion',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $display->content['new-b4fc6790-6597-402b-82a2-c388d3ae6bc8'] = $pane;
    $display->panels['main'][1] = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane = new stdClass();
    $pane->pid = 'new-690f1aa5-7e1a-4ca5-bdd0-b045cdfd212e';
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
    $pane->uuid = '690f1aa5-7e1a-4ca5-bdd0-b045cdfd212e';
    $display->content['new-690f1aa5-7e1a-4ca5-bdd0-b045cdfd212e'] = $pane;
    $display->panels['right'][0] = 'new-690f1aa5-7e1a-4ca5-bdd0-b045cdfd212e';
    $pane = new stdClass();
    $pane->pid = 'new-f15fbc82-c404-4034-89dc-fa8ee4428519';
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
    $pane->uuid = 'f15fbc82-c404-4034-89dc-fa8ee4428519';
    $display->content['new-f15fbc82-c404-4034-89dc-fa8ee4428519'] = $pane;
    $display->panels['right'][1] = 'new-f15fbc82-c404-4034-89dc-fa8ee4428519';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_8';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Privado Tutor sidebar right',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      1 => array(
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
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'messages/view/*
cart/checkout
cart
mis-conversaciones/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_site_template_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'navbar' => NULL,
      'header' => NULL,
      'hero' => NULL,
      'main' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'headerrow' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58eb499f-1b31-4ec8-a0ee-fb44d3641492';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>

<div class="logo-footer span1">
<img src="<?php print $imagenes; ?>ttm-footer.png" />
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home-footer-logo',
      'css_class' => 'span1 offset1 semibold footer-logo',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a641c58d-23d8-4417-9df9-92451539e959';
    $display->content['new-a641c58d-23d8-4417-9df9-92451539e959'] = $pane;
    $display->panels['footer'][0] = 'new-a641c58d-23d8-4417-9df9-92451539e959';
    $pane = new stdClass();
    $pane->pid = 'new-8aa5b4e4-c3d8-40ab-9c93-8d138604c6af';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menues';
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
      'css_id' => 'ttm-footer-menu',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8aa5b4e4-c3d8-40ab-9c93-8d138604c6af';
    $display->content['new-8aa5b4e4-c3d8-40ab-9c93-8d138604c6af'] = $pane;
    $display->panels['footer'][1] = 'new-8aa5b4e4-c3d8-40ab-9c93-8d138604c6af';
    $pane = new stdClass();
    $pane->pid = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_top';
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
      'css_id' => 'header-top',
      'css_class' => 'span48',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $display->content['new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67'] = $pane;
    $display->panels['header'][0] = 'new-cc75e3d8-9bc5-43df-bde4-f11bfb55fb67';
    $pane = new stdClass();
    $pane->pid = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'logo',
      'css_class' => 'span47 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $display->content['new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342'] = $pane;
    $display->panels['header'][1] = 'new-c9d9f591-4bdf-4024-b3c8-cb21d4cd7342';
    $pane = new stdClass();
    $pane->pid = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-men-anonimo';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 6,
              3 => 5,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $display->content['new-0bdce174-28d0-49db-8c5a-1f9eec1873a2'] = $pane;
    $display->panels['header'][2] = 'new-0bdce174-28d0-49db-8c5a-1f9eec1873a2';
    $pane = new stdClass();
    $pane->pid = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-emprendedor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $display->content['new-e4763ce2-2f48-4855-b8a6-45fc16f63548'] = $pane;
    $display->panels['header'][3] = 'new-e4763ce2-2f48-4855-b8a6-45fc16f63548';
    $pane = new stdClass();
    $pane->pid = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-tutor';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
            ),
          ),
          'context' => 'logged-in-user',
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
      'css_id' => 'ttm-menu',
      'css_class' => 'menu-home span48',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $display->content['new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d'] = $pane;
    $display->panels['header'][4] = 'new-c9ca6a1e-fe24-4fe4-abf2-467c9a19925d';
    $pane = new stdClass();
    $pane->pid = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane->panel = 'main';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $display->content['new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff'] = $pane;
    $display->panels['main'][0] = 'new-51fe0f73-ce17-450e-af68-a1bf1b4ec5ff';
    $pane = new stdClass();
    $pane->pid = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'conversacion',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $display->content['new-b4fc6790-6597-402b-82a2-c388d3ae6bc8'] = $pane;
    $display->panels['main'][1] = 'new-b4fc6790-6597-402b-82a2-c388d3ae6bc8';
    $pane = new stdClass();
    $pane->pid = 'new-eea1e49b-735a-4d46-aa5f-43cd22330480';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'privado_tutor_estadisticas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'context' => array(
        0 => 'logged-in-user',
      ),
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
    $pane->uuid = 'eea1e49b-735a-4d46-aa5f-43cd22330480';
    $display->content['new-eea1e49b-735a-4d46-aa5f-43cd22330480'] = $pane;
    $display->panels['right'][0] = 'new-eea1e49b-735a-4d46-aa5f-43cd22330480';
    $pane = new stdClass();
    $pane->pid = 'new-f15fbc82-c404-4034-89dc-fa8ee4428519';
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
    $pane->uuid = 'f15fbc82-c404-4034-89dc-fa8ee4428519';
    $display->content['new-f15fbc82-c404-4034-89dc-fa8ee4428519'] = $pane;
    $display->panels['right'][1] = 'new-f15fbc82-c404-4034-89dc-fa8ee4428519';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_8'] = $handler;

  return $export;
}
