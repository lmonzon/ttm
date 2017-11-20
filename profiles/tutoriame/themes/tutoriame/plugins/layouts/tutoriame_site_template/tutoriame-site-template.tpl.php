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
    </div>
  <?php endif; ?>

  <div class="row">
    <?php if (!empty($content['main'])): ?>
      <div id="main-content" class="span48">
        <?php print render($content['main']); ?>
      </div> <!-- /center -->
    <?php endif; ?>
  </div> <!-- /main-row -->

  <?php if (!empty($content['footer'])): ?>
  <div class="footer span48 clearfix">
    <?php print render($content['footer']); ?>
  </div>
  <table border="0" cellpadding="0" cellspacing="0" width="100%">
	<tbody>
		</tr>
		<tr style="background-color:#000">
			<td>
			<table width="100%" height="20" border="0" cellpadding="0" cellspacing="0">
				<tbody>
					<tr>
						<th scope="col" width="1%">
						<div align="left">&nbsp;</div>
						</th>
						<th scope="col" width="69%">
						<div align="left">&copy; Copyright 2015 &nbsp;<a href="http://tutoriame.com" target="_blank">Tutoriame</a>. All Rights Reserved.</div>
						</th>
						<th scope="col" width="27%">
						<p align="right"><a href="http://tutoriame.com" title="Home">Home</a>&nbsp;/ <a href="/FAQ" title="FAQs">FAQs</a>&nbsp;/ <a href="/contactanos" title="Contact Us">Contacto</a></p>
						</th>
						<th scope="col" width="1%">&nbsp;</th>
					</tr>
				</tbody>
			</table>
			</td>
		</tr>
	</tbody>
</table>

  <?php endif; ?>

</div> <!-- /container -->
