<?php
/**
 * @file
 * hnw_products.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hnw_products_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:product-list
  $menu_links['main-menu:product-list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'product-list',
    'router_path' => 'product-list',
    'link_title' => 'Product List',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Product List');


  return $menu_links;
}
