<?php

/**
 * @file
 * Template para el bloque munra social links.
 *
 * Variables disponibles:
 * - $links: enlaces a las redes / servicios / etc.
 * - $align: left o right
 */
?>
<?php if (!empty($links)): ?>
  <ul class="munra-social munra-social-links munra-social-align-<?php print $align; ?>">
  <?php foreach ($links as $link): ?>
    <li class="munra-social-links-link"><?php print $link; ?></li>
  <?php endforeach; ?>
  </ul>
<?php endif; ?>
