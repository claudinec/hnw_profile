<?php
/**
 * @file
 * hnw_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function hnw_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: HNW WYSIWYG.
  $formats['hnw_wysiwyg'] = array(
    'format' => 'hnw_wysiwyg',
    'name' => 'HNW WYSIWYG',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <iframe>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  return $formats;
}
