<?php
/**
 * @file
 * exhibit_b.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function exhibit_b_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pharmacy_program_requirements';
  $strongarm->value = 0;
  $export['comment_anonymous_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pharmacy_program_requirements';
  $strongarm->value = 0;
  $export['comment_default_mode_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pharmacy_program_requirements';
  $strongarm->value = '50';
  $export['comment_default_per_page_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pharmacy_program_requirements';
  $strongarm->value = 1;
  $export['comment_form_location_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pharmacy_program_requirements';
  $strongarm->value = '1';
  $export['comment_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pharmacy_program_requirements';
  $strongarm->value = '1';
  $export['comment_preview_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pharmacy_program_requirements';
  $strongarm->value = 1;
  $export['comment_subject_field_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pharmacy_program_requirements';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pharmacy_program_requirements';
  $strongarm->value = array();
  $export['menu_options_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pharmacy_program_requirements';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pharmacy_program_requirements';
  $strongarm->value = array();
  $export['node_options_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pharmacy_program_requirements';
  $strongarm->value = '0';
  $export['node_preview_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pharmacy_program_requirements';
  $strongarm->value = 0;
  $export['node_submitted_pharmacy_program_requirements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pharmacy_program_requirements_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pharmacy_program_requirements_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_member_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_member_type_pattern'] = $strongarm;

  return $export;
}
