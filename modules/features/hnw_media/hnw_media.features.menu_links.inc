<?php
/**
 * @file
 * hnw_media.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hnw_media_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:media
  $menu_links['main-menu:media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media',
    'router_path' => 'media',
    'link_title' => 'Media',
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
  t('Media');


  return $menu_links;
}
