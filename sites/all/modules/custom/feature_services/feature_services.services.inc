<?php
/**
 * @file
 * feature_services.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function feature_services_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'rest';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'rest';
  $endpoint->authentication = array();
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'points-of-interest' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['rest'] = $endpoint;

  return $export;
}
