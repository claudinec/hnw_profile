<?php
/**
 * @file
 * hnw_events.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function hnw_events_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'listing_date';
  $formatter->label = 'Listing Date';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'datetime';
  $formatter->code = '$from_date = \'<div class="date-day">\' . date(\'j\', strtotime($variables[\'#items\'][0][\'value\'])) . \'</div><div class="date-month">\' . date(\'M\', strtotime($variables[\'#items\'][0][\'value\'])) . \'</div><div  class="date-year">\' .  date(\'Y\', strtotime($variables[\'#items\'][0][\'value\'])) . \'</div>\' ;
echo $from_date;';
  $formatter->fapi = '';
  $export['listing_date'] = $formatter;

  return $export;
}
