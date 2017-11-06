<?php

/**
 * @file
 * Default theme implementation to display a page in the overlay.
 *
 * Available variables:
 * - $title: the (sanitized) title of the page.
 * - $page: The rendered page content.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_overlay()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<?php print render($disable_overlay); ?>
<div id="overlay" <?php print $attributes; ?>>
  <div id="overlay-titlebar" class="clearfix">
    <div id="overlay-title-wrapper" class="clearfix">
    </div>
    <div id="overlay-close-wrapper">
      <a id="overlay-close" href="#" class="overlay-close"><span class="element-invisible"><?php print t('Close overlay'); ?></span></a>
    </div>
  </div>
  <div id="overlay-content"<?php print $content_attributes; ?>>
    <?php
    if (current_path() == 'user/login') {
      $register_path = url('registro');
      print '<h2 class="user-login-title">Accede a tu cuenta</h2>
      <div class="user-login-title-desc">
      No tienes cuenta en Tutoriame? <a class="user-login-register" href="'.$register_path.'">Regístrate</a>
      </div>';
      $block = module_invoke('connector', 'block_view', 'one_click_block');
      $one_click_block = render($block['content']);
      print $one_click_block;
    }
    ?>
    <?php print $page; ?>
  </div>
</div>
