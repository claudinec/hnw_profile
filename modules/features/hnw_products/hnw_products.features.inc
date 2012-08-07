<?php
/**
 * @file
 * hnw_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hnw_products_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function hnw_products_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('Use this content type for product details.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
