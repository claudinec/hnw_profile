<?php
/**
 * @file
 * hnw_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hnw_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_fields';
  $strongarm->value = '';
  $export['ds_classes_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_regions';
  $strongarm->value = 'grid-1|Grid 1
grid-2|Grid 2
grid-3|Grid 3
grid-4|Grid 4
grid-6|Grid 6
grid-8|Grid 8
alpha|Alpha
omega|Omega';
  $export['ds_classes_regions'] = $strongarm;

  return $export;
}
