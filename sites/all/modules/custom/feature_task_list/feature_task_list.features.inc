<?php
/**
 * @file
 * feature_task_list.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_task_list_node_info() {
  $items = array(
    'task_link' => array(
      'name' => t('Task Link'),
      'base' => 'node_content',
      'description' => t('A list of tasks that can be carried out on the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
