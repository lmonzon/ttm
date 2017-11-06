<?php

/**
 * Template for one row.
 */

?>

<?php if (!empty($content['row'])): ?>
  <div class="row">
	  <div class="span20 content">
		<?php print render($content['row']); ?>
	  </div>
  </div> <!-- /row -->
<?php endif; ?>
