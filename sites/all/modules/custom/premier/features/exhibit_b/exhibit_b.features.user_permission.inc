<?php
/**
 * @file
 * exhibit_b.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function exhibit_b_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create pharmacy_program_requirements content'.
  $permissions['create pharmacy_program_requirements content'] = array(
    'name' => 'create pharmacy_program_requirements content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any pharmacy_program_requirements content'.
  $permissions['delete any pharmacy_program_requirements content'] = array(
    'name' => 'delete any pharmacy_program_requirements content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own pharmacy_program_requirements content'.
  $permissions['delete own pharmacy_program_requirements content'] = array(
    'name' => 'delete own pharmacy_program_requirements content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any pharmacy_program_requirements content'.
  $permissions['edit any pharmacy_program_requirements content'] = array(
    'name' => 'edit any pharmacy_program_requirements content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own pharmacy_program_requirements content'.
  $permissions['edit own pharmacy_program_requirements content'] = array(
    'name' => 'edit own pharmacy_program_requirements content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
