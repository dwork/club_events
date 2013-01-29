<?php
/**
 * @file
 * club_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function club_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:calendar
  $menu_links['main-menu:calendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Calendar',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:pcalendar
  $menu_links['main-menu:pcalendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pcalendar',
    'router_path' => 'pcalendar',
    'link_title' => 'Calendar',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar');


  return $menu_links;
}