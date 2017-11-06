<?php
/**
 * @file
 * configuraciones_generales.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function configuraciones_generales_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ttm-men-anonimo.
  $menus['menu-ttm-men-anonimo'] = array(
    'menu_name' => 'menu-ttm-men-anonimo',
    'title' => 'TTM Menú Anónimo',
    'description' => '',
  );
  // Exported menu: menu-ttm-men-usuario-emprendedor.
  $menus['menu-ttm-men-usuario-emprendedor'] = array(
    'menu_name' => 'menu-ttm-men-usuario-emprendedor',
    'title' => 'TTM Menú Usuario Emprendedor',
    'description' => '',
  );
  // Exported menu: menu-ttm-men-usuario-tutor.
  $menus['menu-ttm-men-usuario-tutor'] = array(
    'menu_name' => 'menu-ttm-men-usuario-tutor',
    'title' => 'TTM Menú Usuario Tutor',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-emprendedor.
  $menus['menu-ttm-menu-emprendedor'] = array(
    'menu_name' => 'menu-ttm-menu-emprendedor',
    'title' => 'TTM Menú Emprendedor',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-acerca.
  $menus['menu-ttm-menu-footer-acerca'] = array(
    'menu_name' => 'menu-ttm-menu-footer-acerca',
    'title' => 'TTM Menú Footer Acerca',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-contactos.
  $menus['menu-ttm-menu-footer-contactos'] = array(
    'menu_name' => 'menu-ttm-menu-footer-contactos',
    'title' => 'TTM Menú Footer Contactos',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-plataforma.
  $menus['menu-ttm-menu-footer-plataforma'] = array(
    'menu_name' => 'menu-ttm-menu-footer-plataforma',
    'title' => 'TTM Menú Footer Plataforma',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-prensa.
  $menus['menu-ttm-menu-footer-prensa'] = array(
    'menu_name' => 'menu-ttm-menu-footer-prensa',
    'title' => 'TTM Menú Footer Prensa',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-servicios.
  $menus['menu-ttm-menu-footer-servicios'] = array(
    'menu_name' => 'menu-ttm-menu-footer-servicios',
    'title' => 'TTM Menú Footer Servicios',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-tutor.
  $menus['menu-ttm-menu-tutor'] = array(
    'menu_name' => 'menu-ttm-menu-tutor',
    'title' => 'TTM Menú Tutor',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('TTM Menú Anónimo');
  t('TTM Menú Emprendedor');
  t('TTM Menú Footer Acerca');
  t('TTM Menú Footer Contactos');
  t('TTM Menú Footer Plataforma');
  t('TTM Menú Footer Prensa');
  t('TTM Menú Footer Servicios');
  t('TTM Menú Tutor');
  t('TTM Menú Usuario Emprendedor');
  t('TTM Menú Usuario Tutor');


  return $menus;
}
