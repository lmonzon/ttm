<?php

/**
 * @file
 * Preprocess and helper functions for bootstrap_everywhere.
 */

/**
 * Returns the taxonomy terms of the node and their parents.
 *
 * @see http://drupal.org/node/1072806
 */
function _bootstrap_everywhere_node_get_terms($node, $key = 'tid') {
  static $terms;

  if (!isset($terms[$node->vid][$key])) {
    $query = db_select('taxonomy_index', 'r');
    $t_alias = $query->join('taxonomy_term_data', 't', 'r.tid = t.tid');
    $v_alias = $query->join('taxonomy_vocabulary', 'v', 't.vid = v.vid');
    $query->fields($t_alias);
    $query->condition("r.nid", $node->nid);
    $result = $query->execute();
    $terms[$node->vid][$key] = array();
    foreach ($result as $term) {
      $terms[$node->vid][$key][$term->$key] = $term;
      $parents = taxonomy_get_parents($term->tid);
      foreach ($parents as $p) {
        $terms[$node->vid][$key][$p->$key] = $p;
      }
    }
  }
  return $terms[$node->vid][$key];
}

/**
 * Implements hook_preprocess_html().
 */
function bootstrap_everywhere_preprocess_html(&$variables) {
  // Get terms and parents for nodes.
  if (arg(0) == 'node' && is_numeric(arg(1)) && is_null(arg(2))) {
    $node = node_load(arg(1));
    $terms = _bootstrap_everywhere_node_get_terms($node);
  }
  // Get term and parents for terms.
  else if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2)) && is_null(arg(3))) {
    $tid = arg(2);
    $terms = taxonomy_get_parents($tid);
    $terms[$tid] = taxonomy_term_load($tid);
  }
  // Add terms and parents as classes.
  if (isset($terms) && is_array($terms)) {
    foreach ($terms as $item) {
      $variables['classes_array'][] = 'taxonomy-' . strtolower(_bootstrap_everywhere_clean_css_identifier($item->name));
    }
  }
}

/**
 * Returns $string formatted for use as a css identifier.
 */
function _bootstrap_everywhere_clean_css_identifier($string) {
  $clean = drupal_html_class($string);
  $clean = preg_replace('/[^A-Za-z0-9\-_]/', '', $clean);
  return $clean;
}
