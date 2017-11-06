<?php
/**
 * @file
 * contrato.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function contrato_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Contrato',
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
              'contrato' => 'contrato',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'permisos de usuarios',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'contrato_participante',
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
  $display->title = '';
  $display->uuid = 'e3e1db14-783d-4548-9f1b-a489b8ca1f5e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ce96ae4d-2cd3-47f4-8a85-969d6c483855';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'contrato-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-contrato',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce96ae4d-2cd3-47f4-8a85-969d6c483855';
    $display->content['new-ce96ae4d-2cd3-47f4-8a85-969d6c483855'] = $pane;
    $display->panels['row'][0] = 'new-ce96ae4d-2cd3-47f4-8a85-969d6c483855';
    $pane = new stdClass();
    $pane->pid = 'new-70c0f667-49eb-4839-84ef-7adf47bdace8';
    $pane->panel = 'row';
    $pane->type = 'block';
    $pane->subtype = 'tutoriame_contratar-ttm_contratar-aprobar_contrato';
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
      'css_id' => 'boton-contratar',
      'css_class' => 'botones-proyecto',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '70c0f667-49eb-4839-84ef-7adf47bdace8';
    $display->content['new-70c0f667-49eb-4839-84ef-7adf47bdace8'] = $pane;
    $display->panels['row'][1] = 'new-70c0f667-49eb-4839-84ef-7adf47bdace8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ce96ae4d-2cd3-47f4-8a85-969d6c483855';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}
