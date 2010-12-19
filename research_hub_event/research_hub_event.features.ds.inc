<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function research_hub_event_ds_default_settings() {
  $data = array(
    'nd' => array(
      'event' => array(
        'teaser' => array(
          'fields' => array(
            'nd_location_gmap' => array(
              'region' => 'disabled',
              'weight' => '-30',
              'format' => 'nd_location_gmap_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_location_gmap_open' => array(
              'region' => 'disabled',
              'weight' => '-34',
              'format' => 'nd_location_gmap_open',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_directions' => array(
              'region' => 'disabled',
              'weight' => '-35',
              'format' => 'nd_location_directions',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_goto_gmaps' => array(
              'region' => 'disabled',
              'weight' => '-36',
              'format' => 'nd_location_goto_gmaps',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_location_address' => array(
              'region' => 'disabled',
              'weight' => '-37',
              'format' => 'nd_location_address',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'name' => array(
              'region' => 'middle',
              'weight' => '-48',
              'format' => 'nd_location_textfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'street' => array(
              'region' => 'disabled',
              'weight' => '-33',
              'format' => 'nd_location_textfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'additional' => array(
              'region' => 'disabled',
              'weight' => '-31',
              'format' => 'nd_location_textfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'city' => array(
              'region' => 'middle',
              'weight' => '-47',
              'format' => 'nd_location_textfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'province' => array(
              'region' => 'disabled',
              'weight' => '-32',
              'format' => 'nd_location_textfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'country' => array(
              'region' => 'disabled',
              'weight' => '-38',
              'format' => 'nd_location_textfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'locpick' => array(
              'region' => 'disabled',
              'weight' => '-39',
              'format' => 'nd_location_textfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_event_date_time' => array(
              'region' => 'left',
              'weight' => '-49',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_primary_image' => array(
              'region' => 'disabled',
              'weight' => '-44',
              'format' => 'custom_formatters_example_image',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_teaser' => array(
              'region' => 'header',
              'weight' => '-50',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'title' => array(
              'region' => 'disabled',
              'weight' => '-45',
              'format' => 'nd_title_h1_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'author' => array(
              'region' => 'disabled',
              'weight' => '-43',
              'format' => 'ds_author_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'links' => array(
              'region' => 'disabled',
              'weight' => '-42',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'read_more' => array(
              'region' => 'right',
              'weight' => '-46',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'post_date' => array(
              'region' => 'disabled',
              'weight' => '-40',
              'format' => 'nd_post_date_long',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'body' => array(
              'region' => 'disabled',
              'weight' => '-41',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
          ),
          'status' => 2,
          'region_styles' => array(
            'header' => '',
            'left' => '',
            'middle' => '',
            'right' => '',
            'footer' => '',
          ),
        ),
        'full' => array(
          'fields' => array(
            'field_event_date_time' => array(
              'region' => 'header',
              'weight' => '-50',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'When',
              'labelformat' => 'inline',
            ),
            'field_primary_image' => array(
              'region' => 'header',
              'weight' => '-48',
              'format' => 'reg_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_teaser' => array(
              'region' => 'disabled',
              'weight' => '-43',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_location' => array(
              'region' => 'header',
              'weight' => '-49',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Where',
              'labelformat' => 'inline',
            ),
            'field_display' => array(
              'region' => 'disabled',
              'weight' => '-39',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'title' => array(
              'region' => 'disabled',
              'weight' => '-44',
              'format' => 'nd_title_h1_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'author' => array(
              'region' => 'disabled',
              'weight' => '-42',
              'format' => 'ds_author_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'links' => array(
              'region' => 'header',
              'weight' => '-47',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'read_more' => array(
              'region' => 'disabled',
              'weight' => '-40',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'post_date' => array(
              'region' => 'disabled',
              'weight' => '-41',
              'format' => 'nd_post_date_long',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'body' => array(
              'region' => 'header',
              'weight' => '-46',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'files' => array(
              'region' => 'header',
              'weight' => '-45',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
          ),
          'cssoverrider' => array(
            'class' => array(
              'header' => '',
              'left' => '',
              'middle' => '',
              'right' => '',
              'footer' => '',
            ),
            'inline' => array(
              'header' => '',
              'left' => '',
              'middle' => '',
              'right' => '',
              'footer' => '',
            ),
          ),
          'status' => 2,
          'region_styles' => array(
            'header' => '',
            'left' => '',
            'middle' => '',
            'right' => '',
            'footer' => '',
          ),
        ),
      ),
    ),
  );
  return $data;
}