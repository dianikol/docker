<?php
/**
 * @file
 * vacations_excursions.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vacations_excursions_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_departure_schedule'.
  $field_bases['field_departure_schedule'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_departure_schedule',
    'indexes' => array(
      'date' => array(
        0 => 'date',
      ),
    ),
    'locked' => 0,
    'module' => 'vacations_excursions',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_schedule',
  );

  // Exported field_base: 'field_package_code'.
  $field_bases['field_package_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_package_code',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'title_field'.
  $field_bases['title_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'title_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  return $field_bases;
}
