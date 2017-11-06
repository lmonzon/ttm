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


   <?php if (!empty($content['header'])): ?>
   <div class="header span48 clearfix">
        <?php print render($content['header']); ?>
      </div> <!-- header -->
    <?php endif; ?>

  <div class="row">

    <?php if (!empty($content['main'])): ?>
      <div id="main-content" class="sidebar-right span37 offset1">
        <?php print render($content['main']); ?>
      </div> <!-- /center -->
    <?php endif; ?>


    <?php if (!empty($content['right'])): ?>
      <div class="span8 offset1">
        <?php print render($content['right']); ?>
      </div> <!-- left -->
    <?php endif; ?>

</div> <!-- /row -->

  <?php if (!empty($content['footer'])): ?>
  <div class="footer span48 clearfix">
    <?php print render($content['footer']); ?>
  </div>
  <?php endif; ?>

</div> <!-- /container -->
