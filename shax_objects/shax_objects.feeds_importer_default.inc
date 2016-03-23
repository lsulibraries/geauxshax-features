<?php
/**
 * @file
 * shax_objects.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function shax_objects_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'objects_as_taxonomy';
  $feeds_importer->config = array(
    'name' => 'Objects as Taxonomy',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'base_objects',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['objects_as_taxonomy'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sc_objects_importer';
  $feeds_importer->config = array(
    'name' => 'SC Objects Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 0,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Author',
            'target' => 'field_author',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Year',
            'target' => 'field_year',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Call Number',
            'target' => 'field_call_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Catalog URL',
            'target' => 'field_catalog_url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Material Type',
            'target' => 'field_material_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'special_collections_objects',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sc_objects_importer'] = $feeds_importer;

  return $export;
}
