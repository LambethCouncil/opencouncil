<?php
/**
 * @file
 * feature_workflow_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_workflow_pages_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'workflow_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Workflow Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workflow Node Essentials';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Essentials */
  $handler->display->display_options['fields']['field_worfklow_essentials']['id'] = 'field_worfklow_essentials';
  $handler->display->display_options['fields']['field_worfklow_essentials']['table'] = 'field_data_field_worfklow_essentials';
  $handler->display->display_options['fields']['field_worfklow_essentials']['field'] = 'field_worfklow_essentials';
  $handler->display->display_options['fields']['field_worfklow_essentials']['label'] = '';
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_worfklow_essentials']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_worfklow_essentials']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_worfklow_essentials']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_worfklow_essentials']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'workflow' => 'workflow',
  );

  /* Display: Essentials */
  $handler = $view->new_display('block', 'Essentials', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Essentials';

  /* Display: More Info */
  $handler = $view->new_display('block', 'More Info', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More Information';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: More Information */
  $handler->display->display_options['fields']['field_workflow_more_info']['id'] = 'field_workflow_more_info';
  $handler->display->display_options['fields']['field_workflow_more_info']['table'] = 'field_data_field_workflow_more_info';
  $handler->display->display_options['fields']['field_workflow_more_info']['field'] = 'field_workflow_more_info';
  $handler->display->display_options['fields']['field_workflow_more_info']['label'] = '';
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_workflow_more_info']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_workflow_more_info']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_workflow_more_info']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_workflow_more_info']['field_api_classes'] = 0;

  /* Display: Other Ways */
  $handler = $view->new_display('block', 'Other Ways', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other ways to do this';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Other Ways */
  $handler->display->display_options['fields']['field_workflow_other_ways']['id'] = 'field_workflow_other_ways';
  $handler->display->display_options['fields']['field_workflow_other_ways']['table'] = 'field_data_field_workflow_other_ways';
  $handler->display->display_options['fields']['field_workflow_other_ways']['field'] = 'field_workflow_other_ways';
  $handler->display->display_options['fields']['field_workflow_other_ways']['label'] = '';
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_workflow_other_ways']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_workflow_other_ways']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_workflow_other_ways']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_workflow_other_ways']['field_api_classes'] = 0;

  /* Display: Intro */
  $handler = $view->new_display('block', 'Intro', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Intro */
  $handler->display->display_options['fields']['field_workflow_intro']['id'] = 'field_workflow_intro';
  $handler->display->display_options['fields']['field_workflow_intro']['table'] = 'field_data_field_workflow_intro';
  $handler->display->display_options['fields']['field_workflow_intro']['field'] = 'field_workflow_intro';
  $handler->display->display_options['fields']['field_workflow_intro']['label'] = '';
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_workflow_intro']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_workflow_intro']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_workflow_intro']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_workflow_intro']['field_api_classes'] = 0;
  $export['workflow_node'] = $view;

  return $export;
}
