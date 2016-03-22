<?php
/**
 * @file
 * shax_objects.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function shax_objects_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_shax-objects:shax-objects.
  $menu_links['main-menu_shax-objects:shax-objects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shax-objects',
    'router_path' => 'shax-objects',
    'link_title' => 'Shax Objects',
    'options' => array(
      'identifier' => 'main-menu_shax-objects:shax-objects',
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
  t('Shax Objects');

  return $menu_links;
}
