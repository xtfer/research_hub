<?php

/**
 * Implementation of hook_custom_formatters_defaults().
 */
function research_hub_base_custom_formatters_defaults() {
  return array(
    'Teaser' => array(
      'name' => 'Teaser',
      'label' => 'Teaser (paragraph)',
      'field_types' => 'a:1:{i:0;s:4:"text";}',
      'multiple' => '0',
      'description' => 'A teaser field, in a paragraph tag.',
      'mode' => 'advanced',
      'code' => 'return \'<p class="teaser">\'.$element[\'#item\'][\'safe\'].\'</p>\';',
      'status' => '1',
      'source' => 'database',
    ),
    'more_information' => array(
      'name' => 'more_information',
      'label' => 'More information',
      'field_types' => 'a:1:{i:0;s:4:"text";}',
      'multiple' => '0',
      'description' => '',
      'mode' => 'advanced',
      'code' => 'return \'<div class="more-information">\'.$element[\'#item\'][\'safe\'].\'</div>\';
    ',
      'status' => '1',
      'source' => 'database',
    ),
  );
}
