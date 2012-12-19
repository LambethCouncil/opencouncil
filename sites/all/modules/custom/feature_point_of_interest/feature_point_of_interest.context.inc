<?php
/**
 * @file
 * feature_point_of_interest.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_point_of_interest_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'point_of_interest_node';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'point_of_interest' => 'point_of_interest',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bulletin-block' => array(
          'module' => 'views',
          'delta' => 'bulletin-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-point_of_interest_intro-block' => array(
          'module' => 'views',
          'delta' => 'point_of_interest_intro-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-7ee7aac15190af5820c8e4cbe5852d2d' => array(
          'module' => 'views',
          'delta' => '7ee7aac15190af5820c8e4cbe5852d2d',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-d948798ddadd125105c0c91af04fb030' => array(
          'module' => 'views',
          'delta' => 'd948798ddadd125105c0c91af04fb030',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-f9aae51d6160850bab5b5951d83dcf67' => array(
          'module' => 'views',
          'delta' => 'f9aae51d6160850bab5b5951d83dcf67',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-d01d87f2ea929cdc0604bbc15e752cf2' => array(
          'module' => 'views',
          'delta' => 'd01d87f2ea929cdc0604bbc15e752cf2',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-node_tasks-block' => array(
          'module' => 'views',
          'delta' => 'node_tasks-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-contact_person-block' => array(
          'module' => 'views',
          'delta' => 'contact_person-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-6071975d9c673bea6fe26be6ed80c6dc' => array(
          'module' => 'views',
          'delta' => '6071975d9c673bea6fe26be6ed80c6dc',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['point_of_interest_node'] = $context;

  return $export;
}
