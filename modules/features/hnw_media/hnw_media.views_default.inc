<?php
/**
 * @file
 * hnw_media.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hnw_media_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Media image */
  $handler->display->display_options['fields']['field_media_image']['id'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['table'] = 'field_data_field_media_image';
  $handler->display->display_options['fields']['field_media_image']['field'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_media_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_media_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_media_publication_date']['id'] = 'field_media_publication_date';
  $handler->display->display_options['fields']['field_media_publication_date']['table'] = 'field_data_field_media_publication_date';
  $handler->display->display_options['fields']['field_media_publication_date']['field'] = 'field_media_publication_date';
  $handler->display->display_options['fields']['field_media_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_publication_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_publication_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media_publication_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_media_publication_date']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Publication date (field_media_publication_date) */
  $handler->display->display_options['sorts']['field_media_publication_date_value']['id'] = 'field_media_publication_date_value';
  $handler->display->display_options['sorts']['field_media_publication_date_value']['table'] = 'field_data_field_media_publication_date';
  $handler->display->display_options['sorts']['field_media_publication_date_value']['field'] = 'field_media_publication_date_value';
  $handler->display->display_options['sorts']['field_media_publication_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media_item' => 'media_item',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'media';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Media';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['media'] = $view;

  return $export;
}
