<?php
/**
 * @file
 * vacations_destinations.features.inc
 */

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
