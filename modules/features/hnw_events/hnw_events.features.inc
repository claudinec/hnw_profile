<?php
/**
 * @file
 * hnw_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hnw_events_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function hnw_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hnw_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Event'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}