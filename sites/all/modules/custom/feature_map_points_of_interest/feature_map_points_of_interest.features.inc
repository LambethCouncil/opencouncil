<?php
/**
 * @file
 * feature_map_points_of_interest.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_map_points_of_interest_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}
