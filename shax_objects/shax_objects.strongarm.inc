<?php
/**
 * @file
 * shax_objects.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function shax_objects_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_special_collections_objects';
  $strongarm->value = 0;
  $export['comment_anonymous_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_special_collections_objects';
  $strongarm->value = 1;
  $export['comment_default_mode_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_special_collections_objects';
  $strongarm->value = '50';
  $export['comment_default_per_page_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_special_collections_objects';
  $strongarm->value = 1;
  $export['comment_form_location_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_special_collections_objects';
  $strongarm->value = '1';
  $export['comment_preview_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_special_collections_objects';
  $strongarm->value = '0';
  $export['comment_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_special_collections_objects';
  $strongarm->value = 1;
  $export['comment_subject_field_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__special_collections_objects';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_special_collections_objects';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_special_collections_objects';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_special_collections_objects';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_special_collections_objects';
  $strongarm->value = '1';
  $export['node_preview_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_special_collections_objects';
  $strongarm->value = 0;
  $export['node_submitted_special_collections_objects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_special_collections_objects_pattern';
  $strongarm->value = 'shax-object/[node:title]';
  $export['pathauto_node_special_collections_objects_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_base_objects_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_base_objects_pattern'] = $strongarm;

  return $export;
}
