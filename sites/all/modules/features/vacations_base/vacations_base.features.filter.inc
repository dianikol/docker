<?php
/**
 * @file
 * vacations_base.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function vacations_base_filter_default_formats() {
  $formats = array();

  // Exported format: Full text.
  $formats['full_text'] = array(
    'format' => 'full_text',
    'name' => 'Full text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
