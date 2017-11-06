<?php
/**
 * @file
 * gcoop_modal.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gcoop_modal_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Overlays',
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
        3 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'is overlay',
            'php' => 'if (overlay_get_mode() == \'child\') {
  return TRUE;
} else {
  return FALSE;
}',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->uuid = '31f67e8b-3ca6-4b52-afbf-30e3869c10c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c34c303e-1190-4736-b36a-0b1dcac16641';
    $pane->panel = 'row';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
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
    $pane->uuid = 'c34c303e-1190-4736-b36a-0b1dcac16641';
    $display->content['new-c34c303e-1190-4736-b36a-0b1dcac16641'] = $pane;
    $display->panels['row'][0] = 'new-c34c303e-1190-4736-b36a-0b1dcac16641';
    $pane = new stdClass();
    $pane->pid = 'new-af5485d8-1c8c-40e5-8b9e-4204334640f0';
    $pane->panel = 'row';
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
    $pane->uuid = 'af5485d8-1c8c-40e5-8b9e-4204334640f0';
    $display->content['new-af5485d8-1c8c-40e5-8b9e-4204334640f0'] = $pane;
    $display->panels['row'][1] = 'new-af5485d8-1c8c-40e5-8b9e-4204334640f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-af5485d8-1c8c-40e5-8b9e-4204334640f0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;

  return $export;
}
