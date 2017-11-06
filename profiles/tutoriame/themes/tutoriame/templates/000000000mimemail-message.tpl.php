<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
    <?php endif; ?>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>

    <div class="container">
      <div class="header" style="margin-top:20px;">
        <div id="logo" class="offset1">
          <img src="<?php print drupal_get_path('theme', 'tutoriame'); ?>/logo.png" /><br />
          <div id="slogan" class="titulo-tres verde" style="color:#52BE9C;font-size:16px;font-weight:bold;">conectamos proyectos y conocimiento</div>
        </div>
      </div>
      <div class="row" style="background:#F0F0F0;border-bottom:4px solid #F05F55;font-size:16px;font-weight:bold;margin-top:50px;padding:30px;">
        <div id="center">
          <div id="main">
            <?php print $body ?>
          </div>
        </div>
      </div>
    </div>
  </body>
</html>
