<?php
/**
 * @file
 * child_site_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function child_site_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create child_site content'.
  $permissions['create child_site content'] = array(
    'name' => 'create child_site content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any child_site content'.
  $permissions['delete any child_site content'] = array(
    'name' => 'delete any child_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own child_site content'.
  $permissions['delete own child_site content'] = array(
    'name' => 'delete own child_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any child_site content'.
  $permissions['edit any child_site content'] = array(
    'name' => 'edit any child_site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own child_site content'.
  $permissions['edit own child_site content'] = array(
    'name' => 'edit own child_site content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
