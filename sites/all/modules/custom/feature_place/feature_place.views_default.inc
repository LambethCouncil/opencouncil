<?php
/**
 * @file
 * feature_place.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_place_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'image_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'image_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'image_view';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: place_image */
  $handler->display->display_options['fields']['field_place_image']['id'] = 'field_place_image';
  $handler->display->display_options['fields']['field_place_image']['table'] = 'field_data_field_place_image';
  $handler->display->display_options['fields']['field_place_image']['field'] = 'field_place_image';
  $handler->display->display_options['fields']['field_place_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_place_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_place_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_place_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_place_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: place_image */
  $handler->display->display_options['fields']['field_place_image']['id'] = 'field_place_image';
  $handler->display->display_options['fields']['field_place_image']['table'] = 'field_data_field_place_image';
  $handler->display->display_options['fields']['field_place_image']['field'] = 'field_place_image';
  $handler->display->display_options['fields']['field_place_image']['label'] = '';
  $handler->display->display_options['fields']['field_place_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_place_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_place_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_place_image']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'node/%/image ';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: place_image */
  $handler->display->display_options['fields']['field_place_image']['id'] = 'field_place_image';
  $handler->display->display_options['fields']['field_place_image']['table'] = 'field_data_field_place_image';
  $handler->display->display_options['fields']['field_place_image']['field'] = 'field_place_image';
  $handler->display->display_options['fields']['field_place_image']['label'] = '';
  $handler->display->display_options['fields']['field_place_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_place_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_place_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_place_image']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $export['image_view'] = $view;

  $view = new view;
  $view->name = 'map_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'map view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo';
  $handler->display->display_options['style_options']['popup_source'] = 'title';
  $handler->display->display_options['style_options']['geofield_map_zoom'] = '13';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: geo */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
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
  $handler->display->display_options['fields']['field_geo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_geo']['field_api_classes'] = 0;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );

  /* Display: Map data */
  $handler = $view->new_display('openlayers', 'Map data', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_geo',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geo',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: geo */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
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
  $handler->display->display_options['fields']['field_geo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_geo']['field_api_classes'] = 0;

  /* Display: Map page */
  $handler = $view->new_display('page', 'Map page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo';
  $handler->display->display_options['style_options']['popup_source'] = 'title';
  $handler->display->display_options['style_options']['geofield_map_zoom'] = '13';
  $handler->display->display_options['style_options']['geofield_map_scale'] = 1;
  $handler->display->display_options['style_options']['geofield_map_overview'] = 1;
  $handler->display->display_options['style_options']['geofield_map_scrollwheel'] = 1;
  $handler->display->display_options['style_options']['geofield_map_draggable'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['title'] = 'Map %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['path'] = 'node/%/maps';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo';
  $handler->display->display_options['style_options']['popup_source'] = 'title';
  $handler->display->display_options['style_options']['geofield_map_zoom'] = '13';
  $handler->display->display_options['style_options']['geofield_map_draggable'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: geo */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
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
  $handler->display->display_options['fields']['field_geo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_geo']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );
  $handler->display->display_options['block_description'] = 'Map block';
  $export['map_view'] = $view;

  return $export;
}
