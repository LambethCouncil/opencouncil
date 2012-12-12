<?php
/**
 * @file
 * feature_points_of_interest_views_and_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_points_of_interest_views_and_context_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_points_of_interest_views_and_context_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_points_of_interest_views_and_context_node_info() {
  $items = array(
    'point_of_interest' => array(
      'name' => t('Point of Interest'),
      'base' => 'node_content',
      'description' => t('A point of interest to be displayed on a map.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
