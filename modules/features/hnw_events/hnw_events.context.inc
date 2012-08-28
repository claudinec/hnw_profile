<?php
/**
 * @file
 * hnw_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hnw_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_layout';
  $context->description = '';
  $context->tag = 'events';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'events' => 'events',
        'events:page' => 'events:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-events-page' => array(
          'module' => 'views',
          'delta' => '-exp-events-page',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('events');
  $export['events_layout'] = $context;

  return $export;
}
