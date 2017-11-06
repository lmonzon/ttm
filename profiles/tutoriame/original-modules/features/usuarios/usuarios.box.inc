<?php
/**
 * @file
 * usuarios.box.inc
 */

/**
 * Implements hook_default_box().
 */
function usuarios_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'encabezado_perfil_edit';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'encabezado_perfil_edit';
  $box->options = array(
    'body' => array(
      'value' => '<div>completa tu perfil para aprovechar al máximo tu cuenta en Tutoriame:</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['encabezado_perfil_edit'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'encabezado_registro';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'encabezado_registro';
  $box->options = array(
    'body' => array(
      'value' => '<div class="titulo-dos plus gris-tres span10">O ingresa tus datos</div>

<div class="span10 gris-tres medium align-right">Si ya eres usuario, <a class="underline" href="user/login">ingresa</a></div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['encabezado_registro'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'encabezado_registro_titulo';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'encabezado_registro_titulo';
  $box->options = array(
    'body' => array(
      'value' => '<h2 class="plus verde">Regístrate gratis como emprendedor o tutor</h2>
',
      'format' => 'full_html',
    ),
  );
  $export['encabezado_registro_titulo'] = $box;

  return $export;
}
