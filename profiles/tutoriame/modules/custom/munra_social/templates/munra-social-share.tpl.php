<?php

/**
 * @file
 * Template para el bloque munra social share.
 *
 * Variables disponibles:
 * - $buttons: botones para compartir las página
 * - $align: left o right
 */
?>
<?php if (!empty($buttons)): ?>
  <ul class="munra-social munra-social-share munra-social-align-<?php print $align; ?>">
  <?php foreach ($buttons as $service => $button): ?>
    <li class="munra-social-share-button munra-social-share-<?php print drupal_clean_css_identifier($service); ?>"><?php print $button; ?></li>
  <?php endforeach; ?>
  </ul>
<?php endif; ?>
