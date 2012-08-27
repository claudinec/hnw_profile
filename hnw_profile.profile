<?php
/**
 * @file
 * Enables modules and site configuration for the Moat Standard site installation.
 */

!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('hnw_profile');

// Enable hnw_domains feature IFF we are on a domain with site aliases enabled in Aegir.
function hnw_profile_update_7102() {
  if (preg_match('/http:\/\/dev-hnw-(au|nz).moatdev.com/', $base)) {
    _hnw_domains_enable();
  }
}

// Helper function to enable hnw_domains feature.
function _hnw_domains_enable() {
  module_enable(array('hnw_domains'));
}