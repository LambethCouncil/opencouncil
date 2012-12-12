<?php
/**
 * @file
 * feature_bulletin.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_bulletin_node_info() {
  $items = array(
    'bulletin' => array(
      'name' => t('Bulletin'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
