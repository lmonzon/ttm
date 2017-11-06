<?php
/**
 * @file
 * busqueda_proyectos.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function busqueda_proyectos_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'buscar_proyectos';
  $page->task = 'page';
  $page->admin_title = 'Buscar Proyectos';
  $page->admin_description = '';
  $page->path = 'buscar-proyectos';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
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
  $handler->name = 'page_buscar_proyectos_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'buscar_proyectos';
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
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'tutoriame_2_cols';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'headerrow' => NULL,
      'left' => NULL,
      'main' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Buscar Proyectos';
  $display->uuid = '3ae0a1d4-b2a6-4de5-beae-722a63cc93c3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79a206c3-ece4-4981-933c-602dc2c8c47e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-buscar_proyectos-page_1';
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
      'css_id' => 'buscar-proyectos-filtros',
      'css_class' => 'span13 formulario-expuesto',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79a206c3-ece4-4981-933c-602dc2c8c47e';
    $display->content['new-79a206c3-ece4-4981-933c-602dc2c8c47e'] = $pane;
    $display->panels['left'][0] = 'new-79a206c3-ece4-4981-933c-602dc2c8c47e';
    $pane = new stdClass();
    $pane->pid = 'new-0bd796bb-59a6-442c-b551-abe2e16c3142';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'buscar_proyectos';
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
      'css_id' => 'buscar-proyectos-listado',
      'css_class' => 'span23',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bd796bb-59a6-442c-b551-abe2e16c3142';
    $display->content['new-0bd796bb-59a6-442c-b551-abe2e16c3142'] = $pane;
    $display->panels['main'][0] = 'new-0bd796bb-59a6-442c-b551-abe2e16c3142';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['buscar_proyectos'] = $page;

  return $pages;

}
