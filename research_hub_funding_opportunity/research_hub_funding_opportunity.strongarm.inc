<?php

/**
 * Implementation of hook_strongarm().
 */
function research_hub_funding_opportunity_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_funding';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'menu' => '-1',
    'path' => '4',
    'attachments' => '5',
    'print' => '3',
  );

  $export['content_extra_weights_funding'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_funding';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_funding'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_funding';
  $strongarm->value = '1';

  $export['upload_funding'] = $strongarm;
  return $export;
}
