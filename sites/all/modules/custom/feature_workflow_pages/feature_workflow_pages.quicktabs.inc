<?php
/**
 * @file
 * feature_workflow_pages.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function feature_workflow_pages_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'workflow_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Workflow Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_workflow_node-block',
      'hide_title' => 1,
      'title' => 'Essentials',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_workflow_node-block_1',
      'hide_title' => 1,
      'title' => 'More Information',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Essentials');
  t('More Information');
  t('Workflow Tabs');

  $export['workflow_tabs'] = $quicktabs;

  return $export;
}
