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
}

