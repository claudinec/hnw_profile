<?php
/**
 * @file
 * hnw_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hnw_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hnw_media_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hnw_media_node_info() {
  $items = array(
    'media_item' => array(
      'name' => t('Media item'),
      'base' => 'node_content',
      'description' => t('Use this for references in internal or external media.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
