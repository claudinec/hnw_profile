<?php
/**
 * @file
 * hnw_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hnw_layout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
