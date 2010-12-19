<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function research_hub_article_ds_default_settings() {
  $data = array(
    'nd' => array(
      'article' => array(
        'teaser' => array(
          'fields' => array(
            'field_article_media_release' => array(
              'region' => 'disabled',
              'weight' => '-42',
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
              'weight' => '-43',
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
        'full' => array(
          'fields' => array(
            'field_article_media_release' => array(
              'region' => 'disabled',
              'weight' => '-42',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
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
              'weight' => '-41',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'title' => array(
              'region' => 'disabled',
              'weight' => '-43',
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
              'region' => 'header',
              'weight' => '-49',
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
              'region' => 'header',
              'weight' => '-50',
              'format' => 'nd_post_date_long',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'body' => array(
              'region' => 'header',
              'weight' => '-47',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'files' => array(
              'region' => 'header',
              'weight' => '-46',
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
