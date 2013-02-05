<?php
/**
 * @file
 * feature_workflow_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_workflow_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'worfklow_node';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'workflow' => 'workflow',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-workflow_node-block_3' => array(
          'module' => 'views',
          'delta' => 'workflow_node-block_3',
          'region' => 'content',
          'weight' => 0,
        ),
        'quicktabs-workflow_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'workflow_tabs',
          'region' => 'content',
          'weight' => 1,
        ),
        'views-workflow_related_tasks-block' => array(
          'module' => 'views',
          'delta' => 'workflow_related_tasks-block',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['worfklow_node'] = $context;

  return $export;
}
