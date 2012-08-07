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
      'weight' => '0',
    ),
    'industries' => array(
      'name' => 'Industries',
      'machine_name' => 'industries',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
