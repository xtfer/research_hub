<?php

/**
 * Implementation of hook_content_default_fields().
 */
function research_hub_funding_opportunity_content_default_fields() {
  $fields = array();

  // Exported field: field_funding_date_close
  $fields['funding-field_funding_date_close'] = array(
    'field_name' => 'field_funding_date_close',
    'type_name' => 'funding',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => '',
      'region' => 'disabled',
      'ds_weight' => '-46',
      'full' => array(
        'label' => array(
          'format' => 'inline',
        ),
        'format' => 'medium',
        'css-class' => '',
        'region' => 'left',
        'type' => 'datetime',
        'parent_id' => '',
        'field_id' => 'field_funding_date_close',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-46',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datetime',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'piarn_default',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Close date',
      'weight' => '32',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_funding_date_open
  $fields['funding-field_funding_date_open'] = array(
    'field_name' => 'field_funding_date_open',
    'type_name' => 'funding',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => '',
      'region' => 'disabled',
      'ds_weight' => '-47',
      'full' => array(
        'label' => array(
          'format' => 'inline',
        ),
        'format' => 'medium',
        'css-class' => '',
        'region' => 'left',
        'type' => 'datetime',
        'parent_id' => '',
        'field_id' => 'field_funding_date_open',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-47',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datetime',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'piarn_default',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - H:i',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Open date',
      'weight' => '31',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_primary_image
  $fields['funding-field_primary_image'] = array(
    'field_name' => 'field_primary_image',
    'type_name' => 'funding',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => '',
      'region' => 'disabled',
      'ds_weight' => '-50',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'custom_formatters_example_file',
        'css-class' => '',
        'region' => 'header',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_primary_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-50',
      ),
      'weight' => '-3',
      'parent' => '',
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'thumb_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'Default_default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'Default_linked',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Primary image',
      'weight' => '-3',
      'description' => 'This will be used as the main article image, and displayed on the home page when promoted.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Close date');
  t('Open date');
  t('Primary image');

  return $fields;
}
