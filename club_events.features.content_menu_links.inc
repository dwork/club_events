<?php
/**
 * @file
 * club_events.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function club_events_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:calendar
  $menu_links['main-menu:calendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar');


  return $menu_links;
}
