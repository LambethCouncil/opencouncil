<?php
/**
 * @file
 * feature_contact_person.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_contact_person_node_info() {
  $items = array(
    'contact_person' => array(
      'name' => t('Contact Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
