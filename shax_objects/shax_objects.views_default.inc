<?php
/**
 * @file
 * shax_objects.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function shax_objects_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'base_objects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Shax Objects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shax Objects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="obj-title"><a href="[title]">[title]</a><div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_catalog_url']['id'] = 'field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['table'] = 'field_data_field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['field'] = 'field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_url']['type'] = 'text_plain';
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_call_number']['id'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['table'] = 'field_data_field_call_number';
  $handler->display->display_options['fields']['field_call_number']['field'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_call_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_call_number']['alter']['text'] = '<a href="[field_catalog_url]">[field_call_number]</a>';
  $handler->display->display_options['fields']['field_call_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_call_number']['type'] = 'text_plain';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = 'About This Item';
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '<div class="obj-description">[body]<div>
<div class="obj-author"><span class="obj-date">[field_year]</span>, [field_author]<div>
<div class="obj-callnum"><a href="[field_catalog_url]">[field_call_number]</a></div>';
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Material Type */
  $handler->display->display_options['fields']['field_material_type']['id'] = 'field_material_type';
  $handler->display->display_options['fields']['field_material_type']['table'] = 'field_data_field_material_type';
  $handler->display->display_options['fields']['field_material_type']['field'] = 'field_material_type';
  /* Field: Content: Shax Object: Image */
  $handler->display->display_options['fields']['field__field_shax_object_image']['id'] = 'field__field_shax_object_image';
  $handler->display->display_options['fields']['field__field_shax_object_image']['table'] = 'field_data_field__field_shax_object_image';
  $handler->display->display_options['fields']['field__field_shax_object_image']['field'] = 'field__field_shax_object_image';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'special_collections_objects' => 'special_collections_objects',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Material Type (field_material_type) */
  $handler->display->display_options['filters']['field_material_type_value']['id'] = 'field_material_type_value';
  $handler->display->display_options['filters']['field_material_type_value']['table'] = 'field_data_field_material_type';
  $handler->display->display_options['filters']['field_material_type_value']['field'] = 'field_material_type_value';
  $handler->display->display_options['filters']['field_material_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_material_type_value']['expose']['operator_id'] = 'field_material_type_value_op';
  $handler->display->display_options['filters']['field_material_type_value']['expose']['label'] = 'Material Type';
  $handler->display->display_options['filters']['field_material_type_value']['expose']['operator'] = 'field_material_type_value_op';
  $handler->display->display_options['filters']['field_material_type_value']['expose']['identifier'] = 'field_material_type_value';
  $handler->display->display_options['filters']['field_material_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_year' => 'field_year',
    'field_catalog_url' => 'field_catalog_url',
    'field_call_number' => 'field_call_number',
    'field_author' => 'field_author',
    'field_section' => 'field_section',
    'field_material_type' => 'field_material_type',
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
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catalog_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_call_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_material_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Shax object (field_shax_object) - reverse */
  $handler->display->display_options['relationships']['reverse_field_shax_object_node']['id'] = 'reverse_field_shax_object_node';
  $handler->display->display_options['relationships']['reverse_field_shax_object_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_shax_object_node']['field'] = 'reverse_field_shax_object_node';
  $handler->display->display_options['relationships']['reverse_field_shax_object_node']['label'] = 'field_shax_object - reverse';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Shax Object: Image */
  $handler->display->display_options['fields']['field__field_shax_object_image']['id'] = 'field__field_shax_object_image';
  $handler->display->display_options['fields']['field__field_shax_object_image']['table'] = 'field_data_field__field_shax_object_image';
  $handler->display->display_options['fields']['field__field_shax_object_image']['field'] = 'field__field_shax_object_image';
  $handler->display->display_options['fields']['field__field_shax_object_image']['relationship'] = 'reverse_field_shax_object_node';
  $handler->display->display_options['fields']['field__field_shax_object_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field__field_shax_object_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field__field_shax_object_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field__field_shax_object_image']['settings'] = array(
    'image_style' => 'shax_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="obj-title"><a href="[title]">[title]</a><div>
[field__field_shax_object_image]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  /* Field: Content: Catalog URL */
  $handler->display->display_options['fields']['field_catalog_url']['id'] = 'field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['table'] = 'field_data_field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['field'] = 'field_catalog_url';
  $handler->display->display_options['fields']['field_catalog_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_url']['type'] = 'text_plain';
  /* Field: Content: Call Number */
  $handler->display->display_options['fields']['field_call_number']['id'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['table'] = 'field_data_field_call_number';
  $handler->display->display_options['fields']['field_call_number']['field'] = 'field_call_number';
  $handler->display->display_options['fields']['field_call_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_call_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_call_number']['alter']['text'] = '<a href="[field_catalog_url]">[field_call_number]</a>';
  $handler->display->display_options['fields']['field_call_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_call_number']['type'] = 'text_plain';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = 'About This Item';
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '<div class="obj-description">[body]<div>
<div class="obj-author"><span class="obj-date">[field_year]</span>, [field_author]<div>
<div class="obj-callnum"><a href="[field_catalog_url]">[field_call_number]</a></div>';
  $handler->display->display_options['fields']['field_author']['type'] = 'text_plain';
  /* Field: Content: Material Type */
  $handler->display->display_options['fields']['field_material_type']['id'] = 'field_material_type';
  $handler->display->display_options['fields']['field_material_type']['table'] = 'field_data_field_material_type';
  $handler->display->display_options['fields']['field_material_type']['field'] = 'field_material_type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'shax-objects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Shax Objects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Student Pages Block */
  $handler = $view->new_display('block', 'Student Pages Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Student Pages related to Shax Objects';
  $handler->display->display_options['display_description'] = 'Student Pages Block';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content referencing the node through Shax object. */
  $handler->display->display_options['relationships']['reverse_field_shax_object_node']['id'] = 'reverse_field_shax_object_node';
  $handler->display->display_options['relationships']['reverse_field_shax_object_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_shax_object_node']['field'] = 'reverse_field_shax_object_node';
  $handler->display->display_options['relationships']['reverse_field_shax_object_node']['ui_name'] = 'Content referencing the node through Shax object.';
  /* Relationship: Content: Shax object (field_shax_object) */
  $handler->display->display_options['relationships']['field_shax_object_nid']['id'] = 'field_shax_object_nid';
  $handler->display->display_options['relationships']['field_shax_object_nid']['table'] = 'field_data_field_shax_object';
  $handler->display->display_options['relationships']['field_shax_object_nid']['field'] = 'field_shax_object_nid';
  $handler->display->display_options['relationships']['field_shax_object_nid']['relationship'] = 'reverse_field_shax_object_node';
  $handler->display->display_options['relationships']['field_shax_object_nid']['label'] = 'shax_object_nid';
  $handler->display->display_options['relationships']['field_shax_object_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_shax_object_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_shax_object_node';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_shax_object_nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_shax_object_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['base_objects'] = $view;

  return $export;
}
