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



  <div class="row span48">

   <?php if (!empty($content['header'])): ?>
      <div class="span48 header-3-col">
        <?php print render($content['header']); ?>
      </div> <!-- header -->
    <?php endif; ?>

   <?php if (!empty($content['headerrow'])): ?>
   <div class="header-row clearfix span46 offset1">
        <?php print render($content['headerrow']); ?>
      </div> <!-- header-row -->
    <?php endif; ?>

    <?php if (!empty($content['left'])): ?>
      <div class="span13 offset1">
        <?php print render($content['left']); ?>
      </div> <!-- left -->
    <?php endif; ?>

    <?php if (!empty($content['main'])): ?>
      <div id="main-content" class="span23 offset1">
        <?php print render($content['main']); ?>
      </div> <!-- /center -->
    <?php endif; ?>

    <?php if (!empty($content['right'])): ?>
      <div class="span8 offset1">
        <?php print render($content['right']); ?>
      </div> <!-- /right -->
    <?php endif; ?>


  <?php if (!empty($content['footer'])): ?>
  <footer>
    <?php print render($content['footer']); ?>
  </footer>
  <?php endif; ?>

</div> <!-- /row -->
