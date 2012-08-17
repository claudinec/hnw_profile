<?php
/**
 * @file
 * moat_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function moat_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Moat WYSIWYG
  $formats['moat_wysiwyg'] = array(
    'format' => 'moat_wysiwyg',
    'name' => 'Moat WYSIWYG',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <iframe>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  return $formats;
}
