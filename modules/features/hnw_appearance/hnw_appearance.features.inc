<?php
/**
 * @file
 * hnw_appearance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hnw_appearance_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_image_default_styles().
 */
function hnw_appearance_image_default_styles() {
  $styles = array();

  // Exported image style: hnw_4-cols_300w
  $styles['hnw_4-cols_300w'] = array(
    'name' => 'hnw_4-cols_300w',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '300',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
