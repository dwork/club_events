<?php
/**
 * @file
 * club_events.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function club_events_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'upcoming';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Upcoming Events';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_rotarian_calendar-block_2',
      'hide_title' => 1,
      'title' => 'All',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_calendar-block_2',
      'hide_title' => 1,
      'title' => 'Public',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Arrows';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All');
  t('Public');
  t('Upcoming Events');

  $export['upcoming'] = $quicktabs;

  return $export;
}
