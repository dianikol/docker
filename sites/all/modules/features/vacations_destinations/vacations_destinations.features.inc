<?php
/**
 * @file
 * vacations_destinations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vacations_destinations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vacations_destinations_node_info() {
  $items = array(
    'destination' => array(
      'name' => t('Destination'),
      'base' => 'node_content',
      'description' => t('The destinations available in the vacation packages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
