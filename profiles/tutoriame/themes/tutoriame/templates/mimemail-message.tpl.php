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

  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>><table width="600" border="0" align="center" cellpadding="0" cellspacing="0" bgcolor="#ffffff">
  <tbody><tr>
    <td><img src="<?php print drupal_get_path('theme', 'tutoriame'); ?>/logo.png" /></td>
  </tr>
  <tr>
    <td height="50" bgcolor="#ececec"><table width="100%" border="0" cellspacing="0" cellpadding="0">
      <tbody><tr>
        <td width="300" style="font-size:30px; font-weight:bold; color:#8f8f8f; padding-left:20px"><span style="color:#1abc9c; font-size:18px; font-family:Arial, Helvetica, sans-serif;">Aviso a usuarios</span></td>
        <td width="300" align="right" style="padding-right:20px">
        <?php $date = new DateTime(); echo $date->format('d/m/Y'); ?>
        </td>
      </tr>
    </tbody></table></td>
  </tr><tr>
    <td height="40">&nbsp;</td>
  </tr>
  <tr>
    <td><table width="520" border="0" align="center" cellpadding="0" cellspacing="0">
      <tbody><tr>
        <td style="font-size:24px; font-family:Arial, Helvetica, sans-serif;font-weight:bold; color:#5b5b5b; border-bottom:solid 3px #1abc9c;padding-bottom:10px;"><div align="center">ATENCION</div></td>
      </tr>
      <tr>
        <td><?php print $body ?></td>
      </tr>
      <tr>
        <td style="border-bottom:solid 1px #1abc9c">&nbsp;</td>
      </tr>
      <tr>
        <td>&nbsp;</td>
      </tr>
    </tbody></table></td>
  <tr>
    <td bgcolor="#e0e0e0" align="center"><a href="" style="padding-top:10px; padding-bottom:10px; padding-left:20px; padding-right:20px; font-size:20px; font-weight:bold; font-family:Arial, Helvetica, sans-serif; color:#fff; background:#F05F55; text-decoration:none;">Accede a Experto Online </a></td>
  </tr>
  </tr>
  <td bgcolor="#e0e0e0" style="padding:20px; font-size:16px; color:#8f8f8f" align="center">EXPERTOS PARA TUS PROYECTOS</td>
  </tr>
  <tr>
    <td><table width="600" border="0" cellpadding="0" cellspacing="0" bgcolor="#1abc9c">
      <tbody><tr>
        <td width="40">&nbsp;</td>
        <td width="240">&nbsp;</td>
        <td width="40">&nbsp;</td>
        <td width="240">&nbsp;</td>
        <td width="40">&nbsp;</td>
      </tr>
      <tr>
        <td width="40">&nbsp;</td>
        <td width="240" style="color: #ffffff; font-weight: bold; font-size: 18px; font-family:Arial, Helvetica, sans-serif;">Somos sociales</td>
        <td width="40">&nbsp;</td>
        <td width="240" style="color: #ffffff; font-weight: bold; font-size: 18px; font-family:Arial, Helvetica, sans-serif;"> Experto Online</td>
        <td width="40">&nbsp;</td>
      </tr>
      <tr>
        <td width="40">&nbsp;</td>
        <td width="240">&nbsp;</td>
        <td width="40">&nbsp;</td>
        <td width="240"><a href="" style="color:#fff">www.expertoonline.com.ar</a></td>
        <td width="40">&nbsp;</td>
      </tr>
      <tr>
        <td width="40">&nbsp;</td>
        <td width="240"><a href="http:twitter.com/expertoonline"><img src="<?php print drupal_get_path('theme', 'tutoriame'); ?>/twitter.png" border="0"></a><a href="http:facebook.com/tutoriame"><img src="<?php print drupal_get_path('theme', 'tutoriame'); ?>/facebook.png" border="0"></a><a href="http://www.google-plus.com/tutoriame"><img src="<?php print drupal_get_path('theme', 'tutoriame'); ?>/googleplus.png" border="0"></a></td>
        <td width="40">&nbsp;</td>
        <td width="240" style="color:#fff;">info@expertoonline.com.ar</td>
        <td width="40">&nbsp;</td>
      </tr>
      <tr>
        <td width="40">&nbsp;</td>
        <td width="240">&nbsp;</td>
        <td width="40">&nbsp;</td>
        <td width="240">&nbsp;</td>
        <td width="40">&nbsp;</td>
      </tr>
    </tbody></table></td>
  </tr>
</tbody></table>
</body></html>