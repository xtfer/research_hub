<?php

/**
 * Implementation of hook_content_default_fields().
 */
function research_hub_resource_content_default_fields() {
  $fields = array();

  // Exported field: field_images
  $fields['resource-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'resource',
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
      'weight' => '16',
      'description' => 'These images can be inserted into the text using the "insert" button, or displayed using a Views gallery formatter.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_node_research_theme
  $fields['resource-field_node_research_theme'] = array(
    'field_name' => 'field_node_research_theme',
    'type_name' => 'resource',
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
        'type' => 'nodereference',
        'parent_id' => 'group_resource_categories',
        'field_id' => 'field_node_research_theme',
        'label_value' => '',
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
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'research_theme' => 'research_theme',
      'event' => 0,
      'funding' => 0,
      'gallery' => 0,
      'gallery_image' => 0,
      'article' => 0,
      'page' => 0,
      'panel' => 0,
      'publication' => 0,
      'resource' => 0,
      'resource_collection' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Theme',
      'weight' => '9',
      'description' => '',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_primary_image
  $fields['resource-field_primary_image'] = array(
    'field_name' => 'field_primary_image',
    'type_name' => 'resource',
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
          'format' => 'hidden',
        ),
        'format' => 'custom_formatters_example_image',
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
      'weight' => '-4',
      'description' => 'This will be used as the main article image, and displayed on the home page when promoted.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_pub_subject
  $fields['resource-field_pub_subject'] = array(
    'field_name' => 'field_pub_subject',
    'type_name' => 'resource',
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
          'format' => 'inline',
        ),
        'format' => 'link',
        'css-class' => '',
        'region' => 'header',
        'type' => 'content_taxonomy',
        'parent_id' => 'group_resource_categories',
        'field_id' => 'field_pub_subject',
        'label_value' => 'Subject',
        'exclude' => 0,
        'weight' => '-48',
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
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '4',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => NULL,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Subject',
      'weight' => '10',
      'description' => 'Type slowly, and the system will search for existing tags. Separate terms using comma\'s (e.g. <em>Climate change, Cattle, Water efficiency</em>)',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_resource_collection
  $fields['resource-field_resource_collection'] = array(
    'field_name' => 'field_resource_collection',
    'type_name' => 'resource',
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
        'type' => 'nodereference',
        'parent_id' => 'group_resource_categories',
        'field_id' => 'field_resource_collection',
        'label_value' => 'Collection',
        'exclude' => 0,
        'weight' => '-50',
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
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'resource_collection' => 'resource_collection',
      'event' => 0,
      'funding' => 0,
      'gallery' => 0,
      'gallery_image' => 0,
      'article' => 0,
      'page' => 0,
      'panel' => 0,
      'publication' => 0,
      'research_theme' => 0,
      'resource' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Collection',
      'weight' => '8',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_resource_link
  $fields['resource-field_resource_link'] = array(
    'field_name' => 'field_resource_link',
    'type_name' => 'resource',
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
          'format' => 'inline',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'link',
        'parent_id' => '',
        'field_id' => 'field_resource_link',
        'label_value' => 'Link',
        'exclude' => 0,
        'weight' => '-48',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
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
    'url' => 0,
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
      'label' => 'Link',
      'weight' => '6',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Collection');
  t('Images');
  t('Link');
  t('Primary image');
  t('Subject');
  t('Theme');

  return $fields;
}
