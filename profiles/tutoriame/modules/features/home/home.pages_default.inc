<?php
/**
 * @file
 * home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'home';
  $page->admin_description = 'Panel de inicio';
  $page->path = 'inicio';
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
  $handler->name = 'page_home_http_response';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'http_response';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Home usuario autenticado',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'user',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 5,
              3 => 6,
              4 => 7,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
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
  $display->uuid = '2926153e-4488-4a9f-8011-110eb0c3e806';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-39ff83b1-94d3-4619-9c8f-73119bb632e1';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'home-slide',
      'css_class' => 'span48',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '39ff83b1-94d3-4619-9c8f-73119bb632e1';
    $display->content['new-39ff83b1-94d3-4619-9c8f-73119bb632e1'] = $pane;
    $display->panels['row'][0] = 'new-39ff83b1-94d3-4619-9c8f-73119bb632e1';
    $pane = new stdClass();
    $pane->pid = 'new-77e957b2-6636-42a0-9b04-5733167417b7';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'boxes-home_ttm_pasos';
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
      'css_class' => 'pasos-ttm span48',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '77e957b2-6636-42a0-9b04-5733167417b7';
    $display->content['new-77e957b2-6636-42a0-9b04-5733167417b7'] = $pane;
    $display->panels['row'][1] = 'new-77e957b2-6636-42a0-9b04-5733167417b7';
    $pane = new stdClass();
    $pane->pid = 'new-132f486b-d4d8-4d04-894d-4f0e9b4b315b';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomias-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'auspicios-home',
      'css_class' => 'span42 offset3',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '132f486b-d4d8-4d04-894d-4f0e9b4b315b';
    $display->content['new-132f486b-d4d8-4d04-894d-4f0e9b4b315b'] = $pane;
    $display->panels['row'][2] = 'new-132f486b-d4d8-4d04-894d-4f0e9b4b315b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
