<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function research_hub_theme_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function research_hub_theme_node_info() {
  $items = array(
    'research_theme' => array(
      'name' => t('Research theme'),
      'module' => 'features',
      'description' => t('A PIARN research theme. These are automatically listed on the Research Themes page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function research_hub_theme_views_api() {
  return array(
    'api' => '2',
  );
}
