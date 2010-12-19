<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function research_hub_funding_opportunity_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_funding_dates
  $groups['funding-group_funding_dates'] = array(
    'group_type' => 'standard',
    'type_name' => 'funding',
    'group_name' => 'group_funding_dates',
    'label' => 'Dates',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
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
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_funding_date_open',
      '1' => 'field_funding_date_close',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dates');

  return $groups;
}
