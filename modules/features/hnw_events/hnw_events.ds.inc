<?php
/**
 * @file
 * hnw_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hnw_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hnw_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_event_image',
        1 => 'group_event_info',
        2 => 'field_event_link',
        3 => 'field_event_address',
      ),
      'right' => array(
        0 => 'field_event_date',
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_event_image' => 'left',
      'group_event_info' => 'left',
      'field_event_date' => 'right',
      'title' => 'right',
      'body' => 'right',
      'field_event_link' => 'left',
      'field_event_address' => 'left',
    ),
    'classes' => array(),
  );
  $export['node|event|default'] = $ds_layout;

  return $export;
}
