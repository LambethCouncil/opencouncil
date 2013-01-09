<?php
/**
 * @file
 * feature_feeds_importer_recycling.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_feeds_importer_recycling_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
