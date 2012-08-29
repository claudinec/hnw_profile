<?php
/**
 * @file
 * hnw_products.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hnw_products_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'industries_and_applications';
  $context->description = '';
  $context->tag = 'products';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'applications' => 'applications',
        'industries' => 'industries',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'product_list:page_2' => 'product_list:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'apachesolr_search-sort' => array(
          'module' => 'apachesolr_search',
          'delta' => 'sort',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'menu-menu-industries' => array(
          'module' => 'menu',
          'delta' => 'menu-industries',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'menu-menu-applications' => array(
          'module' => 'menu',
          'delta' => 'menu-applications',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('products');
  $export['industries_and_applications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_range';
  $context->description = '';
  $context->tag = 'products';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'product_categories' => 'product_categories',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'product_list:page_1' => 'product_list:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'apachesolr_search-sort' => array(
          'module' => 'apachesolr_search',
          'delta' => 'sort',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-mkMgGMz0RZSwrDpH7Gcb81EPTl2kz5fO' => array(
          'module' => 'facetapi',
          'delta' => 'mkMgGMz0RZSwrDpH7Gcb81EPTl2kz5fO',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('products');
  $export['product_range'] = $context;

  return $export;
}
