<?php
/**
 * @file
 * hnw_products.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hnw_products_taxonomy_default_vocabularies() {
  return array(
    'applications' => array(
      'name' => 'Applications',
      'machine_name' => 'applications',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'industries' => array(
      'name' => 'Industries',
      'machine_name' => 'industries',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
    ),
    'product_categories' => array(
      'name' => 'Product Categories',
      'machine_name' => 'product_categories',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-10',
    ),
  );
}
