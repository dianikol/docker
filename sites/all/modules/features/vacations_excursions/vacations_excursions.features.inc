<?php
/**
 * @file
 * vacations_excursions.features.inc
 */

/**
 * Implements hook_node_info().
 */
function vacations_excursions_node_info() {
  $items = array(
    'excursion' => array(
      'name' => t('Excursion'),
      'base' => 'node_content',
      'description' => t('The excursions planned in the vacation packages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
