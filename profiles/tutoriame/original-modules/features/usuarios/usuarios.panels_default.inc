<?php
/**
 * @file
 * usuarios.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function usuarios_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'privado_emprendedor_estadisticas';
  $mini->category = '';
  $mini->admin_title = 'privado_emprendedor_estadisticas';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Usuario',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'current',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
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
  $display->uuid = '52e3501e-7184-4557-8e51-9614d39d4f6a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ce29ee25-5047-4c37-8ace-a89f47a6c587';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-proyectos-activos',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce29ee25-5047-4c37-8ace-a89f47a6c587';
    $display->content['new-ce29ee25-5047-4c37-8ace-a89f47a6c587'] = $pane;
    $display->panels['row'][0] = 'new-ce29ee25-5047-4c37-8ace-a89f47a6c587';
    $pane = new stdClass();
    $pane->pid = 'new-b91ef082-5bc1-42ce-a6fb-d2eba1e5c212';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-puntos-ttm',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b91ef082-5bc1-42ce-a6fb-d2eba1e5c212';
    $display->content['new-b91ef082-5bc1-42ce-a6fb-d2eba1e5c212'] = $pane;
    $display->panels['row'][1] = 'new-b91ef082-5bc1-42ce-a6fb-d2eba1e5c212';
    $pane = new stdClass();
    $pane->pid = 'new-fa7796ac-3558-45b6-842a-18c94d25bdbf';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_15';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-contratos-realizados',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fa7796ac-3558-45b6-842a-18c94d25bdbf';
    $display->content['new-fa7796ac-3558-45b6-842a-18c94d25bdbf'] = $pane;
    $display->panels['row'][2] = 'new-fa7796ac-3558-45b6-842a-18c94d25bdbf';
    $pane = new stdClass();
    $pane->pid = 'new-10ae4c48-e8cb-4d73-a351-f185515adf92';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'conversaciones_creadas-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-conversaciones-creadas',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '10ae4c48-e8cb-4d73-a351-f185515adf92';
    $display->content['new-10ae4c48-e8cb-4d73-a351-f185515adf92'] = $pane;
    $display->panels['row'][3] = 'new-10ae4c48-e8cb-4d73-a351-f185515adf92';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['privado_emprendedor_estadisticas'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'privado_tutor_estadisticas';
  $mini->category = '';
  $mini->admin_title = 'privado_tutor_estadisticas';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Usuario',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '52e3501e-7184-4557-8e51-9614d39d4f6a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f9fb395b-cef4-4611-acee-8053acf37443';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_13';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-proyectos-activos',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f9fb395b-cef4-4611-acee-8053acf37443';
    $display->content['new-f9fb395b-cef4-4611-acee-8053acf37443'] = $pane;
    $display->panels['row'][0] = 'new-f9fb395b-cef4-4611-acee-8053acf37443';
    $pane = new stdClass();
    $pane->pid = 'new-26df9f3d-38c1-4913-81b0-6ef3361766df';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_21';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-puntos-vendidos',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '26df9f3d-38c1-4913-81b0-6ef3361766df';
    $display->content['new-26df9f3d-38c1-4913-81b0-6ef3361766df'] = $pane;
    $display->panels['row'][1] = 'new-26df9f3d-38c1-4913-81b0-6ef3361766df';
    $pane = new stdClass();
    $pane->pid = 'new-8067d177-7217-4b75-bff1-8da77bff6f06';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-contratos-realizados',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8067d177-7217-4b75-bff1-8da77bff6f06';
    $display->content['new-8067d177-7217-4b75-bff1-8da77bff6f06'] = $pane;
    $display->panels['row'][2] = 'new-8067d177-7217-4b75-bff1-8da77bff6f06';
    $pane = new stdClass();
    $pane->pid = 'new-0536e093-d590-4f72-bf59-1e8e43613143';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_23';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-contenidos-publicados',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0536e093-d590-4f72-bf59-1e8e43613143';
    $display->content['new-0536e093-d590-4f72-bf59-1e8e43613143'] = $pane;
    $display->panels['row'][3] = 'new-0536e093-d590-4f72-bf59-1e8e43613143';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['privado_tutor_estadisticas'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'privado_tutor_mi_cuenta';
  $mini->category = '';
  $mini->admin_title = 'privado_tutor_mi_cuenta';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '130ae79f-3253-418d-8f41-367af8655fab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3b46115f-406e-40da-84f9-04e2be74debe';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_27';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span21 offset1 cuenta-tutor-encabezado',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3b46115f-406e-40da-84f9-04e2be74debe';
    $display->content['new-3b46115f-406e-40da-84f9-04e2be74debe'] = $pane;
    $display->panels['row'][0] = 'new-3b46115f-406e-40da-84f9-04e2be74debe';
    $pane = new stdClass();
    $pane->pid = 'new-9b3aebad-7880-4b94-9ae4-0f0ffc325980';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_23';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span21 offset1 cuenta-tutor-tabla',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9b3aebad-7880-4b94-9ae4-0f0ffc325980';
    $display->content['new-9b3aebad-7880-4b94-9ae4-0f0ffc325980'] = $pane;
    $display->panels['row'][1] = 'new-9b3aebad-7880-4b94-9ae4-0f0ffc325980';
    $pane = new stdClass();
    $pane->pid = 'new-e8503044-5f88-4027-beda-4b1b29087bd0';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_28';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span21 offset1 cuenta-tutor-encabezado',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e8503044-5f88-4027-beda-4b1b29087bd0';
    $display->content['new-e8503044-5f88-4027-beda-4b1b29087bd0'] = $pane;
    $display->panels['row'][2] = 'new-e8503044-5f88-4027-beda-4b1b29087bd0';
    $pane = new stdClass();
    $pane->pid = 'new-4236b893-1b6f-4c03-babf-a83eb40bd256';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_25';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span21 offset1 cuenta-tutor-tabla',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4236b893-1b6f-4c03-babf-a83eb40bd256';
    $display->content['new-4236b893-1b6f-4c03-babf-a83eb40bd256'] = $pane;
    $display->panels['row'][3] = 'new-4236b893-1b6f-4c03-babf-a83eb40bd256';
    $pane = new stdClass();
    $pane->pid = 'new-3eedd543-dd24-48a3-96a4-29d15c7f9070';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_29';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span21 offset1 cuenta-tutor-encabezado',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3eedd543-dd24-48a3-96a4-29d15c7f9070';
    $display->content['new-3eedd543-dd24-48a3-96a4-29d15c7f9070'] = $pane;
    $display->panels['row'][4] = 'new-3eedd543-dd24-48a3-96a4-29d15c7f9070';
    $pane = new stdClass();
    $pane->pid = 'new-48cd2f8b-7592-4d10-8df2-6c88b54c56eb';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_24';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span21 offset1 cuenta-tutor-tabla',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '48cd2f8b-7592-4d10-8df2-6c88b54c56eb';
    $display->content['new-48cd2f8b-7592-4d10-8df2-6c88b54c56eb'] = $pane;
    $display->panels['row'][5] = 'new-48cd2f8b-7592-4d10-8df2-6c88b54c56eb';
    $pane = new stdClass();
    $pane->pid = 'new-1ed77eac-33ce-489b-8a4f-46b53d3fe8a2';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_30';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span21 offset1 cuenta-tutor-encabezado',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1ed77eac-33ce-489b-8a4f-46b53d3fe8a2';
    $display->content['new-1ed77eac-33ce-489b-8a4f-46b53d3fe8a2'] = $pane;
    $display->panels['row'][6] = 'new-1ed77eac-33ce-489b-8a4f-46b53d3fe8a2';
    $pane = new stdClass();
    $pane->pid = 'new-7775c64b-0bae-4c3a-8736-fb3c12a471ef';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_26';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'span21 offset1 cuenta-tutor-tabla',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '7775c64b-0bae-4c3a-8736-fb3c12a471ef';
    $display->content['new-7775c64b-0bae-4c3a-8736-fb3c12a471ef'] = $pane;
    $display->panels['row'][7] = 'new-7775c64b-0bae-4c3a-8736-fb3c12a471ef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9b3aebad-7880-4b94-9ae4-0f0ffc325980';
  $mini->display = $display;
  $export['privado_tutor_mi_cuenta'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publico_emprendedor_actividad';
  $mini->category = '';
  $mini->admin_title = 'publico_emprendedor_actividad';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '8918e492-4eeb-4df6-b931-3cdd1b0ca5be';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18023a33-646b-4836-a513-2edc06c2e523';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyectos-publicados',
      'css_class' => 'span11 offset8 gris-cuatro medium uppercase bold',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18023a33-646b-4836-a513-2edc06c2e523';
    $display->content['new-18023a33-646b-4836-a513-2edc06c2e523'] = $pane;
    $display->panels['row'][0] = 'new-18023a33-646b-4836-a513-2edc06c2e523';
    $pane = new stdClass();
    $pane->pid = 'new-9da5dfae-4086-42f7-9edb-9ceadd077f8c';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyectos-estado',
      'css_class' => 'span11 offset8 gris-cuatro medium',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9da5dfae-4086-42f7-9edb-9ceadd077f8c';
    $display->content['new-9da5dfae-4086-42f7-9edb-9ceadd077f8c'] = $pane;
    $display->panels['row'][1] = 'new-9da5dfae-4086-42f7-9edb-9ceadd077f8c';
    $pane = new stdClass();
    $pane->pid = 'new-39416345-ed69-447e-b631-c37d0cbd64d2';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyectos-encurso',
      'css_class' => 'span11 offset8 gris-cuatro medium',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '39416345-ed69-447e-b631-c37d0cbd64d2';
    $display->content['new-39416345-ed69-447e-b631-c37d0cbd64d2'] = $pane;
    $display->panels['row'][2] = 'new-39416345-ed69-447e-b631-c37d0cbd64d2';
    $pane = new stdClass();
    $pane->pid = 'new-dd85d454-d339-4ead-b9c0-0945c8ea3fb0';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyectos-finalizados',
      'css_class' => 'span11 offset8 gris-cuatro medium',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dd85d454-d339-4ead-b9c0-0945c8ea3fb0';
    $display->content['new-dd85d454-d339-4ead-b9c0-0945c8ea3fb0'] = $pane;
    $display->panels['row'][3] = 'new-dd85d454-d339-4ead-b9c0-0945c8ea3fb0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['publico_emprendedor_actividad'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publico_tutor_estadisticas';
  $mini->category = '';
  $mini->admin_title = 'publico_tutor_estadisticas';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '2618974e-f866-41ed-95ba-ce7ad31eae5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-58aec550-27a3-4091-a0b1-a0078bbb9c55';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_20';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-proyectos-activos',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58aec550-27a3-4091-a0b1-a0078bbb9c55';
    $display->content['new-58aec550-27a3-4091-a0b1-a0078bbb9c55'] = $pane;
    $display->panels['row'][0] = 'new-58aec550-27a3-4091-a0b1-a0078bbb9c55';
    $pane = new stdClass();
    $pane->pid = 'new-039451d9-da3a-4a54-96ca-0b08607b3d91';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_21';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuarios-proyectos-finalizados',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '039451d9-da3a-4a54-96ca-0b08607b3d91';
    $display->content['new-039451d9-da3a-4a54-96ca-0b08607b3d91'] = $pane;
    $display->panels['row'][1] = 'new-039451d9-da3a-4a54-96ca-0b08607b3d91';
    $pane = new stdClass();
    $pane->pid = 'new-bcc87e08-7a22-452f-b009-dc463be6bb91';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_22';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-horas-tutoria',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bcc87e08-7a22-452f-b009-dc463be6bb91';
    $display->content['new-bcc87e08-7a22-452f-b009-dc463be6bb91'] = $pane;
    $display->panels['row'][2] = 'new-bcc87e08-7a22-452f-b009-dc463be6bb91';
    $pane = new stdClass();
    $pane->pid = 'new-39333f2e-6150-41ea-8c3a-c68a5557766e';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_13';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'usuario-contenidos-publicados',
      'css_class' => 'span8',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '39333f2e-6150-41ea-8c3a-c68a5557766e';
    $display->content['new-39333f2e-6150-41ea-8c3a-c68a5557766e'] = $pane;
    $display->panels['row'][3] = 'new-39333f2e-6150-41ea-8c3a-c68a5557766e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-39333f2e-6150-41ea-8c3a-c68a5557766e';
  $mini->display = $display;
  $export['publico_tutor_estadisticas'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publico_tutor_info';
  $mini->category = '';
  $mini->admin_title = 'publico_tutor_info';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '22e1a6ba-69dc-478d-a177-8ff6074b02e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a8daa77-4c0f-4a86-b0ec-b00593cc4e97';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'info-usuario',
      'css_class' => 'publico-tutor',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a8daa77-4c0f-4a86-b0ec-b00593cc4e97';
    $display->content['new-0a8daa77-4c0f-4a86-b0ec-b00593cc4e97'] = $pane;
    $display->panels['row'][0] = 'new-0a8daa77-4c0f-4a86-b0ec-b00593cc4e97';
    $pane = new stdClass();
    $pane->pid = 'new-bb54f799-d1f4-43f4-a0b7-caf4c56850d2';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_8';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'articulos-publicados',
      'css_class' => 'publico-tutor clearfix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bb54f799-d1f4-43f4-a0b7-caf4c56850d2';
    $display->content['new-bb54f799-d1f4-43f4-a0b7-caf4c56850d2'] = $pane;
    $display->panels['row'][1] = 'new-bb54f799-d1f4-43f4-a0b7-caf4c56850d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['publico_tutor_info'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publico_tutor_proyectos';
  $mini->category = '';
  $mini->admin_title = 'publico_tutor_proyectos';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'd98a3959-b068-479e-927e-dc10c3434c21';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a4237b12-d6f3-4ec8-8829-8bfa24ec9911';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_19';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyectos-activos-publico-tutor',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4237b12-d6f3-4ec8-8829-8bfa24ec9911';
    $display->content['new-a4237b12-d6f3-4ec8-8829-8bfa24ec9911'] = $pane;
    $display->panels['row'][0] = 'new-a4237b12-d6f3-4ec8-8829-8bfa24ec9911';
    $pane = new stdClass();
    $pane->pid = 'new-973d7b79-2e07-41f6-bd1c-8e2bc172ed8d';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'perfil_contenido-panel_pane_20';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'proyectos-finalizados-publico-tutor',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '973d7b79-2e07-41f6-bd1c-8e2bc172ed8d';
    $display->content['new-973d7b79-2e07-41f6-bd1c-8e2bc172ed8d'] = $pane;
    $display->panels['row'][1] = 'new-973d7b79-2e07-41f6-bd1c-8e2bc172ed8d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a4237b12-d6f3-4ec8-8829-8bfa24ec9911';
  $mini->display = $display;
  $export['publico_tutor_proyectos'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publico_tutor_servicio';
  $mini->category = '';
  $mini->admin_title = 'publico_tutor_servicio';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '8b11cfba-4a69-4fca-a1ab-63b46a357f41';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-446c6611-8f36-46f7-9f78-7a8a32f00591';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'servicio-usuario-tutor-publico',
      'css_class' => 'span21 offset1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '446c6611-8f36-46f7-9f78-7a8a32f00591';
    $display->content['new-446c6611-8f36-46f7-9f78-7a8a32f00591'] = $pane;
    $display->panels['row'][0] = 'new-446c6611-8f36-46f7-9f78-7a8a32f00591';
    $pane = new stdClass();
    $pane->pid = 'new-6f7a392d-fee0-41dd-893f-611d73c23f95';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'formacion-usuario-tutor-publico',
      'css_class' => 'span21 offset1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6f7a392d-fee0-41dd-893f-611d73c23f95';
    $display->content['new-6f7a392d-fee0-41dd-893f-611d73c23f95'] = $pane;
    $display->panels['row'][1] = 'new-6f7a392d-fee0-41dd-893f-611d73c23f95';
    $pane = new stdClass();
    $pane->pid = 'new-894a9d7f-ead4-44e6-8fc4-1d8d2f34cdd3';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'experiencia-usuario-tutor-publico',
      'css_class' => 'span21 offset1',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '894a9d7f-ead4-44e6-8fc4-1d8d2f34cdd3';
    $display->content['new-894a9d7f-ead4-44e6-8fc4-1d8d2f34cdd3'] = $pane;
    $display->panels['row'][2] = 'new-894a9d7f-ead4-44e6-8fc4-1d8d2f34cdd3';
    $pane = new stdClass();
    $pane->pid = 'new-9c14120f-98ed-41e0-9c1b-b4370b312f09';
    $pane->panel = 'row';
    $pane->type = 'panels_mini';
    $pane->subtype = 'publico_tutor_proyectos';
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
      'css_id' => 'proyectos-usuario-tutor-publico',
      'css_class' => 'span21 offset1',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9c14120f-98ed-41e0-9c1b-b4370b312f09';
    $display->content['new-9c14120f-98ed-41e0-9c1b-b4370b312f09'] = $pane;
    $display->panels['row'][3] = 'new-9c14120f-98ed-41e0-9c1b-b4370b312f09';
    $pane = new stdClass();
    $pane->pid = 'new-0243dae3-05df-4975-984d-affffdd41716';
    $pane->panel = 'row';
    $pane->type = 'views_panes';
    $pane->subtype = 'usuario-panel_pane_12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'contenidos-usuario-tutor-publico',
      'css_class' => 'span21 offset1',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '0243dae3-05df-4975-984d-affffdd41716';
    $display->content['new-0243dae3-05df-4975-984d-affffdd41716'] = $pane;
    $display->panels['row'][4] = 'new-0243dae3-05df-4975-984d-affffdd41716';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-446c6611-8f36-46f7-9f78-7a8a32f00591';
  $mini->display = $display;
  $export['publico_tutor_servicio'] = $mini;

  return $export;
}
