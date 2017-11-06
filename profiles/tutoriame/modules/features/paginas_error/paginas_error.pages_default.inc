<?php
/**
 * @file
 * paginas_error.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function paginas_error_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = '403_acceso_denegado';
  $page->task = 'page';
  $page->admin_title = '403 Acceso Denegado';
  $page->admin_description = '';
  $page->path = 'acceso-denegado';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_403_acceso_denegado_panel_context';
  $handler->task = 'page';
  $handler->subtask = '403_acceso_denegado';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Acceso denegado',
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
  $display->title = 'Error 403 - Acceso Denegado';
  $display->uuid = '6b1e74be-a250-4f2c-9090-d20b4eebfda6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9228f720-65fa-4081-811b-a0324d150f45';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-ttm_403';
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
      'css_id' => 'pagina-error',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9228f720-65fa-4081-811b-a0324d150f45';
    $display->content['new-9228f720-65fa-4081-811b-a0324d150f45'] = $pane;
    $display->panels['row'][0] = 'new-9228f720-65fa-4081-811b-a0324d150f45';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9228f720-65fa-4081-811b-a0324d150f45';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['403_acceso_denegado'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = '404_contenido_no_encontrado';
  $page->task = 'page';
  $page->admin_title = '404 Contenido no encontrado';
  $page->admin_description = '';
  $page->path = 'contenido-no-encontrado';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_404_contenido_no_encontrado_panel_context';
  $handler->task = 'page';
  $handler->subtask = '404_contenido_no_encontrado';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contenido no encontrado',
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
  $display->uuid = '76952c69-c8a5-46e5-be38-e81cfdfa4b00';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b615ccbb-4879-48ac-b1ef-e849e37dbc51';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-ttm_404';
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
      'css_id' => 'pagina-error',
      'css_class' => 'span32 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b615ccbb-4879-48ac-b1ef-e849e37dbc51';
    $display->content['new-b615ccbb-4879-48ac-b1ef-e849e37dbc51'] = $pane;
    $display->panels['row'][0] = 'new-b615ccbb-4879-48ac-b1ef-e849e37dbc51';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b615ccbb-4879-48ac-b1ef-e849e37dbc51';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['404_contenido_no_encontrado'] = $page;

  return $pages;

}
