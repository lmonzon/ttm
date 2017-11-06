<?php
/**
 * @file
 * videoconferencia.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function videoconferencia_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'videoconferencia_proyecto';
  $page->task = 'page';
  $page->admin_title = 'Videoconferencia proyecto';
  $page->admin_description = 'Muestra la videoconferencia del proyecto.';
  $page->path = 'videoconferencia/%node';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Proyecto',
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
  $handler->name = 'page_videoconferencia_proyecto_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'videoconferencia_proyecto';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Videoconferencia',
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
          'name' => 'videoconferencia_disponible',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
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
  $display->title = '%node:title';
  $display->uuid = 'a6abb5a8-47d4-4c52-ab2a-cefd319b7923';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-622b0788-daea-43e0-9a4e-5ce043bad4ef';
    $pane->panel = 'row';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tokbox';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'opentok_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '622b0788-daea-43e0-9a4e-5ce043bad4ef';
    $display->content['new-622b0788-daea-43e0-9a4e-5ce043bad4ef'] = $pane;
    $display->panels['row'][0] = 'new-622b0788-daea-43e0-9a4e-5ce043bad4ef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-622b0788-daea-43e0-9a4e-5ce043bad4ef';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['videoconferencia_proyecto'] = $page;

  return $pages;

}
