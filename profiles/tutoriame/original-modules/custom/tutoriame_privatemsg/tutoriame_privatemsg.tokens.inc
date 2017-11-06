<?php

/**
 * @file
 * Builds replacement tokens for Tutoriame Privatemsg
 */

/**
 * Implements hook_token_info().
 */
function tutoriame_privatemsg_token_info() {
  $message['url_tutoriame'] = array(
    'name' => t('URL en Tutoriame'),
    'description' => t('Dirección URL del mensaje en Tutoriame.'),
  );

  return array(
    'tokens' => array('privatemsg_message' => $message),
  );
}

/**
 * Implements hook_tokens().
 */
function tutoriame_privatemsg_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  $url_options = array('absolute' => true);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
  }

  if (
    ($type == 'privatemsg_message') &&
    (!empty($data['privatemsg_message']))
  ) {
    $message = $data['privatemsg_message'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'url_tutoriame':
          $uri = array(
            'path' => '<front>',
            'options' => array(),
          );

          if (
            (isset($message->mid)) &&
            (isset($message->thread_id))
          ) {
            $uri = array(
              'path' => 'mis-conversaciones/' . $message->thread_id,
              'options' => array(),
            );
            if ($message->mid != $message->thread_id) {
              $uri['options']['fragment'] = 'privatemsg-mid-' . $message->mid;
            }
          }

          $replacements[$original] = url($uri['path'], $url_options + $uri['options']);
          break;
      }
    }
  }

  return $replacements;
}

