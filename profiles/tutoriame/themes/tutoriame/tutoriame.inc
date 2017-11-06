<?php

function tutoriame_clean_css_identifier($string) {
  $clean = drupal_html_class($string);
  $clean = preg_replace('/[^A-Za-z0-9\-_]/', '', $clean);
  return $clean;
}
