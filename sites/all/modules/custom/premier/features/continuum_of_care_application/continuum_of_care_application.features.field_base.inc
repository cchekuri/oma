<?php
/**
 * @file
 * continuum_of_care_application.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function continuum_of_care_application_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_prospective_member_email_a'.
  $field_bases['field_prospective_member_email_a'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prospective_member_email_a',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_workflow_state'.
  $field_bases['field_workflow_state'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_workflow_state',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'workflowfield',
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'allowed_values_string' => '1 | (creation)
2 | (sponsor editing)
3 | (prospective member editing)
4 | (sponsor review)
5 | (premier operations review)
6 | (accepted)
7 | (rejected)',
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => 0,
          3 => 3,
          4 => 0,
          5 => 0,
          6 => 6,
        ),
      ),
      'watchdog_log' => 1,
      'wid' => 1,
      'widget' => array(
        'comment' => 0,
        'hide' => 0,
        'name_as_title' => 1,
        'options' => 'buttons',
        'schedule' => 0,
        'schedule_timezone' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'workflow',
  );

  return $field_bases;
}
