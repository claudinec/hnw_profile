<?php
/**
 * @file
 * hnw_products.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function hnw_products_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-applications.
  $menus['menu-applications'] = array(
    'menu_name' => 'menu-applications',
    'title' => 'Applications',
    'description' => '',
  );
  // Exported menu: menu-industries.
  $menus['menu-industries'] = array(
    'menu_name' => 'menu-industries',
    'title' => 'Industries',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  t('Industries');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
