<?php
/**
 * @file
 * home.box.inc
 */

/**
 * Implements hook_default_box().
 */
function home_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_ttm_pasos';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'home_ttm_pasos';
  $box->options = array(
    'body' => array(
      'value' => '<?php global $base_path;?>
<?php $imagenes = $base_path . \'profiles/tutoriame/themes/tutoriame/css/images/\'; ?>
<div class="clearfix span48  pasos-ttm-content"</div>
<div class="clearfix offset4 span40 semibold">
<tbody>
<table>
<tr>
<td>
<div class="pasos-tutoriame-item publicar-proyecto span8"><span class="span3"><img src="<?php print $imagenes; ?>publicar-proyecto.png" /></span><span class="span4 offset1">1. <br />publicar proyecto</span></div>
</td>
<td>
<div class="span1 offset1 ttm-pasos-mas"><span>+</span></div>
</td>
<td>
<div class="pasos-tutoriame-item publicar-proyecto span7 offset1"><span class="span3"><img src="<?php print $imagenes; ?>elegir-tutor.png" /></span><span class="span3 offset1">2. <br />elegir tutor</span></div>
</td>
<td>
<div class="span1 ttm-pasos-mas offset1"><span>+</span></div>
</td>
<td>
<div class="pasos-tutoriame-item adquirir-puntos span8 offset1"><span class="span3"><img src="<?php print $imagenes; ?>adquirir-puntos.png" /></span><span class="span4 offset1">3. <br />adquirir puntos tutoriame</span></div>
</td>
<td>
<div class="span1 offset1 ttm-pasos-mas"><span>+</span></div>
</td>
<td>
<div class="pasos-tutoriame-item contratar-tutor span7 offset1"><span class="span3"><img src="<?php print $imagenes; ?>contratar-tutor.png" /></span><span class="span3 offset1">4. <br />contratar tutor</span></div>
</td>
</tr>
</table>
</tbody>
</div>
</div>

<div class="ttm-grupos-afinidad semibold span34 offset7 clearfix">
<span class="span13"><img src="<?php print $imagenes; ?>grupos-afinidad.png" /></span><span class="span18 offset2">Además podrás armar grupos de afinidad, consultar contenidos y participar de<br /> la plataforma a través de canales.</span>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['home_ttm_pasos'] = $box;

  return $export;
}
