<?php
/**
 * @file
 * configuraciones_generales.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function configuraciones_generales_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function configuraciones_generales_fontyourface_features_default_font() {
  return array(
    'Source Sans Pro 600 (latin)' => array(
      'name' => 'Source Sans Pro 600 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Source Sans Pro&subset=latin#600',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Source Sans Pro',
      'css_style' => 'normal',
      'css_weight' => 600,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"Source Sans Pro:600";s:6:"subset";s:5:"latin";}',
    ),
    'Source Sans Pro 700 (latin)' => array(
      'name' => 'Source Sans Pro 700 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Source Sans Pro&subset=latin#700',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Source Sans Pro',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"Source Sans Pro:700";s:6:"subset";s:5:"latin";}',
    ),
    'Source Sans Pro regular (latin)' => array(
      'name' => 'Source Sans Pro regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Source Sans Pro&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Source Sans Pro',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Source Sans Pro:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}
