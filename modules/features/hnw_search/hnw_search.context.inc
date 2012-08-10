<?php
/**
 * @file
 * hnw_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hnw_search_context_default_contexts() {
  $context = array();

  $context['search_all'] = new stdClass();
  $context['search_all'] = array(
    'disabled' => FALSE; /* Edit this to true to make a default context disabled initially */
  'api_version' => 3;
  'name' => 'search_all';
  'description' => 'Search blocks for all contexts';
  'tag' => 'search';
  'conditions' => array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  'reactions' => array(
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
        'apachesolr_search-mlt-001' => array(
          'module' => 'apachesolr_search',
          'delta' => 'mlt-001',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  'condition_mode' => 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search blocks for all contexts');
  t('search');
  );

$context['search_product_list'] = new stdClass();
$context['search_product_list'] = array(
'disabled' => FALSE; /* Edit this to true to make a default context disabled initially */
'api_version' => 3;
'name' => 'search_product_list';
'description' => 'Search blocks to display in Product List';
'tag' => 'search';
'conditions' => array(
  'node' => array(
    'values' => array(
      'product' => 'product',
    ),
    'options' => array(
      'node_form' => '1',
    ),
  ),
  'views' => array(
    'values' => array(
      'product_list' => 'product_list',
      'product_list:page' => 'product_list:page',
    ),
  ),
);
'reactions' => array(
  'block' => array(
    'blocks' => array(
      'search-form' => array(
        'module' => 'search',
        'delta' => 'form',
        'region' => 'sidebar_first',
        'weight' => '-10',
      ),
      'facetapi-g8F6Cxsv8uAE4t0SwSq6iBWr08rLzJ7W' => array(
        'module' => 'facetapi',
        'delta' => 'g8F6Cxsv8uAE4t0SwSq6iBWr08rLzJ7W',
        'region' => 'sidebar_first',
        'weight' => '-9',
      ),
      'facetapi-R6gceXJijK1N0VaY0O13Aoxiw2RlEv0W' => array(
        'module' => 'facetapi',
        'delta' => 'R6gceXJijK1N0VaY0O13Aoxiw2RlEv0W',
        'region' => 'sidebar_first',
        'weight' => '-8',
      ),
      'facetapi-rx3tdS1JUsiwd3jYM0F4flOdNlZOB1ve' => array(
        'module' => 'facetapi',
        'delta' => 'rx3tdS1JUsiwd3jYM0F4flOdNlZOB1ve',
        'region' => 'sidebar_first',
        'weight' => '-7',
      ),
    ),
  ),
);
'condition_mode' => 0;
);

// Translatables
// Included for use with string extractors like potx.
t('Search blocks to display in Product List');
t('search');
