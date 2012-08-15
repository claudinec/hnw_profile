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

  // Exported menu: menu-applications
  $menus['menu-applications'] = array(
    'menu_name' => 'menu-applications',
    'title' => 'Applications',
    'description' => '',
  );
  // Exported menu: menu-industries
  $menus['menu-industries'] = array(
    'menu_name' => 'menu-industries',
    'title' => 'Industries',
    'description' => '',
  );
  // Exported menu: menu-product-range
  $menus['menu-product-range'] = array(
    'menu_name' => 'menu-product-range',
    'title' => 'Product Range',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  t('Industries');
  t('Product Range');


  return $menus;
}
