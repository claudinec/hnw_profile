<?php
/**
 * @file
 * hnw_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hnw_banner_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function hnw_banner_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hnw_banner_image_default_styles() {
  $styles = array();

  // Exported image style: hnw_banner_slide
  $styles['hnw_banner_slide'] = array(
    'name' => 'hnw_banner_slide',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '860',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hnw_banner_node_info() {
  $items = array(
    'hnw_banner_slide' => array(
      'name' => t('Banner Slide'),
      'base' => 'node_content',
      'description' => t('Create a banner slide'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
