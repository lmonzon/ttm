<?php
/**
 * @file
 * foros.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function foros_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'forum_http_response';
  $handler->task = 'forum';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '403',
    'destination' => '',
  );
  $export['forum_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'forum_panel_context';
  $handler->task = 'forum';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'foro tutoriame',
    'no_blocks' => 0,
    'css_id' => 'forum',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'forum_container',
          'settings' => array(
            'container' => '1',
          ),
          'context' => 'argument_forum_id_1',
        ),
        2 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_forum_id_1',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        4 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'chequeo que el usuario corresponda a la institucion del foro',
            'php' => '$foro = $contexts[\'argument_forum_id_1\']->data;
$user = $contexts[\'logged-in-user\']->data;
$institucion_foro = $foro->field_institucion[LANGUAGE_NONE][0][\'target_id\'];
$perfiles = profile2_load_by_user($user->uid);
$institucion_usuario = isset($perfiles[\'main\']) ? $institucion_usuario = $perfiles[\'main\']->field_institucion[LANGUAGE_NONE][0][\'target_id\'] : NULL;
return $institucion_foro == $institucion_usuario ;
',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%forum:name';
  $display->uuid = '042e4aab-fd72-4ec0-a8dc-0ef0d273cafe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c25dce3b-b68d-4d3d-befe-66edd1bf2908';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'tema_de_foro-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'foro-encabezado',
      'css_class' => 'span30 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c25dce3b-b68d-4d3d-befe-66edd1bf2908';
    $display->content['new-c25dce3b-b68d-4d3d-befe-66edd1bf2908'] = $pane;
    $display->panels['center'][0] = 'new-c25dce3b-b68d-4d3d-befe-66edd1bf2908';
    $pane = new stdClass();
    $pane->pid = 'new-8464f57b-ff35-494d-b4f8-fd513c35810c';
    $pane->panel = 'center';
    $pane->type = 'forum_list';
    $pane->subtype = 'forum_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_forum_id_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'foro-lista-de-foros',
      'css_class' => 'span30 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '8464f57b-ff35-494d-b4f8-fd513c35810c';
    $display->content['new-8464f57b-ff35-494d-b4f8-fd513c35810c'] = $pane;
    $display->panels['center'][1] = 'new-8464f57b-ff35-494d-b4f8-fd513c35810c';
    $pane = new stdClass();
    $pane->pid = 'new-a39058e4-fc78-4a3b-9987-2ec2bee6de35';
    $pane->panel = 'center';
    $pane->type = 'forum_topic_list';
    $pane->subtype = 'forum_topic_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_forum_id_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'foro-lista-temas',
      'css_class' => 'span30 offset1',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = 'a39058e4-fc78-4a3b-9987-2ec2bee6de35';
    $display->content['new-a39058e4-fc78-4a3b-9987-2ec2bee6de35'] = $pane;
    $display->panels['center'][2] = 'new-a39058e4-fc78-4a3b-9987-2ec2bee6de35';
    $pane = new stdClass();
    $pane->pid = 'new-2ab272a5-04f6-4e74-9524-296ca2ab2a3f';
    $pane->panel = 'center';
    $pane->type = 'forum_topic_list_sort';
    $pane->subtype = 'forum_topic_list_sort';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_forum_id_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2ab272a5-04f6-4e74-9524-296ca2ab2a3f';
    $display->content['new-2ab272a5-04f6-4e74-9524-296ca2ab2a3f'] = $pane;
    $display->panels['center'][3] = 'new-2ab272a5-04f6-4e74-9524-296ca2ab2a3f';
    $pane = new stdClass();
    $pane->pid = 'new-a821af64-2390-4bd1-bfaa-9a0193682f32';
    $pane->panel = 'center';
    $pane->type = 'forum_topic_legend';
    $pane->subtype = 'forum_topic_legend';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_forum_id_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = 'a821af64-2390-4bd1-bfaa-9a0193682f32';
    $display->content['new-a821af64-2390-4bd1-bfaa-9a0193682f32'] = $pane;
    $display->panels['center'][4] = 'new-a821af64-2390-4bd1-bfaa-9a0193682f32';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['forum_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Tema de foro',
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
              'forum' => 'forum',
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
  $display->uuid = '3abdbd0f-d986-4138-b094-37bd09f5ba40';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1ce19b5a-1892-43ac-824b-4be3273dc0d7';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'tema_de_foro-panel_pane_2';
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
    $pane->uuid = '1ce19b5a-1892-43ac-824b-4be3273dc0d7';
    $display->content['new-1ce19b5a-1892-43ac-824b-4be3273dc0d7'] = $pane;
    $display->panels['row'][0] = 'new-1ce19b5a-1892-43ac-824b-4be3273dc0d7';
    $pane = new stdClass();
    $pane->pid = 'new-c131d8ac-b4b1-4b5f-81b7-62d264539e2b';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'tema_de_foro-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-tema-de-foro',
      'css_class' => 'span25 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c131d8ac-b4b1-4b5f-81b7-62d264539e2b';
    $display->content['new-c131d8ac-b4b1-4b5f-81b7-62d264539e2b'] = $pane;
    $display->panels['row'][1] = 'new-c131d8ac-b4b1-4b5f-81b7-62d264539e2b';
    $pane = new stdClass();
    $pane->pid = 'new-b72ff388-f399-412d-be74-5018fbd9f21c';
    $pane->panel = 'row';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<div class="medium bold">Deja un comentario</div>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-temas-de-foro-comentar',
      'css_class' => 'span25 offset1',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b72ff388-f399-412d-be74-5018fbd9f21c';
    $display->content['new-b72ff388-f399-412d-be74-5018fbd9f21c'] = $pane;
    $display->panels['row'][2] = 'new-b72ff388-f399-412d-be74-5018fbd9f21c';
    $pane = new stdClass();
    $pane->pid = 'new-bb2c0c4c-f9fa-446a-8048-7a6059d09153';
    $pane->panel = 'row';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '0',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'nodo-tema-de-foro-comentarios',
      'css_class' => 'span25 offset1',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bb2c0c4c-f9fa-446a-8048-7a6059d09153';
    $display->content['new-bb2c0c4c-f9fa-446a-8048-7a6059d09153'] = $pane;
    $display->panels['row'][3] = 'new-bb2c0c4c-f9fa-446a-8048-7a6059d09153';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  return $export;
}
