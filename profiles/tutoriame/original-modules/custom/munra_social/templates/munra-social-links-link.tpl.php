<?php

/**
 * @file
 * Template para cada link del bloque munra social links.
 *
 * Variables disponibles:
 * - $name: nombre de la red / servicio / etc.
 * - $title: título configurado en el bloque (nombre personalizado)
 * - $url: enlace html a la red / servicio / etc.
 * - $icon: elemento img con el icono de la red / servicio / etc.
 */
?>
<?php if (!empty($url) && !empty($icon)): ?>
  <a href="<?php print $url; ?>" title="<?php print $title; ?>">
    <?php print $icon; ?>
  </a>
<?php endif; ?>
