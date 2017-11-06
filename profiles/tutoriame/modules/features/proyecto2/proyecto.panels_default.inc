<?php
/**
 * @file
 * proyecto.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function proyecto_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'nodo_proyecto_autor';
  $mini->category = '';
  $mini->admin_title = 'nodo_proyecto_autor_privado';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Usuario',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'current',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->relationships = array(
    0 => array(
      'identifier' => 'Usuario desde Nodo (en node.node_author)',
      'keyword' => 'user_2',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => NULL,
      'id' => 1,
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
  $display->uuid = '51c99229-af5c-44cf-939d-64d2dd2ab753';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3b958c0-c157-478d-8b9c-e6bc79414101';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_3';
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
    $pane->uuid = 'c3b958c0-c157-478d-8b9c-e6bc79414101';
    $display->content['new-c3b958c0-c157-478d-8b9c-e6bc79414101'] = $pane;
    $display->panels['row'][0] = 'new-c3b958c0-c157-478d-8b9c-e6bc79414101';
    $pane = new stdClass();
    $pane->pid = 'new-95b1518e-eae6-4f0c-aefe-66441bc8079b';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_22';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '95b1518e-eae6-4f0c-aefe-66441bc8079b';
    $display->content['new-95b1518e-eae6-4f0c-aefe-66441bc8079b'] = $pane;
    $display->panels['row'][1] = 'new-95b1518e-eae6-4f0c-aefe-66441bc8079b';
    $pane = new stdClass();
    $pane->pid = 'new-b1750c04-f039-4a9e-bf87-231a611fc421';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b1750c04-f039-4a9e-bf87-231a611fc421';
    $display->content['new-b1750c04-f039-4a9e-bf87-231a611fc421'] = $pane;
    $display->panels['row'][2] = 'new-b1750c04-f039-4a9e-bf87-231a611fc421';
    $pane = new stdClass();
    $pane->pid = 'new-dc320e8d-990f-4445-b9dc-9bcb07bd935f';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'conversaciones_creadas-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dc320e8d-990f-4445-b9dc-9bcb07bd935f';
    $display->content['new-dc320e8d-990f-4445-b9dc-9bcb07bd935f'] = $pane;
    $display->panels['row'][3] = 'new-dc320e8d-990f-4445-b9dc-9bcb07bd935f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['nodo_proyecto_autor'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'nodo_proyecto_categorias';
  $mini->category = '';
  $mini->admin_title = 'nodo_proyecto_categorias';
  $mini->admin_description = '';
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
  $display->uuid = 'cf2a4d57-519f-4360-839f-e103af61f1df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a1b99470-f391-44f9-a625-da20459cb3e0';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'categoria-actual-proyecto',
      'css_class' => 'span11 clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a1b99470-f391-44f9-a625-da20459cb3e0';
    $display->content['new-a1b99470-f391-44f9-a625-da20459cb3e0'] = $pane;
    $display->panels['row'][0] = 'new-a1b99470-f391-44f9-a625-da20459cb3e0';
    $pane = new stdClass();
    $pane->pid = 'new-c73e478f-0e6e-4305-9db9-67f192e4a003';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'categoria-proyectos-publicados',
      'css_class' => 'span9 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c73e478f-0e6e-4305-9db9-67f192e4a003';
    $display->content['new-c73e478f-0e6e-4305-9db9-67f192e4a003'] = $pane;
    $display->panels['row'][1] = 'new-c73e478f-0e6e-4305-9db9-67f192e4a003';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['nodo_proyecto_categorias'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'proyecto_nodo';
  $mini->category = '';
  $mini->admin_title = 'proyecto_nodo';
  $mini->admin_description = '';
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
  $display->uuid = '97b592e2-ead0-423d-91de-4b161d9cb3ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c99ef08-b1c2-4b1d-9ad7-27aedba75a71';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyecto-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyecto-encabezado',
      'css_class' => 'span32 offset1 clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c99ef08-b1c2-4b1d-9ad7-27aedba75a71';
    $display->content['new-0c99ef08-b1c2-4b1d-9ad7-27aedba75a71'] = $pane;
    $display->panels['row'][0] = 'new-0c99ef08-b1c2-4b1d-9ad7-27aedba75a71';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0c99ef08-b1c2-4b1d-9ad7-27aedba75a71';
  $mini->display = $display;
  $export['proyecto_nodo'] = $mini;

  return $export;
}
