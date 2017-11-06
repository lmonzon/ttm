<?php

/**
 * Template for one row.
 */

?>

<?php if (!empty($content['row'])): ?>
  <div class="row">
    <?php print render($content['row']); ?>
  </div> <!-- /row -->
<?php endif; ?>
