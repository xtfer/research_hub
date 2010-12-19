<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function research_hub_theme_ds_default_settings() {
  $data = array(
    'nd' => array(
      'research_theme' => array(
        'full' => array(
          'fields' => array(
            'field_rt_one_liner' => array(
              'region' => 'header',
              'weight' => '-50',
              'format' => 'custom_formatters_Teaser',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_theme_leaders' => array(
              'region' => 'header',
              'weight' => '-49',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'above',
            ),
            'field_theme_info' => array(
              'region' => 'header',
              'weight' => '-47',
              'format' => 'custom_formatters_more_information',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'title' => array(
              'region' => 'disabled',
              'weight' => '-42',
              'format' => 'nd_title_h1_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'author' => array(
              'region' => 'disabled',
              'weight' => '-41',
              'format' => 'ds_author_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'links' => array(
              'region' => 'disabled',
              'weight' => '-43',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'read_more' => array(
              'region' => 'disabled',
              'weight' => '-44',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'post_date' => array(
              'region' => 'disabled',
              'weight' => '-46',
              'format' => 'nd_post_date_long',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'body' => array(
              'region' => 'header',
              'weight' => '-48',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'files' => array(
              'region' => 'disabled',
              'weight' => '-45',
              'format' => '',
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
        'teaser' => array(
          'fields' => array(
            'field_rt_one_liner' => array(
              'region' => 'header',
              'weight' => '-50',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_theme_leaders' => array(
              'region' => 'disabled',
              'weight' => '-44',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_theme_info' => array(
              'region' => 'disabled',
              'weight' => '-43',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'title' => array(
              'region' => 'disabled',
              'weight' => '-42',
              'format' => 'nd_title_h1_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'author' => array(
              'region' => 'disabled',
              'weight' => '-45',
              'format' => 'ds_author_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'links' => array(
              'region' => 'disabled',
              'weight' => '-46',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'read_more' => array(
              'region' => 'header',
              'weight' => '-49',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'post_date' => array(
              'region' => 'disabled',
              'weight' => '-48',
              'format' => 'nd_post_date_long',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'body' => array(
              'region' => 'disabled',
              'weight' => '-47',
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
      ),
    ),
  );
  return $data;
}
