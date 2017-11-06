<?php

/**
 * @file
 * Definition of views_handler_field_contratar_para_link.
 */

/**
 * Field handler to present a link to sign up a user for the node.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_contratar_para_link extends views_handler_field_node_link {
  function access() {
    return true;
  }

  function render_link($node, $values) {
    global $user;

    module_load_include('inc', 'tutoriame_contratar');

    $text = '';
    if (tutoriame_contratar_puede_contratar($user, NULL, $node)) {
      $text = (!empty($this->options['text'])) ? ($this->options['text']) : (t('Contratar para'));

      $this->options['alter']['make_link'] = true;
      $this->options['alter']['path'] = 'contratar-para/' . $node->nid;
    }

    return $text;
  }
}

