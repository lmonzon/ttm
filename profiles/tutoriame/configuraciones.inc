<?php

/**
 * Array con las variables de configuración básica.
 */
$variables = array(
  // Jquery update.
  'jquery_update_compression_type' => 'min',
  'jquery_update_jquery_cdn' => 'none',
  'jquery_update_jquery_version' => '1.7',
  'jquery_update_admin_theme' => '0',

  // Tema de administración.
  'admin_theme' => 'seven',
  'node_admin_theme' => '1',

  // File system.
  'file_temporary_path' => 'sites/default/tmp',
  'file_private_path' => 'private',

  'views_ui_show_master_display' => '1',
  'views_ui_show_sql_query' => '1',

  // Pathauto.
  'pathauto_ignore_words' => 'a, an, as, at, before, but, by, for, from, is, in, into, like, of, off, on, onto, per, since, than, the, this, that, to, up, via, with, un, como, en, ante, pero, por, desde, es, de, sobre, para, el, este, esta, el, la, con, los, las',
  'pathauto_node_pattern' => '[node:title]',

  // Sólo los administradores pueden crear cuentas.
  'user_register' => '0',
);
