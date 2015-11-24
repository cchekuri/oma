<?php
/**
 * @file
 * facility_authorization.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function facility_authorization_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create facility_authorization content'.
  $permissions['create facility_authorization content'] = array(
    'name' => 'create facility_authorization content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any facility_authorization content'.
  $permissions['delete any facility_authorization content'] = array(
    'name' => 'delete any facility_authorization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own facility_authorization content'.
  $permissions['delete own facility_authorization content'] = array(
    'name' => 'delete own facility_authorization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any facility_authorization content'.
  $permissions['edit any facility_authorization content'] = array(
    'name' => 'edit any facility_authorization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own facility_authorization content'.
  $permissions['edit own facility_authorization content'] = array(
    'name' => 'edit own facility_authorization content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
