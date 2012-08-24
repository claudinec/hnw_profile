<?php
/**
 * @file
 * hnw_products.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hnw_products_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apps_ind|node|product|default';
  $field_group->group_name = 'group_apps_ind';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applications and Industries',
    'weight' => '4',
    'children' => array(
      0 => 'field_industries',
      1 => 'field_applications',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_apps_ind|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_parameters|node|product|default';
  $field_group->group_name = 'group_product_parameters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product parameters',
    'weight' => '6',
    'children' => array(
      0 => 'field_max_temp',
      1 => 'field_max_flow_rate',
      2 => 'field_max_diff_pressure',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_parameters|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_parameters|node|product|form';
  $field_group->group_name = 'group_product_parameters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product parameters',
    'weight' => '12',
    'children' => array(
      0 => 'field_max_temp',
      1 => 'field_max_flow_rate',
      2 => 'field_max_diff_pressure',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_parameters|node|product|form'] = $field_group;

  return $export;
}
