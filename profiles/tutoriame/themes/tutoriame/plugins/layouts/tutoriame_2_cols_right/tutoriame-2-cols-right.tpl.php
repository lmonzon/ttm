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



  <div class="container">

    <?php if (!empty($content['main'])): ?>
      <div id="main-content" class="span34 offset1">
        <?php print render($content['main']); ?>
      </div> <!-- /center -->
    <?php endif; ?>

    <?php if (!empty($content['right'])): ?>
      <div class="span11 offset1">
        <?php print render($content['right']); ?>
      </div> <!-- right -->
    <?php endif; ?>
  

</div> <!-- /row -->
