<?php
/**
 * @file
 * hnw_products.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function hnw_products_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'redmine_server';
  $environment->name = 'redmine server';
  $environment->url = 'http://redmine.moatmedia.com.au:8983/solr/hnw';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => 'industries-and-applications
product-range
taxonomy/term/*',
    'apachesolr_search_show_facets' => 1,
  );
  $export['redmine_server'] = $environment;

  return $export;
}
