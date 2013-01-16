<?php
/**
 * @file
 * feature_home.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function feature_home_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'most_popular_content';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Most Popular Content';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_most_visited_pages-block_1',
      'hide_title' => 1,
      'title' => 'Today',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_most_visited_pages-block',
      'hide_title' => 1,
      'title' => 'All Time',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'Mac';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('All Time');
  t('Most Popular Content');
  t('Today');

  $export['most_popular_content'] = $quicktabs;

  return $export;
}
