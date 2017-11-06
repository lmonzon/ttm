<?php
/**
 * @file
 * puntos.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function puntos_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Puntos',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ea7218e4-32e3-471b-ab81-8bbc05350f94',
  'type' => 'product',
  'language' => 'es-AR',
  'created' => 1404767380,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6e028c92-1726-4d57-98b8-3a661a06f92a',
  'revision_uid' => 1,
  'model' => 1,
  'list_price' => '1.00000',
  'cost' => '1.00000',
  'sell_price' => '1.00000',
  'weight' => 0,
  'weight_units' => 'lb',
  'length' => 0,
  'width' => 0,
  'height' => 0,
  'length_units' => 'in',
  'pkg_qty' => 1,
  'default_qty' => 1,
  'ordering' => 0,
  'shippable' => 0,
  'price' => '1.00000',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Puntos de usuario</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Puntos de usuario</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'uc_product_image' => array(),
  'metatags' => array(),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2014-07-07 18:09:40 -0300',
);
  return $nodes;
}
