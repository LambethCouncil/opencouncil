<?php
/**
 * @file
 * feature_home.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_home_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'home' => 'home',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-home_intro-block' => array(
          'module' => 'views',
          'delta' => 'home_intro-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-home_featured_content-block' => array(
          'module' => 'views',
          'delta' => 'home_featured_content-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-service_categories-block' => array(
          'module' => 'views',
          'delta' => 'service_categories-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'quicktabs-most_popular_content' => array(
          'module' => 'quicktabs',
          'delta' => 'most_popular_content',
          'region' => 'content',
          'weight' => '-7',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage'] = $context;

  return $export;
}
