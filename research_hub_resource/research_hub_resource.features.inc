<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function research_hub_resource_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function research_hub_resource_imagecache_default_presets() {
  $items = array(
    'Default' => array(
      'presetname' => 'Default',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '640',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '640',
            'height' => '300',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function research_hub_resource_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'module' => 'features',
      'description' => t('Use for non-PIARN resources and submitted publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Use for non-PIARN resources and submitted publications.'),
    ),
    'resource_collection' => array(
      'name' => t('Resource collection'),
      'module' => 'features',
      'description' => t('A page for listing resources, automatically listed on the Resources page. Resources can be linked to these Collections, thus creating sets of resources (for example, "PIARN publications")'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Introduction'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function research_hub_resource_views_api() {
  return array(
    'api' => '2',
  );
}
