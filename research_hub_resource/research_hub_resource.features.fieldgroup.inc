<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function research_hub_resource_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_link
  $groups['resource-group_link'] = array(
    'group_type' => 'standard',
    'type_name' => 'resource',
    'group_name' => 'group_link',
    'label' => 'Resource link',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'block' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'search' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '11',
    'fields' => array(
      '0' => 'field_resource_link',
    ),
  );

  // Exported group: group_resource_categories
  $groups['resource-group_resource_categories'] = array(
    'group_type' => 'standard',
    'type_name' => 'resource',
    'group_name' => 'group_resource_categories',
    'label' => 'Categories',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'block' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'search' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '14',
    'fields' => array(
      '0' => 'field_resource_collection',
      '1' => 'field_node_research_theme',
      '2' => 'field_pub_subject',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Resource link');

  return $groups;
}
