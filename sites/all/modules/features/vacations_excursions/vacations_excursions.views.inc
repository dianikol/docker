<?php

/**
 * @file
 * Views definitions for vacations_excursions module.
 */

/**
 * Implements hook_views_data_alter().
 */
function vacations_excursions_views_data_alter(&$data) {
  $data['field_data_field_departure_schedule']['field_departure_schedule_destination']['relationship'] = array(
    'title' => t('Get content'),
    'help' => t('Get Destination content from Departure Schedule.'),
    'base' => 'node',
    'base field' => 'nid',
    'handler' => 'views_handler_relationship',
    'label' => t('Get Destination content from Departure Schedule.'),
  );
}
