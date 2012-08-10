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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="../media/archive" class="archive-link">View Archive</a>';
  $handler->display->display_options['footer']['area']['format'] = 'moat_wysiwyg';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
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
    'image_style' => 'hnw_medium_132x116',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_media_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_media_publication_date']['id'] = 'field_media_publication_date';
  $handler->display->display_options['fields']['field_media_publication_date']['table'] = 'field_data_field_media_publication_date';
  $handler->display->display_options['fields']['field_media_publication_date']['field'] = 'field_media_publication_date';
  $handler->display->display_options['fields']['field_media_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_media_publication_date']['alter']['text'] = '[title], [field_media_publication_date]';
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
  $handler->display->display_options['fields']['field_media_publication_date']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_media_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_publication_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_publication_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_publication_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media_publication_date']['settings'] = array(
    'format_type' => 'short',
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
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
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
