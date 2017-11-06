<?php

/**
 * @file
 * Definition of views_handler_field_consultar_link.
 */

/**
 * Field handler to present a link to contact the user.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_consultar_link extends views_handler_field_user_link {
  function access() {
    return true;
  }

  function render_link($data, $values) {
    global $user;

    module_load_include('inc', 'tutoriame_privatemsg');

    $text = '';
    if (
      ($to_user = user_load($data)) &&
      (tutoriame_privatemsg_puede_contactar($user, $to_user))
    ) {
      $text = (!empty($this->options['text'])) ? ($this->options['text']) : (t('Consultar'));

      $this->options['alter']['make_link'] = true;
      $this->options['alter']['path'] = 'consultar/' . $data;
    }

    return $text;
  }
}

