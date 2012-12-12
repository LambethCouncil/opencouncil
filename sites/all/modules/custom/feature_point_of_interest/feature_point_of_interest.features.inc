<?php
/**
 * @file
 * feature_point_of_interest.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_point_of_interest_node_info() {
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
