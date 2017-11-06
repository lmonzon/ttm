<?php
/**
 * @file
 * gcoop_modal.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gcoop_modal_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'overlay_paths_ui_paths';
  $strongarm->value = array(
    'contrato/*' => array(
      'width' => '600px',
    ),
    'aprobar-contrato/*' => array(
      'width' => '600px',
    ),
    'rechazar-contrato/*' => array(
      'width' => '600px',
    ),
    'calificar/*' => array(
      'width' => '600px',
    ),
    'contratar/*' => array(
      'width' => '600px',
    ),
    'contratar-para/*' => array(
      'width' => '600px',
    ),
    'categorias-proyecto' => array(
      'width' => '600px',
    ),
    'users/*/proyectos-activos' => array(
      'width' => '600px',
    ),
    'users/*/proyectos-finalizados' => array(
      'width' => '600px',
    ),
    'users/*/contenidos-publicados' => array(
      'width' => '600px',
    ),
    'users/*/experiencia' => array(
      'width' => '600px',
    ),
    'node/add/forum/*' => array(
      'width' => '600px',
    ),
    'node/add/contrato' => array(
      'width' => '600px',
    ),
    'node/add/destacado' => FALSE,
    'node/add/evento' => FALSE,
    'node/add/noticia' => FALSE,
    'node/add/producto' => FALSE,
    'node/add/proyecto' => FALSE,
    'node/add/pagina' => FALSE,
    'node/add/webform' => FALSE,
    'node/add/articulo' => FALSE,
    'node/add/calificacion' => FALSE,
    'node/add' => FALSE,
    'node/*/edit' => FALSE,
    'user/register' => FALSE,
    'user/register/*' => FALSE,
    'user/register/step/2' => FALSE,
    'user/*/edit' => FALSE,
    'user/*/edit/*' => FALSE,
    'user/login' => array(
      'width' => '600px',
    ),
    'clonar-proyecto' => TRUE,
    'node/*/clone/confirm' => FALSE,
    'consultar/*' => array(
      'width' => '600px',
    ),
    'videoconferencia/*' => TRUE,
    'admin/*' => FALSE,
  );
  $export['overlay_paths_ui_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'overlay_theme';
  $strongarm->value = array(
    'theme' => '0',
    'visibility' => '0',
    'pages' => '',
  );
  $export['overlay_theme'] = $strongarm;

  return $export;
}
