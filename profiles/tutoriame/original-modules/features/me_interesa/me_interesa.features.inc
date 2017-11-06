<?php
/**
 * @file
 * me_interesa.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function me_interesa_flag_default_flags() {
  $flags = array();
  // Exported flag: "Me interesa".
  $flags['me_interesa'] = array(
    'entity_type' => 'node',
    'title' => 'Me interesa',
    'global' => 0,
    'types' => array(
      0 => 'proyecto',
    ),
    'flag_short' => 'Me interesa',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Ya no me interesa',
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
    'api_version' => 3,
    'module' => 'me_interesa',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
