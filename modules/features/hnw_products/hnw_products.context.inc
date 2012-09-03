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
    'views' => array(
      'values' => array(
        'industries_and_applications:page' => 'industries_and_applications:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-industries' => array(
          'module' => 'menu',
          'delta' => 'menu-industries',
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
  $export['industries_and_applications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'industry_display';
  $context->description = 'Display product categories that apply to this industry';
  $context->tag = 'products';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'industries' => 'industries',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-8009e60a5b328c4bcda087b1ada3d89b' => array(
          'module' => 'views',
          'delta' => '8009e60a5b328c4bcda087b1ada3d89b',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-industries' => array(
          'module' => 'menu',
          'delta' => 'menu-industries',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display product categories that apply to this industry');
  t('products');
  $export['industry_display'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_category_term_page';
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
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-product-range' => array(
          'module' => 'menu',
          'delta' => 'menu-product-range',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('products');
  $export['product_category_term_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_range';
  $context->description = '';
  $context->tag = 'products';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'product_range:page' => 'product_range:page',
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
