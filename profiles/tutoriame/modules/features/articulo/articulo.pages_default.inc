<?php
/**
 * @file
 * articulo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function articulo_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Contenido',
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
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'articulo' => 'articulo',
            ),
          ),
          'context' => 'argument_node_edit_1',
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
  $display->uuid = 'c97dbd50-af07-415a-a7d5-1d9b23ea2e19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
    $pane->panel = 'row';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '<h2 class="plus verde">Contenidos</h2>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'formulario-contenido',
      'css_class' => 'formulario span20 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
    $display->content['new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1'] = $pane;
    $display->panels['row'][0] = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0a2a96a5-22ea-4751-86d7-593c1cc7beb1';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Contenido',
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
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'articulo' => 'articulo',
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
      ),
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
  $display->uuid = 'f1ca3042-bafc-4db0-a186-9966b591456c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c6ed4bb2-b7ec-4467-b6a6-ee5a39b528d5';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'contenido-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-contenido',
      'css_class' => 'span25 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c6ed4bb2-b7ec-4467-b6a6-ee5a39b528d5';
    $display->content['new-c6ed4bb2-b7ec-4467-b6a6-ee5a39b528d5'] = $pane;
    $display->panels['row'][0] = 'new-c6ed4bb2-b7ec-4467-b6a6-ee5a39b528d5';
    $pane = new stdClass();
    $pane->pid = 'new-41d67046-c755-4953-acf4-50fdb1ac183b';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'contenido-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-contenido-imagenes',
      'css_class' => 'span25 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '41d67046-c755-4953-acf4-50fdb1ac183b';
    $display->content['new-41d67046-c755-4953-acf4-50fdb1ac183b'] = $pane;
    $display->panels['row'][1] = 'new-41d67046-c755-4953-acf4-50fdb1ac183b';
    $pane = new stdClass();
    $pane->pid = 'new-96323048-5def-4c72-84d4-4c0be8a71aad';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'contenido-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-contenido-archivos',
      'css_class' => 'span25 offset1',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '96323048-5def-4c72-84d4-4c0be8a71aad';
    $display->content['new-96323048-5def-4c72-84d4-4c0be8a71aad'] = $pane;
    $display->panels['row'][2] = 'new-96323048-5def-4c72-84d4-4c0be8a71aad';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
