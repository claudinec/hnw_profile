<?php
/**
 * @file
 * hnw_enquiries.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hnw_enquiries_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|enquiry|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'enquiry';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'map_au' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|enquiry|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hnw_enquiries_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'map_au';
  $ds_field->label = 'Map AU';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'block|3',
    'block_render' => '1',
  );
  $export['map_au'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'map_nz';
  $ds_field->label = 'Map NZ';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'block|4',
    'block_render' => '1',
  );
  $export['map_nz'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hnw_enquiries_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|enquiry|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'enquiry';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'map_au',
      ),
      'right' => array(
        0 => 'body',
        1 => 'webform',
      ),
    ),
    'fields' => array(
      'map_au' => 'left',
      'body' => 'right',
      'webform' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|enquiry|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function hnw_enquiries_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'contact_us';
  $ds_view_mode->label = 'Contact Us';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['contact_us'] = $ds_view_mode;

  return $export;
}
