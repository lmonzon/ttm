<table class="usuarios-institucion">
  <tr class="encabezado">
    <td><?php print $logo; ?></td>
  </tr>
  <?php foreach ($usuarios as $user): ?>
    <tr class="usuario-enlace">
      <td><?php print $user; ?></td>
    </tr>
  <?php endforeach; ?>
</table>
