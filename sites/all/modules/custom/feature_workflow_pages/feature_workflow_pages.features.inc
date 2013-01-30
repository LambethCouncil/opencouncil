<?php
/**
 * @file
 * feature_workflow_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_workflow_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_workflow_pages_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_workflow_pages_node_info() {
  $items = array(
    'workflow' => array(
      'name' => t('Workflow'),
      'base' => 'node_content',
      'description' => t('Provides information regarding a specific task e.g. apply for a disabled parking permit, apply for council housing.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
