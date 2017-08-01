<?php
/**
 * @file
 * vacations_excursions.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function vacations_excursions_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'bbapi';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'rest';
  $endpoint->authentication = array();
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['bbapi'] = $endpoint;

  return $export;
}
