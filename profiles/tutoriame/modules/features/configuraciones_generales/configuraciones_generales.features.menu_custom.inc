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
    'title' => ' Experto Online Menú Anónimo',
    'description' => '',
  );
  // Exported menu: menu-ttm-men-usuario-emprendedor.
  $menus['menu-ttm-men-usuario-emprendedor'] = array(
    'menu_name' => 'menu-ttm-men-usuario-emprendedor',
    'title' => ' Experto Online Menú Usuario Emprendedor',
    'description' => '',
  );
  // Exported menu: menu-ttm-men-usuario-tutor.
  $menus['menu-ttm-men-usuario-tutor'] = array(
    'menu_name' => 'menu-ttm-men-usuario-tutor',
    'title' => ' Experto Online Menú Usuario Tutor',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-emprendedor.
  $menus['menu-ttm-menu-emprendedor'] = array(
    'menu_name' => 'menu-ttm-menu-emprendedor',
    'title' => ' Experto Online Menú Emprendedor',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-acerca.
  $menus['menu-ttm-menu-footer-acerca'] = array(
    'menu_name' => 'menu-ttm-menu-footer-acerca',
    'title' => ' Experto Online Menú Footer Acerca',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-contactos.
  $menus['menu-ttm-menu-footer-contactos'] = array(
    'menu_name' => 'menu-ttm-menu-footer-contactos',
    'title' => ' Experto Online Menú Footer Contactos',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-plataforma.
  $menus['menu-ttm-menu-footer-plataforma'] = array(
    'menu_name' => 'menu-ttm-menu-footer-plataforma',
    'title' => ' Experto Online Menú Footer Plataforma',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-prensa.
  $menus['menu-ttm-menu-footer-prensa'] = array(
    'menu_name' => 'menu-ttm-menu-footer-prensa',
    'title' => ' Experto Online Menú Footer Prensa',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-footer-servicios.
  $menus['menu-ttm-menu-footer-servicios'] = array(
    'menu_name' => 'menu-ttm-menu-footer-servicios',
    'title' => ' Experto Online Menú Footer Servicios',
    'description' => '',
  );
  // Exported menu: menu-ttm-menu-tutor.
  $menus['menu-ttm-menu-tutor'] = array(
    'menu_name' => 'menu-ttm-menu-tutor',
    'title' => ' Experto Online Menú Tutor',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t(' Experto Online Menú Anónimo');
  t(' Experto Online Menú Emprendedor');
  t(' Experto Online Menú Footer Acerca');
  t(' Experto Online Menú Footer Contactos');
  t(' Experto Online Menú Footer Plataforma');
  t(' Experto Online Menú Footer Prensa');
  t(' Experto Online Menú Footer Servicios');
  t(' Experto Online Menú Tutor');
  t(' Experto Online Menú Usuario Emprendedor');
  t(' Experto Online Menú Usuario Tutor');


  return $menus;
}
