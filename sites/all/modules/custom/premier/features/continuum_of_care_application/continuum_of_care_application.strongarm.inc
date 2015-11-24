<?php
/**
 * @file
 * continuum_of_care_application.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function continuum_of_care_application_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_continuum_of_care';
  $strongarm->value = 0;
  $export['comment_anonymous_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_continuum_of_care';
  $strongarm->value = '1';
  $export['comment_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_continuum_of_care';
  $strongarm->value = 0;
  $export['comment_default_mode_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_continuum_of_care';
  $strongarm->value = '50';
  $export['comment_default_per_page_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_continuum_of_care';
  $strongarm->value = 1;
  $export['comment_form_location_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_continuum_of_care';
  $strongarm->value = '1';
  $export['comment_preview_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_continuum_of_care';
  $strongarm->value = 1;
  $export['comment_subject_field_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_continuum_of_care';
  $strongarm->value = array();
  $export['menu_options_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_continuum_of_care';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_continuum_of_care';
  $strongarm->value = array();
  $export['node_options_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_continuum_of_care';
  $strongarm->value = '0';
  $export['node_preview_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_continuum_of_care';
  $strongarm->value = 0;
  $export['node_submitted_continuum_of_care'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_continuum_of_care_pattern';
  $strongarm->value = 'application/continuum-of-care/overview/[node:nid]';
  $export['pathauto_node_continuum_of_care_pattern'] = $strongarm;

  return $export;
}
