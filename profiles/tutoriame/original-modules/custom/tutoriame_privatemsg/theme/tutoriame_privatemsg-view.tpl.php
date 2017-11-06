<h4 class="privatemsg-title"><?php print $title; ?></h4>

<?php if (!empty($form)): ?>
  <div class="clearfix privatemsg-reply">
    <div class="privatemsg-author-avatar span4">
      <?php
      if (!empty($user->imagen_perfil)) {
        print $user->imagen_perfil;
      }
      ?>
    </div>
    <div class="privatemsg-reply-form span30">
      <?php print $form; ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($messages)): ?>
  <?php foreach ($messages as $message): ?>
  <div id="privatemsg-mid-<?php print $message->mid; ?>"  class="clearfix privatemsg-message privatemsg-mid-<?php echo $message->mid; ?><?php if ($message->is_new): print ' privatemsg-message-new privatemsg-new'; endif; ?>">
    <div class="privatemsg-author-avatar span4">
      <?php
        if (
          (isset($users[$message->author->uid])) &&
          ($author = $users[$message->author->uid]) &&
          (!empty($author->imagen_perfil))
        ) {
          print $author->imagen_perfil;
        }
      ?>
    </div>
 

   <div class="privatemsg-message-information span28">
	<div class="privatemsg-message-information-inner">
      <?php
        if (
          (isset($users[$message->author->uid])) &&
          ($author = $users[$message->author->uid]) &&
          (!empty($author->nombre))
        ):
      ?>
      <span class="privatemsg-author-name"><?php print $author->nombre; ?></span>
      <?php endif; ?>
      <span class="privatemsg-message-date"><?php print format_date($message->timestamp, 'formatos_fecha_dd_de_mes_aaaa'); ?></span>
      <div class="privatemsg-message-body"><?php print check_markup($message->body, $message->format); ?></div>
      <?php if (!empty($message->adjuntos)): ?>
        <?php foreach ($message->adjuntos as $adjunto): ?>
        <div class="privatemsg-attachment"><?php print $adjunto; ?></div>
        <?php endforeach; ?>
      <?php endif; ?>
    </div>
	</div>
  </div>
  <?php endforeach; ?>

  <?php if (!empty($pager)): ?>
  <div class="privatemsg-view-pager"><?php print $pager; ?></div>
  <?php endif; ?>

<?php endif; ?>
