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
        'views-home_intro-block' => array(
          'module' => 'views',
          'delta' => 'home_intro-block',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-home_featured_content-block' => array(
          'module' => 'views',
          'delta' => 'home_featured_content-block',
          'region' => 'preface_first',
          'weight' => '-9',
        ),
      ),
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'opencouncil' => array(
        'disable' => array(
          'header_first' => 'header_first',
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'branding' => 0,
          'menu' => 0,
          'sidebar_second' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage'] = $context;

  return $export;
}
