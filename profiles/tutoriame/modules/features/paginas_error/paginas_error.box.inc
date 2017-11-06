<?php
/**
 * @file
 * paginas_error.box.inc
 */

/**
 * Implements hook_default_box().
 */
function paginas_error_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ttm_403';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'TTM 403 acceso denegado';
  $box->options = array(
    'body' => array(
      'value' => '<div class="clearfix span30 offset1">
<h2 class="verde plus">Error 403<br />
Acceso denegado</h2>
<?php if(user_is_logged_in()): ?>
<div class="medium bold pagina-error-mensaje">No estás autorizado para visitar esta página.</br>
El usuario con el que has iniciado sesión no tiene permisos para acceder a este contenido.</div>
<?php else: ?>
<div class="medium bold pagina-error-mensaje">No estás autorizado para visitar esta página.</br>
<a href="<?php print url(\'user/login\', array(\'absolute\' => TRUE)); ?>">Ingresa</a> o <a href="<?php print url(\'registro\', array(\'absolute\' => TRUE)); ?>">registrate</a> para acceder a este contenido.
</div>
<?php endif; ?>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['ttm_403'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ttm_404';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'TTM 404 pagina no encontrada';
  $box->options = array(
    'body' => array(
      'value' => '<div class="clearfix span30 offset1">
<h2 class="verde plus">Error 404<br />
Contenido no encontrado</h2>
<div class="medium bold pagina-error-mensaje">La página que quieres visitar no existe o ha sido eliminada.</br>
Continua navegando por el sitio para encontrar contenidos similares.</div>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['ttm_404'] = $box;

  return $export;
}
