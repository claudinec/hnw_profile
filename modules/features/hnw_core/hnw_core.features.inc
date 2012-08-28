<?php
/**
 * @file
 * hnw_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hnw_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  // Enable hnw_domains feature IFF we are on a domain with site aliases enabled in Aegir.
  if (preg_match('/http:\/\/dev-hnw-(au|nz).moatdev.com/', $GLOBALS['base_url'])) {
    _hnw_domains_enable();
  }
  else {
    _hnw_domains_disable();
  }
}

// Helper function to disable hnw_domains feature.
function _hnw_domains_disable() {
  module_disable(array('hnw_domains'));
}

// Helper function to enable hnw_domains feature.
function _hnw_domains_enable() {
  module_enable(array('hnw_domains'));
}
