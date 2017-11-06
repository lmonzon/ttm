<?php
/**
 * @file
 * mis_conversaciones.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function mis_conversaciones_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mis_conversaciones';
  $page->task = 'page';
  $page->admin_title = 'Mis conversaciones';
  $page->admin_description = '';
  $page->path = 'mis-conversaciones/!conversacion';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'conversacion' => array(
      'settings' => array(),
      'identifier' => 'Sin contexto',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mis_conversaciones_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mis_conversaciones';
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
  $display->uuid = 'fae1e0ea-543c-4ba3-87a8-a68ad48e9fc4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-15cb9367-09be-4265-832b-7e35b690372e';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'tutoriame_privatemsg-tutoriame_privatemsg-threads';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<h3 class="verde span21 offset1">Mis conversaciones</h3>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'mis-conversaciones',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15cb9367-09be-4265-832b-7e35b690372e';
    $display->content['new-15cb9367-09be-4265-832b-7e35b690372e'] = $pane;
    $display->panels['row'][0] = 'new-15cb9367-09be-4265-832b-7e35b690372e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mis_conversaciones'] = $page;

  return $pages;

}
