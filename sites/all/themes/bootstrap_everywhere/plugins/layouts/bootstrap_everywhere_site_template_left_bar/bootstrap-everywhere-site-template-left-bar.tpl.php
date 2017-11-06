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

<?php if (!empty($content['navbar'])): ?>
  <div class="navbar navbar-fixed-top">
    <div class="navbar-inner">
      <div class="container">
        <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </a>
<?php /*        <a class="brand" href="#">Project name</a> */ ?>
        <div class="nav-collapse">
        <?php print render($content['navbar']); ?>
        </div><!--/.nav-collapse -->
      </div>
    </div>
  </div>
<?php endif; ?>

<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="container">
  <?php if (!empty($content['header'])): ?>
    <div class="header">
      <?php print render($content['header']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['hero'])): ?>
    <div class="hero-unit">
      <?php print render($content['hero']); ?>
    </div>
  <?php endif; ?>

  <div class="row">
    <?php if (!empty($content['left'])): ?>
      <div class="span6">
        <?php print render($content['left']); ?>
      </div> <!-- /right -->
    <?php endif; ?>

    <?php if (!empty($content['main'])): ?>
      <div id="main-content" class="span18">
        <?php print render($content['main']); ?>
      </div> <!-- /center -->
    <?php endif; ?>
  </div> <!-- /main-row -->

  <?php if (!empty($content['footer'])): ?>
  <footer>
    <?php print render($content['footer']); ?>
  </footer>
  <?php endif; ?>

</div> <!-- /container -->
