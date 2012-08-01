<?php
/**
 * @file
 * hnw_media.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hnw_media_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_item|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|media_item|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hnw_media_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-omega_12_twocol_3_9';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_media_image',
        1 => 'field_media_link',
        2 => 'field_media_pdf',
      ),
      'right' => array(
        0 => 'title',
        1 => 'field_media_publication_date',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_media_image' => 'left',
      'field_media_link' => 'left',
      'field_media_pdf' => 'left',
      'title' => 'right',
      'field_media_publication_date' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|media_item|default'] = $ds_layout;

  return $export;
}
