<?php
/**
 * @file
 * hnw_domains.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hnw_domains_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'domains_contactus_au';
  $context->description = 'Display AU map on contact page if on AU domain';
  $context->tag = 'domains';
  $context->conditions = array(
    'domain' => array(
      'values' => array('dev_hnw_au'),
    ),
    'path' => array(
      'values' => array(
        'contact-us' => 'contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display AU map on contact page if on AU domain');
  t('domains');
  $export['domains_contactus_au'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'domains_contactus_nz';
  $context->description = 'Display NZ map on contact page if on NZ domain';
  $context->tag = 'domains';
  $context->conditions = array(
    'domain' => array(
      'values' => array('dev_hnw_nz'),
    ),
    'path' => array(
      'values' => array(
        'contact-us' => 'contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display NZ map on contact page if on NZ domain');
  t('domains');
  $export['domains_contactus_nz'] = $context;

  return $export;
}
