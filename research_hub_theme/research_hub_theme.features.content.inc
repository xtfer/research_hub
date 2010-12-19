<?php

/**
 * Implementation of hook_content_default_fields().
 */
function research_hub_theme_content_default_fields() {
  $fields = array();

  // Exported field: field_images
  $fields['research_theme-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'research_theme',
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
      'weight' => '8',
      'description' => 'These images can be inserted into the text using the "insert" button, or displayed using a Views gallery formatter.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_rt_one_liner
  $fields['research_theme-field_rt_one_liner'] = array(
    'field_name' => 'field_rt_one_liner',
    'type_name' => 'research_theme',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-50',
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_rt_one_liner',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-50',
      ),
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'custom_formatters_Teaser',
        'css-class' => '',
        'region' => 'header',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_rt_one_liner',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-50',
      ),
      'weight' => '-4',
      'parent' => '',
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
      '5' => array(
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '256',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_rt_one_liner][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'One line description',
      'weight' => '-4',
      'description' => 'This text is used on the Research Themes page, as a teaser for this page.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_theme_info
  $fields['research_theme-field_theme_info'] = array(
    'field_name' => 'field_theme_info',
    'type_name' => 'research_theme',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-43',
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_theme_info',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-43',
      ),
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'custom_formatters_more_information',
        'css-class' => '',
        'region' => 'header',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_theme_info',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-47',
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
          '_error_element' => 'default_value_widget][field_theme_info][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'More information',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_theme_leaders
  $fields['research_theme-field_theme_leaders'] = array(
    'field_name' => 'field_theme_leaders',
    'type_name' => 'research_theme',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-44',
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'link',
        'parent_id' => '',
        'field_id' => 'field_theme_leaders',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-44',
      ),
      'full' => array(
        'label' => array(
          'format' => 'above',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'link',
        'parent_id' => '',
        'field_id' => 'field_theme_leaders',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-49',
      ),
      'weight' => '5',
      'parent' => '',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 'optional',
    'title' => 'required',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Theme leaders',
      'weight' => '5',
      'description' => 'List the theme leaders here. Optionally, you can also link to a home page or other information about these individuals.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('More information');
  t('One line description');
  t('Theme leaders');

  return $fields;
}
