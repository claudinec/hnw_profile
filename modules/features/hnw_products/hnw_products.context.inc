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
  $context->name = 'product_search';
  $context->description = '';
  $context->tag = 'products';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
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
        'facetapi-XxA9XHVRRtXATf2foNeI3ymu0Zn7xiQn' => array(
          'module' => 'facetapi',
          'delta' => 'XxA9XHVRRtXATf2foNeI3ymu0Zn7xiQn',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-XFjj5Xqm4rU5JykWirAQCcJpcGUrL9Ok' => array(
          'module' => 'facetapi',
          'delta' => 'XFjj5Xqm4rU5JykWirAQCcJpcGUrL9Ok',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-peZvRdBjumTJFOqV3vP9Drb5AKZfLWRP' => array(
          'module' => 'facetapi',
          'delta' => 'peZvRdBjumTJFOqV3vP9Drb5AKZfLWRP',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('products');
  $export['product_search'] = $context;

  return $export;
}
