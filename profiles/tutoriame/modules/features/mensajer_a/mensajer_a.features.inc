<?php
/**
 * @file
 * mensajer_a.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mensajer_a_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mensajer_a_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function mensajer_a_flag_default_flags() {
  $flags = array();
  // Exported flag: "Conversaciones".
  $flags['conversaciones'] = array(
    'entity_type' => 'node',
    'title' => 'Conversaciones',
    'global' => 0,
    'types' => array(
      0 => 'proyecto',
    ),
    'flag_short' => 'Conversar',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'No conversar',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'workflow_tab' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'mensajer_a',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function mensajer_a_image_default_styles() {
  $styles = array();

  // Exported image style: privatemsg_list_image.
  $styles['privatemsg_list_image'] = array(
    'name' => 'privatemsg_list_image',
    'label' => 'privatemsg_list_image',
    'effects' => array(
      2 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 45,
          'height' => 46,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: privatemsg_view_image.
  $styles['privatemsg_view_image'] = array(
    'name' => 'privatemsg_view_image',
    'label' => 'privatemsg_view_image',
    'effects' => array(
      4 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 93,
          'height' => 94,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
