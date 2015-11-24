<?php
/**
 * @file
 * prospective_member_information.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function prospective_member_information_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create member_information content'.
  $permissions['create member_information content'] = array(
    'name' => 'create member_information content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any member_information content'.
  $permissions['delete any member_information content'] = array(
    'name' => 'delete any member_information content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own member_information content'.
  $permissions['delete own member_information content'] = array(
    'name' => 'delete own member_information content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any member_information content'.
  $permissions['edit any member_information content'] = array(
    'name' => 'edit any member_information content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own member_information content'.
  $permissions['edit own member_information content'] = array(
    'name' => 'edit own member_information content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
