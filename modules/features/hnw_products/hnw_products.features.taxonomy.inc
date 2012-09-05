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
    'air_handler_type' => array(
      'name' => 'Air handler type',
      'machine_name' => 'air_handler_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'applications' => array(
      'name' => 'Applications',
      'machine_name' => 'applications',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'fuel' => array(
      'name' => 'Fuel',
      'machine_name' => 'fuel',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'industries' => array(
      'name' => 'Industries',
      'machine_name' => 'industries',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-9',
    ),
    'medium' => array(
      'name' => 'Medium',
      'machine_name' => 'medium',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'product_categories' => array(
      'name' => 'Product Categories',
      'machine_name' => 'product_categories',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-10',
    ),
    'type_of_control' => array(
      'name' => 'Type of control',
      'machine_name' => 'type_of_control',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
