<?php
/**
 * @file
 * club_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function club_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer event_registration registration.
  $permissions['administer event_registration registration'] = array(
    'name' => 'administer event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration states.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration types.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create event_registration registration.
  $permissions['create event_registration registration'] = array(
    'name' => 'create event_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create event_registration registration other anonymous.
  $permissions['create event_registration registration other anonymous'] = array(
    'name' => 'create event_registration registration other anonymous',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create event_registration registration other users.
  $permissions['create event_registration registration other users'] = array(
    'name' => 'create event_registration registration other users',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event_registration registration.
  $permissions['delete any event_registration registration'] = array(
    'name' => 'delete any event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event_registration registration.
  $permissions['delete own event_registration registration'] = array(
    'name' => 'delete own event_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: update any event_registration registration.
  $permissions['update any event_registration registration'] = array(
    'name' => 'update any event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own event_registration registration.
  $permissions['update own event_registration registration'] = array(
    'name' => 'update own event_registration registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: view event_registration registration.
  $permissions['view event_registration registration'] = array(
    'name' => 'view event_registration registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own event_registration registration.
  $permissions['view own event_registration registration'] = array(
    'name' => 'view own event_registration registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
