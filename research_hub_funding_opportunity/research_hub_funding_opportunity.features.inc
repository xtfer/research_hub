<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function research_hub_funding_opportunity_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function research_hub_funding_opportunity_node_info() {
  $items = array(
    'funding' => array(
      'name' => t('Funding opportunity'),
      'module' => 'features',
      'description' => t('A call for funding.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function research_hub_funding_opportunity_views_api() {
  return array(
    'api' => '2',
  );
}
