<?php
/**
 * @file
 * contact_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contact_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function contact_profile_node_info() {
  $items = array(
    'contact_profile' => array(
      'name' => t('Contact Profile'),
      'base' => 'node_content',
      'description' => t('Please provide contact information in the table below (or in the attached Excel file) for anyone within your facility(s) interested in receiving communications from Premier.  If left blank, the default contact will be the Primary Contact listed on Page 1.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
