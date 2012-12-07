<?php
/**
 * @file
 * club_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function club_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant|registration|event_registration|form';
  $field_group->group_name = 'group_registrant';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'event_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registrant',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_middle_initial',
      2 => 'field_last_name',
      3 => 'field_suffix',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registrant|registration|event_registration|form'] = $field_group;

  return $export;
}