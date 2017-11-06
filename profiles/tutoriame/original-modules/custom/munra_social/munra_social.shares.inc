<?php

/**
 * @file
 * Bloques para renderizar los botones de compartir.
 */

// Render functions.

/**
 * Botón de compartir en twitter.
 */
function munra_social_share_twitter($options) {
  static $add_js = TRUE;
  $output = '';
  if ($add_js) {
    $output .= "<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?'http':'https';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+'://platform.twitter.com/widgets.js';fjs.parentNode.insertBefore(js,fjs);}}(document, 'script', 'twitter-wjs');</script>";
    $add_js = FALSE;
  }
  // Prepare values.
  $options['conf']['size'] = ($options['conf']['size']) ? 'large' : '';
  $options['conf']['count'] = ($options['conf']['count']) ? 'none' : '';
  $settings = array();
  foreach ($options['conf'] as $attr => $value) {
    if (!empty($value)) {
      $settings[] = "data-$attr='$value'";
    }
  }
  global $language;
  $settings[] = "data-lang='$language->language'";
  $link_text = t('Tweet');
  $attributes = join(' ', $settings);
  $output .= "<a href='https://twitter.com/share' $attributes class='twitter-share-button'>$link_text</a>";
  return $output;
}

/**
 * Botón de compartir en facebook.
 */
function munra_social_share_facebook($options) {
  static $add_js = TRUE;
  $output = '';
  if ($add_js) {
    $output .= "<div id='fb-root'></div>
      <script>(function(d, s, id) {
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) return;
        js = d.createElement(s); js.id = id;
        js.src = '//connect.facebook.net/es_LA/all.js#xfbml=1';
        fjs.parentNode.insertBefore(js, fjs);
      }(document, 'script', 'facebook-jssdk'));</script>";
    $add_js = FALSE;
  }

  $settings = array();
  foreach ($options['conf'] as $attr => $value) {
    $settings[] = "data-$attr='$value'";
  }
  $attributes = join(' ', $settings);
  $output .= "<div class='fb-like' $attributes></div>";
  return $output;
}

/**
 * Botón +1 de google.
 */
function munra_social_share_google_plus_one($options) {
  static $add_js = TRUE;
  $output = '';
  if ($add_js) {
    global $language;
    $output .= "<script type='text/javascript'>
  window.___gcfg = {lang: '$language->language'};

  (function() {
    var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
    po.src = 'https://apis.google.com/js/plusone.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>";
    $add_js = FALSE;
  }

  $settings = array();
  foreach ($options['conf'] as $attr => $value) {
    if (!empty($value)) {
      $settings[] = "data-$attr='$value'";
    }
  }
  $attributes = join(' ', $settings);
  $output .= "<div class='g-plusone' $attributes></div>";
  return $output;
}

/**
 * Botón de compartir en google_plus.
 */
function munra_social_share_google_plus_share($options) {
  static $add_js = TRUE;
  $output = '';
  if ($add_js) {
    global $language;
    $output .= "<script type='text/javascript'>
  window.___gcfg = {lang: '$language->language'};

  (function() {
    var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
    po.src = 'https://apis.google.com/js/plusone.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>";
    $add_js = FALSE;
  }

  $settings = array();
  foreach ($options['conf'] as $attr => $value) {
    if (!empty($value)) {
      $settings[] = "data-$attr='$value'";
    }
  }
  // Add height if annotation is vertical bubble.
  if ($options['conf']['annotation'] == 'vertical-bubble') {
    $settings[] = "data-height=60";
  }
  $attributes = join(' ', $settings);
  $output .= "<div class='g-plus' data-action='share' $attributes></div>";
  return $output;
}

/**
 * Botón para versión para imprimir.
 */
function munra_social_share_print($options) {
  if (function_exists('print_insert_link')) {
    return print_insert_link();
  }
  return '';
}

/**
 * Botón de compartir por mail.
 */
function munra_social_share_print_mail($options) {
  if (function_exists('print_mail_insert_link')) {
    return print_mail_insert_link();
  }
  return '';
}

// Settings forms.

function munra_social_share_twitter_settings($conf) {
  $form['description'] = array(
    '#markup' => t('Button documentation and examples: ') . l('https://twitter.com/about/resources/buttons', 'https://twitter.com/about/resources/buttons'),
  );
  $form['text'] = array(
    '#type' => 'textfield',
    '#title' => t('Tweet text'),
    '#description' => t('If empty the page title will be used.'),
    '#size' => 20,
    '#default_value' => isset($conf['text']) ? $conf['text'] : '',
  );
  $form['via'] = array(
    '#type' => 'textfield',
    '#title' => t('Via'),
    '#size' => 20,
    '#field_prefix' => '@',
    '#default_value' => isset($conf['via']) ? $conf['via'] : '',
  );
  $form['related'] = array(
    '#type' => 'textfield',
    '#title' => t('Recommend'),
    '#size' => 20,
    '#field_prefix' => '@',
    '#default_value' => isset($conf['related']) ? $conf['related'] : '',
  );
  $form['hashtag'] = array(
    '#type' => 'textfield',
    '#title' => t('Hashtag'),
    '#size' => 20,
    '#field_prefix' => '#',
    '#default_value' => isset($conf['hashtag']) ? $conf['hashtag'] : '',
  );
  $form['size'] = array(
    '#type' => 'checkbox',
    '#title' => t('Large button'),
    '#default_value' => isset($conf['size']) ? $conf['size'] : '',
  );
  $form['count'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide count'),
    '#default_value' => isset($conf['count']) ? $conf['count'] : '',
  );

  return $form;
}

/**
 * Botón de compartir en facebook.
 */
function munra_social_share_facebook_settings($conf) {
  $form['description'] = array(
    '#markup' => t('Button documentation and examples: ') . l('https://developers.facebook.com/docs/reference/plugins/like/', 'https://developers.facebook.com/docs/reference/plugins/like/'),
  );
  $form['send'] = array(
    '#type' => 'radios',
    '#title' => t('Use send button'),
    '#options' => array('true' => t('Yes'), 'false' => t('No')),
    '#default_value' => isset($conf['send']) ? $conf['send'] : '',
  );
  $form['layout'] = array(
    '#type' => 'select',
    '#title' => t('Layout style'),
    '#options' => array(
      'standard' => 'standard',
      'button_count' => 'button_count',
      'box_count' => 'box_count',
    ),
    '#default_value' => isset($conf['layout']) ? $conf['layout'] : '',
  );
  $form['width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#size' => 4,
    '#default_value' => isset($conf['width']) ? $conf['width'] : '',
  );
  $form['show_faces'] = array(
    '#type' => 'radios',
    '#title' => t('Show faces'),
    '#options' => array('true' => t('Yes'), 'false' => t('No')),
    '#default_value' => isset($conf['show_faces']) ? $conf['show_faces'] : '',
  );
  $form['font'] = array(
    '#type' => 'select',
    '#title' => t('Font'),
    '#options' => array(
      'arial' => 'arial',
      'lucida grande' => 'lucida grande',
      'segoe ui' => 'segoe ui',
      'tahoma' => 'tahoma',
      'trebuchet ms' => 'trebuchet ms',
      'verdana' => 'verdana',
    ),
    '#default_value' => isset($conf['font']) ? $conf['font'] : '',
  );
  $form['colorscheme'] = array(
    '#type' => 'select',
    '#title' => t('Color scheme'),
    '#options' => array(
      'light' => 'light',
      'dark' => 'dark',
    ),
    '#default_value' => isset($conf['colorscheme']) ? $conf['colorscheme'] : '',
  );
  $form['action'] = array(
    '#type' => 'select',
    '#title' => t('Verb to display'),
    '#options' => array(
      'like' => 'like',
      'recommend' => 'recommend',
    ),
    '#default_value' => isset($conf['action']) ? $conf['action'] : '',
  );
  return $form;
}

/**
 * Botón de compartir en google_plus.
 */
function munra_social_share_google_plus_share_settings($conf) {
  $form['description'] = array(
    '#markup' => t('Button documentation and examples: ') . l('https://developers.google.com/+/web/share/', 'https://developers.google.com/+/web/share/'),
  );
  $form['annotation'] = array(
    '#type' => 'select',
    '#title' => t('Annotation'),
    '#options' => array(
      '' => 'inline',
      'none' => 'none',
      'bubble' => 'bubble (horizontal)',
      'vertical-bubble' => 'bubble (vertical)',
    ),
    '#default_value' => isset($conf['annotation']) ? $conf['annotation'] : '',
  );
  $form['size'] = array(
    '#type' => 'select',
    '#title' => t('Size'),
    '#description' => t('Ignored if annotation is bubble (vertical).'),
    '#options' => array(
      'small' => t('small'),
      'medium' => t('medium'),
      'large' => t('large'),
    ),
    '#default_value' => isset($conf['size']) ? $conf['size'] : '',
  );
  $form['width'] = array(
    '#type' => 'textfield',
    '#title' => 'width',
    '#description' => t('Only used if annotation is inline.'),
    '#size' => 8,
  );
  return $form;
}

/**
 * Botón +1 de google.
 */
function munra_social_share_google_plus_one_settings($conf) {
  $form['description'] = array(
    '#markup' => t('Button documentation and examples: ') . l('https://developers.google.com/+/web/+1button/', 'https://developers.google.com/+/web/+1button/'),
  );
  $form['annotation'] = array(
    '#type' => 'select',
    '#title' => t('Annotation'),
    '#options' => array(
      '' => 'bubble',
      'none' => 'none',
      'inline' => 'inline',
    ),
    '#default_value' => isset($conf['annotation']) ? $conf['annotation'] : '',
  );
  $form['size'] = array(
    '#type' => 'select',
    '#title' => t('Size'),
    '#options' => array(
      '' => t('standard (24px)'),
      'small' => t('small (15px)'),
      'medium' => t('medium (20px)'),
      'tall' => t('tall (60px)'),
    ),
    '#default_value' => isset($conf['size']) ? $conf['size'] : '',
  );
  $form['width'] = array(
    '#type' => 'textfield',
    '#title' => 'width',
    '#description' => t('Only used if annotation is inline.'),
    '#size' => 8,
  );
  return $form;
}
