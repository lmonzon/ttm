<?php

/**
 * Template using twitter bootstrap for panels everywhere.
 * It assumes a modified version of bootstrap with 24 columns.
 *
 * Use only menus in the Navigation region.
 */

?>

<div id="skip-link">
  <a class="element-invisible element-focusable" href="#main-content"><?php print t('Jump to main content'); ?></a>
</div>


<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="container">
  <div class="row span48">

   <?php if (!empty($content['header'])): ?>
      <div class="span48 header-2-col">
        <?php print render($content['header']); ?>
      </div> <!-- left -->
    <?php endif; ?>

    <?php if (!empty($content['left'])): ?>
      <div class="span13 offset1">
        <?php print render($content['left']); ?>
      </div> <!-- left -->
    <?php endif; ?>

    <?php if (!empty($content['main'])): ?>
      <div id="main-content" class="span32 offset1">
        <?php print render($content['main']); ?>
      </div> <!-- /center -->
    <?php endif; ?>

  
  <?php if (!empty($content['footer'])): ?>
  <footer>
    <?php print render($content['footer']); ?>
  </footer>
  <?php endif; ?>

</div> <!-- /row -->
</div> <!-- /container -->