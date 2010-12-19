<?php

/**
 * Implementation of hook_strongarm().
 */
function research_hub_theme_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_research_theme';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'menu' => '-2',
    'path' => '3',
    'attachments' => '4',
  );

  $export['content_extra_weights_research_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_research_theme';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_research_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_research_theme';
  $strongarm->value = '1';

  $export['upload_research_theme'] = $strongarm;
  return $export;
}
