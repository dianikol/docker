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
  /* Filter criterion: Content: Package code (field_package_code) */
  $handler->display->display_options['filters']['field_package_code_value']['id'] = 'field_package_code_value';
  $handler->display->display_options['filters']['field_package_code_value']['table'] = 'field_data_field_package_code';
  $handler->display->display_options['filters']['field_package_code_value']['field'] = 'field_package_code_value';
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
  /* Filter criterion: Content: Departure Schedule (field_departure_schedule:duration) */
  $handler->display->display_options['filters']['field_departure_schedule_duration']['id'] = 'field_departure_schedule_duration';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['table'] = 'field_data_field_departure_schedule';
  $handler->display->display_options['filters']['field_departure_schedule_duration']['field'] = 'field_departure_schedule_duration';
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
    t('Duration'),
    t('Page'),
  );
  $export['excursions'] = $view;

  return $export;
}
