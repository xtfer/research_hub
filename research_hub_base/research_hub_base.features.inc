<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function research_hub_base_imagecache_default_presets() {
  $items = array(
    'research_hub_default' => array(
      'presetname' => 'research_hub_default',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '640',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '640',
            'height' => '300',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'research_hub_wide' => array(
      'presetname' => 'research_hub_wide',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '960px',
            'height' => '300px',
          ),
        ),
      ),
    ),
  );
  return $items;
}
