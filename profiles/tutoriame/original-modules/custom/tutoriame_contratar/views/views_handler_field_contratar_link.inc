<?php

/**
 * @file
 * Definition of views_handler_field_contratar_link.
 */

/**
 * Field handler to present a link to sign up the user.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_contratar_link extends views_handler_field_user_link {
  function access() {
    return true;
  }

  function render_link($data, $values) {
    global $user;

    module_load_include('inc', 'tutoriame_contratar');

    $text = '';
    if (
      ($to_user = user_load($data)) &&
      (tutoriame_contratar_puede_contratar($user, $to_user))
    ) {
      $text = (!empty($this->options['text'])) ? ($this->options['text']) : (t('Contratar'));

      $this->options['alter']['make_link'] = true;
      $this->options['alter']['path'] = 'contratar/' . $data;
    }

    return $text;
  }
}

