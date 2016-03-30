<?php
/**
 * @file
 * student_role.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function student_role_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function student_role_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function student_role_image_default_styles() {
  $styles = array();

  // Exported image style: shax_thumbnail.
  $styles['shax_thumbnail'] = array(
    'label' => 'Shax Thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function student_role_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Student Work'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
