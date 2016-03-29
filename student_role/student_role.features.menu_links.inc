<?php
/**
 * @file
 * student_role.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function student_role_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_student-work:student-work.
  $menu_links['main-menu_student-work:student-work'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'student-work',
    'router_path' => 'student-work',
    'link_title' => 'Student Work',
    'options' => array(
      'identifier' => 'main-menu_student-work:student-work',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Student Work');

  return $menu_links;
}
