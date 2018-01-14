<?php
/**
 * @file
 * site_default_template.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function site_default_template_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_top';
  $mini->category = '';
  $mini->admin_title = 'header-top';
  $mini->admin_description = 'Minipanel con Slogan del sitio y Boxes de Login-Logout y Redes Sociales';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'f42966b7-a95b-4a90-be4d-3ca4b176cb01';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9610b027-3aaa-4321-8a8d-b2e594eb1882';
    $pane->panel = 'row';
    $pane->type = 'page_slogan';
    $pane->subtype = 'page_slogan';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'slogan',
      'css_class' => 'span30 offset1 titulo-tres verde',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9610b027-3aaa-4321-8a8d-b2e594eb1882';
    $display->content['new-9610b027-3aaa-4321-8a8d-b2e594eb1882'] = $pane;
    $display->panels['row'][0] = 'new-9610b027-3aaa-4321-8a8d-b2e594eb1882';
    $pane = new stdClass();
    $pane->pid = 'new-63e336b3-cf86-42e5-985d-36222f25d2ab';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-ttm_registro_ingreso';
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
      'css_id' => 'registro-ingreso',
      'css_class' => 'span8  titulo-tres verde offset2',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '63e336b3-cf86-42e5-985d-36222f25d2ab';
    $display->content['new-63e336b3-cf86-42e5-985d-36222f25d2ab'] = $pane;
    $display->panels['row'][1] = 'new-63e336b3-cf86-42e5-985d-36222f25d2ab';
    $pane = new stdClass();
    $pane->pid = 'new-1c09aacd-145b-436a-87b4-9ba8f1cbb339';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-ttm_redes_sociales';
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
      'css_id' => 'redes-sociales',
      'css_class' => 'span7',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1c09aacd-145b-436a-87b4-9ba8f1cbb339';
    $display->content['new-1c09aacd-145b-436a-87b4-9ba8f1cbb339'] = $pane;
    $display->panels['row'][2] = 'new-1c09aacd-145b-436a-87b4-9ba8f1cbb339';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9610b027-3aaa-4321-8a8d-b2e594eb1882';
  $mini->display = $display;
  $export['header_top'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ttm_footer_menu_colum1';
  $mini->category = '';
  $mini->admin_title = 'ttm_footer_menu_colum1';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_everywhere_row';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c6a03578-98cc-409f-aaeb-0670a28143ed';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-04bb02f0-d4c8-4464-9f89-5e8eede5b34b';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-footer-acerca';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h4>Acerca de  Experto Online</h4>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'menu-footer-top',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04bb02f0-d4c8-4464-9f89-5e8eede5b34b';
    $display->content['new-04bb02f0-d4c8-4464-9f89-5e8eede5b34b'] = $pane;
    $display->panels['row'][0] = 'new-04bb02f0-d4c8-4464-9f89-5e8eede5b34b';
    $pane = new stdClass();
    $pane->pid = 'new-66fba25a-e429-45b4-8626-57aa2e633cf1';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-footer-contactos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h4>Contactos</h4>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '66fba25a-e429-45b4-8626-57aa2e633cf1';
    $display->content['new-66fba25a-e429-45b4-8626-57aa2e633cf1'] = $pane;
    $display->panels['row'][1] = 'new-66fba25a-e429-45b4-8626-57aa2e633cf1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-04bb02f0-d4c8-4464-9f89-5e8eede5b34b';
  $mini->display = $display;
  $export['ttm_footer_menu_colum1'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ttm_footer_menu_colum2';
  $mini->category = '';
  $mini->admin_title = 'ttm_footer_menu_colum2';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_everywhere_row';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a185b53-074d-48a5-a6fd-5746016adca2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-52c56de1-8741-448a-9f85-fb51f7c8990c';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-footer-servicios';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h4>Servicios</h4>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'menu-footer-top',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52c56de1-8741-448a-9f85-fb51f7c8990c';
    $display->content['new-52c56de1-8741-448a-9f85-fb51f7c8990c'] = $pane;
    $display->panels['row'][0] = 'new-52c56de1-8741-448a-9f85-fb51f7c8990c';
    $pane = new stdClass();
    $pane->pid = 'new-28d53cbd-6736-46cc-a19f-10a747b722d8';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-footer-prensa';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h4>Prensa</h4>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '28d53cbd-6736-46cc-a19f-10a747b722d8';
    $display->content['new-28d53cbd-6736-46cc-a19f-10a747b722d8'] = $pane;
    $display->panels['row'][1] = 'new-28d53cbd-6736-46cc-a19f-10a747b722d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-52c56de1-8741-448a-9f85-fb51f7c8990c';
  $mini->display = $display;
  $export['ttm_footer_menu_colum2'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ttm_footer_menu_colum3';
  $mini->category = '';
  $mini->admin_title = 'ttm_footer_menu_colum3';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_everywhere_row';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '29af0e27-000e-45fd-9088-d411a758f66f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ab7a472c-98ed-4e42-b9f9-8e249a20e0ab';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-ttm-menu-footer-plataforma';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h4>Plataforma</h4>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'menu-footer-top',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab7a472c-98ed-4e42-b9f9-8e249a20e0ab';
    $display->content['new-ab7a472c-98ed-4e42-b9f9-8e249a20e0ab'] = $pane;
    $display->panels['row'][0] = 'new-ab7a472c-98ed-4e42-b9f9-8e249a20e0ab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ab7a472c-98ed-4e42-b9f9-8e249a20e0ab';
  $mini->display = $display;
  $export['ttm_footer_menu_colum3'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ttm_footer_menues';
  $mini->category = '';
  $mini->admin_title = 'ttm_footer_menues';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_everywhere_row';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '61ada2ea-74a4-4c3a-ae23-186f8933da7c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-247cb25d-72dd-4002-9445-3aeed8710fa9';
    $pane->panel = 'row';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menu_colum1';
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
      'css_class' => 'gris-seis normal-plus span8',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '247cb25d-72dd-4002-9445-3aeed8710fa9';
    $display->content['new-247cb25d-72dd-4002-9445-3aeed8710fa9'] = $pane;
    $display->panels['row'][0] = 'new-247cb25d-72dd-4002-9445-3aeed8710fa9';
    $pane = new stdClass();
    $pane->pid = 'new-91eeec25-686d-4608-9fa4-d32aa4504acd';
    $pane->panel = 'row';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menu_colum2';
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
      'css_class' => 'gris-seis normal-plus span8 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '91eeec25-686d-4608-9fa4-d32aa4504acd';
    $display->content['new-91eeec25-686d-4608-9fa4-d32aa4504acd'] = $pane;
    $display->panels['row'][1] = 'new-91eeec25-686d-4608-9fa4-d32aa4504acd';
    $pane = new stdClass();
    $pane->pid = 'new-21f4d5f7-5fb8-4fc6-95a7-634c279d3ba2';
    $pane->panel = 'row';
    $pane->type = 'panels_mini';
    $pane->subtype = 'ttm_footer_menu_colum3';
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
      'css_class' => 'gris-seis normal-plus span8 offset1',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '21f4d5f7-5fb8-4fc6-95a7-634c279d3ba2';
    $display->content['new-21f4d5f7-5fb8-4fc6-95a7-634c279d3ba2'] = $pane;
    $display->panels['row'][2] = 'new-21f4d5f7-5fb8-4fc6-95a7-634c279d3ba2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-247cb25d-72dd-4002-9445-3aeed8710fa9';
  $mini->display = $display;
  $export['ttm_footer_menues'] = $mini;

  return $export;
}
