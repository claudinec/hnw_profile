<?php
/**
 * @file
 * hnw_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hnw_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|default';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Further information',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_link',
      1 => 'field_event_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Further information',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_info|node|event|default'] = $field_group;

  return $export;
}
