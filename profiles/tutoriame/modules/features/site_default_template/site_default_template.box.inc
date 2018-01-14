<?php
/**
 * @file
 * site_default_template.box.inc
 */

/**
 * Implements hook_default_box().
 */
function site_default_template_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ttm_redes_sociales';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = ' Experto Online Redes Sociales';
  $box->options = array(
    'body' => array(
      'value' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>

<div class="redes-list clearfix">
<div class="twitter item-redes span2"><a href="http://www.twitter.com"><img src="<?php print $imagenes; ?>twitter.png" /></a></div>
<div class="facebook item-redes span2"><a href="http://www.facebook.com"><img src="<?php print $imagenes; ?>facebook.png" /></a></div>
<div class="google-plus item-redes span2"><a href="http://www.google-plus.com"><img src="<?php print $imagenes; ?>google-plus.png" /></a></div>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['ttm_redes_sociales'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ttm_registro_ingreso';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'ttm_registro_ingreso';
  $box->options = array(
    'body' => array(
      'value' => '<div class="registro-ingreso clearfix">
<?php if(user_is_logged_in()): ?>
 <div><a href="<?php print url(\'user\', array(\'absolute\' => TRUE)); ?>">Ver Perfil</a> / <a href="<?php print url(\'user/logout\', array(\'absolute\' => TRUE)); ?>">Cerrar Sesión</a></div>
<?php else: ?>
  <div><a href="<?php print url(\'registro\', array(\'absolute\' => TRUE)); ?>">Registrarse</a> o <a href="<?php print url(\'user/login\', array(\'absolute\' => TRUE)); ?>">Ingresar</a></div>
<?php endif; ?>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['ttm_registro_ingreso'] = $box;

  return $export;
}
