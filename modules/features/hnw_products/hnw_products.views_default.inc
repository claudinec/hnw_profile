<?php
/**
 * @file
 * hnw_products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hnw_products_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'industries_and_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Industries and Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Industries and Applications';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Five randomly selected product categories.';
  $handler->display->display_options['header']['area']['format'] = 'hnw_wysiwyg';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    3 => '3',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'industries-and-applications';
  $handler->display->display_options['menu']['title'] = 'Industries and Applications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['industries_and_applications'] = $view;

  $view = new view;
  $view->name = 'product_categories_in_industry';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Product categories in industry';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product categories in industry';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Industries and Applications (field_industries_and_application) */
  $handler->display->display_options['relationships']['field_industries_and_application_value']['id'] = 'field_industries_and_application_value';
  $handler->display->display_options['relationships']['field_industries_and_application_value']['table'] = 'field_data_field_industries_and_application';
  $handler->display->display_options['relationships']['field_industries_and_application_value']['field'] = 'field_industries_and_application_value';
  $handler->display->display_options['relationships']['field_industries_and_application_value']['required'] = 0;
  $handler->display->display_options['relationships']['field_industries_and_application_value']['delta'] = '-1';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Contextual filter: Field collection item: Industries (field_industries) */
  $handler->display->display_options['arguments']['field_industries_tid']['id'] = 'field_industries_tid';
  $handler->display->display_options['arguments']['field_industries_tid']['table'] = 'field_data_field_industries';
  $handler->display->display_options['arguments']['field_industries_tid']['field'] = 'field_industries_tid';
  $handler->display->display_options['arguments']['field_industries_tid']['relationship'] = 'field_industries_and_application_value';
  $handler->display->display_options['arguments']['field_industries_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_industries_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_industries_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_industries_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_industries_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_industries_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_industries_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_industries_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_industries_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_industries_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_industries_tid']['not'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'product_categories' => 'product_categories',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['product_categories_in_industry'] = $view;

  return $export;
}
