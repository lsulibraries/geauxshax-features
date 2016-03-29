<?php
/**
 * @file
 * student_role.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function student_role_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'student_work';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Student Work';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Student Work';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Creative Interpretation: Critical Paratext */
  $handler->display->display_options['fields']['field_paratext']['id'] = 'field_paratext';
  $handler->display->display_options['fields']['field_paratext']['table'] = 'field_data_field_paratext';
  $handler->display->display_options['fields']['field_paratext']['field'] = 'field_paratext';
  $handler->display->display_options['fields']['field_paratext']['label'] = 'Critical Paratext';
  $handler->display->display_options['fields']['field_paratext']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_paratext']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_paratext']['alter']['trim'] = TRUE;
  /* Field: Content: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
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
    'page' => 'page',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_section_value']['expose']['operator_id'] = 'field_section_value_op';
  $handler->display->display_options['filters']['field_section_value']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['field_section_value']['expose']['operator'] = 'field_section_value_op';
  $handler->display->display_options['filters']['field_section_value']['expose']['identifier'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Semester (field_semester) */
  $handler->display->display_options['filters']['field_semester_value']['id'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['table'] = 'field_data_field_semester';
  $handler->display->display_options['filters']['field_semester_value']['field'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_semester_value']['expose']['operator_id'] = 'field_semester_value_op';
  $handler->display->display_options['filters']['field_semester_value']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['field_semester_value']['expose']['operator'] = 'field_semester_value_op';
  $handler->display->display_options['filters']['field_semester_value']['expose']['identifier'] = 'field_semester_value';
  $handler->display->display_options['filters']['field_semester_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'student-work';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Student Work';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['student_work'] = $view;

  return $export;
}
