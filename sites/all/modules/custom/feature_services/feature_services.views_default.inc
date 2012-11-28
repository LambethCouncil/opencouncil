<?php
/**
 * @file
 * feature_services.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_services_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'points_of_interest_services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Points of Interest Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Points of Interest Services';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_geo' => 'field_geo',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: geo */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['label'] = 'latitude';
  $handler->display->display_options['fields']['field_geo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geo']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_geo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_geo']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['fields']['field_geo']['field_api_classes'] = 0;
  /* Field: Content: geo */
  $handler->display->display_options['fields']['field_geo_1']['id'] = 'field_geo_1';
  $handler->display->display_options['fields']['field_geo_1']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo_1']['field'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo_1']['label'] = 'longitude';
  $handler->display->display_options['fields']['field_geo_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geo_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geo_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geo_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geo_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geo_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geo_1']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_geo_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['fields']['field_geo_1']['field_api_classes'] = 0;
  /* Field: Content: Point of Interest Type */
  $handler->display->display_options['fields']['field_point_of_interest_type']['id'] = 'field_point_of_interest_type';
  $handler->display->display_options['fields']['field_point_of_interest_type']['table'] = 'field_data_field_point_of_interest_type';
  $handler->display->display_options['fields']['field_point_of_interest_type']['field'] = 'field_point_of_interest_type';
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_point_of_interest_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_point_of_interest_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_point_of_interest_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_point_of_interest_type']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Point of Interest Type (field_point_of_interest_type) */
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['id'] = 'field_point_of_interest_type_tid';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['table'] = 'field_data_field_point_of_interest_type';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['field'] = 'field_point_of_interest_type_tid';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['expose']['operator_id'] = 'field_point_of_interest_type_tid_op';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['expose']['operator'] = 'field_point_of_interest_type_tid_op';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['vocabulary'] = 'points_of_interest';
  $handler->display->display_options['filters']['field_point_of_interest_type_tid']['error_message'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'point_of_interest' => 'point_of_interest',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'points-of-interest-services';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'points-of-interest';
  $export['points_of_interest_services'] = $view;

  return $export;
}
