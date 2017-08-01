<?php
/**
 * @file
 * vacations_base.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function vacations_base_locale_default_languages() {
  $languages = array();

  // Exported language: el.
  $languages['el'] = array(
    'language' => 'el',
    'name' => 'Greek',
    'native' => 'Ελληνικά',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'el',
    'weight' => 0,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  return $languages;
}
