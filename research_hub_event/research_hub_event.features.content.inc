<?php

/**
 * Implementation of hook_content_default_fields().
 */
function research_hub_event_content_default_fields() {
  $fields = array();

  // Exported field: field_display
  $fields['event-field_display'] = array(
    'field_name' => 'field_display',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-39',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_display',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-39',
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
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'normal|Normal
low|Hide from homepage
hide|Hide from all lists',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Display',
      'weight' => '8',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_event_date_time
  $fields['event-field_event_date_time'] = array(
    'field_name' => 'field_event_date_time',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-50',
      'full' => array(
        'label' => array(
          'format' => 'inline',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'datetime',
        'parent_id' => '',
        'field_id' => 'field_event_date_time',
        'label_value' => 'When',
        'exclude' => 0,
        'weight' => '-50',
      ),
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'left',
        'type' => 'datetime',
        'parent_id' => '',
        'field_id' => 'field_event_date_time',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-49',
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
    'multiple' => '1',
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
    'todate' => 'optional',
    'repeat' => 1,
    'repeat_collapsed' => '1',
    'default_format' => 'piarn_default',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'j M Y - H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date & time',
      'weight' => '-4',
      'description' => '',
      'type' => 'date_popup_repeat',
      'module' => 'date',
    ),
  );

  // Exported field: field_images
  $fields['event-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '6M',
      'max_filesize_per_node' => '20M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'link' => 'link',
        'image' => 'image',
        'imagecache_Default' => 'imagecache_Default',
        'imagecache_reg' => 'imagecache_reg',
        'imagecache_thumb' => 'imagecache_thumb',
        'imagecache_tiny' => 'imagecache_tiny',
        'imagecache_Wide' => 'imagecache_Wide',
        'auto' => 0,
        'custom_formatters_example_file' => 0,
        'custom_formatters_example_image' => 0,
        'imagecache_short' => 0,
      ),
      'insert_default' => 'imagecache_reg',
      'insert_class' => '',
      'insert_width' => '800',
      'label' => 'Images',
      'weight' => '-1',
      'description' => 'These images can be inserted into the text using the "insert" button, or displayed using a Views gallery formatter.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_location
  $fields['event-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-49',
      'full' => array(
        'label' => array(
          'format' => 'inline',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_location',
        'label_value' => 'Where',
        'exclude' => 0,
        'weight' => '-49',
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
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_location][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_primary_image
  $fields['event-field_primary_image'] = array(
    'field_name' => 'field_primary_image',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-48',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'reg_default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_primary_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-48',
      ),
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'custom_formatters_example_image',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_primary_image',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-44',
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
      'max_filesize_per_file' => '6M',
      'max_filesize_per_node' => '6M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'custom_formatters_example_file' => 0,
        'custom_formatters_example_image' => 0,
        'imagecache_Default' => 0,
        'imagecache_reg' => 0,
        'imagecache_short' => 0,
        'imagecache_thumb' => 0,
        'imagecache_tiny' => 0,
        'imagecache_Wide' => 0,
      ),
      'insert_default' => 'imagecache_reg',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Primary image',
      'weight' => '-3',
      'description' => 'This will be used as the main article image, and displayed on the home page when promoted.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_teaser
  $fields['event-field_teaser'] = array(
    'field_name' => 'field_teaser',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-43',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_teaser',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-43',
      ),
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_teaser',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-50',
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
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_teaser][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaser',
      'weight' => '6',
      'description' => 'A short teaser for this item, this should not be longer than one sentance.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date & time');
  t('Display');
  t('Images');
  t('Location');
  t('Primary image');
  t('Teaser');

  return $fields;
}
