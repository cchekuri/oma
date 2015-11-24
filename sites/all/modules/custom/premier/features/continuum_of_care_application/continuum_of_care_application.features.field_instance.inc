<?php
/**
 * @file
 * continuum_of_care_application.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function continuum_of_care_application_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-continuum_of_care-field_prospective_member_email_a'.
  $field_instances['node-continuum_of_care-field_prospective_member_email_a'] = array(
    'bundle' => 'continuum_of_care',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_prospective_member_email_a',
    'label' => 'Prospective Member Email Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-continuum_of_care-field_workflow_state'.
  $field_instances['node-continuum_of_care-field_workflow_state'] = array(
    'bundle' => 'continuum_of_care',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'workflowfield',
        'settings' => array(
          'comment' => 1,
          'name_as_title' => 1,
        ),
        'type' => 'workflow_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_workflow_state',
    'label' => 'Workflow State',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'workflowfield',
      'settings' => array(
        'comment' => 1,
        'name_as_title' => 1,
      ),
      'type' => 'workflow_default',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Prospective Member Email Address');
  t('Workflow State');

  return $field_instances;
}
