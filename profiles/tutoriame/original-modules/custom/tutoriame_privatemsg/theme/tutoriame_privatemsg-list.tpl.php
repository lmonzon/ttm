<?php if (!empty($messages)): ?>
  <?php foreach ($messages as $message): ?>
  <div id="privatemsg-thread-<?php print $message->thread_id; ?>" class="clearfix span21 offset1 privatemsg-thread privatemsg-thread-<?php echo $message->thread_id; ?><?php if ($message->is_new): print ' privatemsg-thread-new privatemsg-new'; endif; ?>">
    <div class="privatemsg-author-avatar span2">
      <?php
      if (
        (!empty($message->participants)) &&
        (is_array($message->participants))
      ) {
        foreach ($message->participants as $participant) {
          if (
            (isset($users[$participant])) &&
            ($participant = $users[$participant]) &&
            (!empty($participant->imagen_perfil))
          ) {
            print $participant->imagen_perfil;
          }
        }
      }
      ?>
    </div>
    <div class="privatemsg-authors span4">
      <?php
      if (
        (!empty($message->participants)) &&
        (is_array($message->participants))
      ):
        foreach ($message->participants as $participant):
          if (
            (isset($users[$participant])) &&
            ($participant = $users[$participant]) &&
            (!empty($participant->nombre))
          ):
      ?>
      <div class="privatemsg-author-name"><?php print $participant->nombre; ?></div>
      <?php
          endif;
        endforeach;
      endif;
      ?>
      <div class="privatemsg-message-date"><?php print format_date($message->last_updated, 'formatos_fecha_dd_mm_aa'); ?></div>
      <div class="privatemsg-project-state"><?php print $message->proyecto_consultado->field_estado_del_proyecto['und'][0]['label']; ?></div>
    </div>
    <div class="privatemsg-message-information span14">
      <div class="privatemsg-project-name"><?php print l($message->proyecto_consultado->title, 'node/' . $message->proyecto_consultado->nid); ?></div>
      <div class="privatemsg-message-body"><?php print l(check_plain($message->last_message->body), 'mis-conversaciones/' . $message->thread_id); ?></div>
    </div>
  </div>
  <?php endforeach; ?>

  <?php print $pager; ?>
<?php else: ?>
  <div id="privatemsg-thread" class="clearfix span21 offset1 privatemsg-thread">
    <div class="privatemsg-sin-conversaciones">No tiene conversaciones</div>
  </div>
<?php endif; ?>
