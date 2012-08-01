<?php
/**
 * @file
 * hnw_enquiries.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hnw_enquiries_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_enquiry';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_enquiry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_enquiry';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_enquiry';
  $strongarm->value = '1';
  $export['node_preview_enquiry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_enquiry';
  $strongarm->value = 0;
  $export['node_submitted_enquiry'] = $strongarm;

  return $export;
}
