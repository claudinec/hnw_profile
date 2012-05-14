<?php
/**
 * @file
 * moat_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function moat_banner_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function moat_banner_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function moat_banner_node_info() {
  $items = array(
    'moat_banner_slide' => array(
      'name' => t('Banner Slide'),
      'base' => 'node_content',
      'description' => t('Create a banner slide'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
