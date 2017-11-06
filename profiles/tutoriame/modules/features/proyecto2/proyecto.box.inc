<?php
/**
 * @file
 * proyecto.box.inc
 */

/**
 * Implements hook_default_box().
 */
function proyecto_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'formulario_proyecto_encabezado';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'formulario_proyecto_encabezado';
  $box->options = array(
    'body' => array(
      'value' => '<div class="verde titulo-dos">Publicá tu proyecto</div>

<div class="medium gris-tres">y elegí los tutores que más se adapten a tus necesidades</div>

<p>&nbsp;</p>

<div class="medium gris-tres">¿Querés utilizar un proyecto que ya publicaste como base para el nuevo proyecto?</div>

<div class="rojo bold medium"><a href="<?php print url(\'clonar-proyecto\'); ?>">copiá plantilla</a></div>

<p>&nbsp;</p>

<div class="medium gris-tres">De lo contrario, completá los siguientes datos:</div>
',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['formulario_proyecto_encabezado'] = $box;

  return $export;
}
