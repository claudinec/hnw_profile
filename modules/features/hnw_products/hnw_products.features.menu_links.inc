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

  // Exported menu link: main-menu:industries-and-applications
  $menu_links['main-menu:industries-and-applications'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'industries-and-applications',
    'router_path' => 'industries-and-applications',
    'link_title' => 'Industries and Applications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/12
  $menu_links['main-menu:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Product Range',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Industries and Applications');
  t('Product Range');


  return $menu_links;
}
