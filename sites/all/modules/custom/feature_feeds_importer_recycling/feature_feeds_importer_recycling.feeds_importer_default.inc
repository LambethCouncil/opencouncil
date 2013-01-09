<?php
/**
 * @file
 * feature_feeds_importer_recycling.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feature_feeds_importer_recycling_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'recycling';
  $feeds_importer->config = array(
    'name' => 'Recycling',
    'description' => 'Import for Recycling data set',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'recycling_centre',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Postcode',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Address',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Website',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Materials',
            'target' => 'field_recycling_category',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Services',
            'target' => 'body',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Second Hand Shop',
            'target' => 'field_recycling_second_hand_shop',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Repair',
            'target' => 'field_recycling_repair',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Hire',
            'target' => 'field_recycling_hire',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Reuse or Recycle',
            'target' => 'field_recycling_recycle',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Telephone',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => '1',
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['recycling'] = $feeds_importer;

  return $export;
}
