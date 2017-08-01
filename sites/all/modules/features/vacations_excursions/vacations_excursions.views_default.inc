<?php
/**
 * @file
 * vacations_excursions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vacations_excursions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'excursion_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Excursion Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Excursion Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Departure Schedule */
  $handler->display->display_options['fields']['field_departure_schedule']['id'] = 'field_departure_schedule';
  $handler->display->display_options['fields']['field_departure_schedule']['table'] = 'field_data_field_departure_schedule';
  $handler->display->display_options['fields']['field_departure_schedule']['field'] = 'field_departure_schedule';
  $handler->display->display_options['fields']['field_departure_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_departure_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_departure_schedule']['click_sort_column'] = 'date';
  $handler->display->display_options['fields']['field_departure_schedule']['type'] = 'field_schedule_info';
  $handler->display->display_options['fields']['field_departure_schedule']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'excursion' => 'excursion',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'excursion-info';
  $translatables['excursion_info'] = array(
    t('Master'),
    t('Excursion Info'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
  );
  $export['excursion_info'] = $view;

  $view = new view();
  $view->name = 'excursions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Excursions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Excursions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'excursion' => 'excursion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Package code (field_package_code) */
  $handler->display->display_options['filters']['field_package_code_value']['id'] = 'field_package_code_value';
  $handler->display->display_options['filters']['field_package_code_value']['table'] = 'field_data_field_package_code';
  $handler->display->display_options['filters']['field_package_code_value']['field'] = 'field_package_code_value';
  $handler->display->display_options['filters']['field_package_code_value']['group'] = 1;
  $handler->display->display_options['filters']['field_package_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_package_code_value']['expose']['operator_id'] = 'field_package_code_value_op';
  $handler->display->display_options['filters']['field_package_code_value']['expose']['label'] = 'Package code';
  $handler->display->display_options['filters']['field_package_code_value']['expose']['operator'] = 'field_package_code_value_op';
  $handler->display->display_options['filters']['field_package_code_value']['expose']['identifier'] = 'field_package_code_value';
  $handler->display->display_options['filters']['field_package_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Departure Schedule (field_departure_schedule:destination) */
  $handler->display->display_options['filters']['field_departure_schedule_destination']['id'] = 'field_departure_schedule_destination';
  $handler->display->display_options['filters']['field_departure_schedule_destination']['table'] = 'field_data_field_departure_schedule';
  $handler->display->display_options['filters']['field_departure_schedule_destination']['field'] = 'field_departure_schedule_destination';
  $handler->display->display_options['filters']['field_departure_schedule_destination']['group'] = 1;
  $handler->display->display_options['filters']['field_departure_schedule_destination']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_departure_schedule_destination']['expose']['operator_id'] = 'field_departure_schedule_destination_op';
  $handler->display->display_options['filters']['field_departure_schedule_destination']['expose']['label'] = 'Destination';
  $handler->display->display_options['filters']['field_departure_schedule_destination']['expose']['operator'] = 'field_departure_schedule_destination_op';
  $handler->display->display_options['filters']['field_departure_schedule_destination']['expose']['identifier'] = 'field_departure_schedule_destination';
  $handler->display->display_options['filters']['field_departure_schedule_destination']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Departure Schedule (field_departure_schedule:duration) */
  $handler->display->display_options['filters']['field_departure_schedule_duration']['id'] = 'field_departure_schedule_duration';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['table'] = 'field_data_field_departure_schedule';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['field'] = 'field_departure_schedule_duration';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['group'] = 1;
  $handler->display->display_options['filters']['field_departure_schedule_duration']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_departure_schedule_duration']['expose']['operator_id'] = 'field_departure_schedule_duration_op';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['expose']['label'] = 'Duration';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['expose']['operator'] = 'field_departure_schedule_duration_op';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['expose']['identifier'] = 'field_departure_schedule_duration';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'excursions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Excursions';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['excursions'] = array(
    t('Master'),
    t('Excursions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Package code'),
    t('Destination'),
    t('Duration'),
    t('Page'),
  );
  $export['excursions'] = $view;

  return $export;
}
