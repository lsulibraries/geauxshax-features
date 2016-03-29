<?php
/**
 * @file
 * block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'impact_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'impact_theme',
        'weight' => -1,
      ),
      'multipurpose' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'multipurpose',
        'weight' => -1,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'skeletontheme' => array(
        'region' => 'featured_right',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => -1,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'impact_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'impact_theme',
        'weight' => 0,
      ),
      'multipurpose' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'multipurpose',
        'weight' => 0,
      ),
      'professional_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'professional_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-base_objects-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'base_objects-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'shax-object/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'impact_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'impact_theme',
        'weight' => 0,
      ),
      'multipurpose' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose',
        'weight' => 0,
      ),
      'professional_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'professional_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
