<?php
/**
 * @file
 * busqueda_tutores.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function busqueda_tutores_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'buscar_tutores';
  $page->task = 'page';
  $page->admin_title = 'Buscar Tutores';
  $page->admin_description = '';
  $page->path = 'buscar-tutores';
  $page->access = array(
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
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
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
  $handler->name = 'page_buscar_tutores_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'buscar_tutores';
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
  $display->layout = 'tutoriame_2_cols';
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
  $display->uuid = '74031cd1-65da-4620-82a4-0f6e7809a2ce';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8321088f-0927-41ed-979b-0bc5b086a8a0';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-buscar_tutores-page_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'buscar-tutores-filtros',
      'css_class' => 'span13 formulario-expuesto',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8321088f-0927-41ed-979b-0bc5b086a8a0';
    $display->content['new-8321088f-0927-41ed-979b-0bc5b086a8a0'] = $pane;
    $display->panels['left'][0] = 'new-8321088f-0927-41ed-979b-0bc5b086a8a0';
    $pane = new stdClass();
    $pane->pid = 'new-b45dcc79-8883-4424-9f44-5f1773cf1903';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'buscar_tutores';
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
      'display' => 'page_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'buscar-tutores-listado',
      'css_class' => 'span23',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b45dcc79-8883-4424-9f44-5f1773cf1903';
    $display->content['new-b45dcc79-8883-4424-9f44-5f1773cf1903'] = $pane;
    $display->panels['main'][0] = 'new-b45dcc79-8883-4424-9f44-5f1773cf1903';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['buscar_tutores'] = $page;

  return $pages;

}
