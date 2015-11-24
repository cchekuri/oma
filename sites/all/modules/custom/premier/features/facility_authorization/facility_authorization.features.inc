<?php
/**
 * @file
 * facility_authorization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function facility_authorization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function facility_authorization_node_info() {
  $items = array(
    'facility_authorization' => array(
      'name' => t('Facility Authorization'),
      'base' => 'node_content',
      'description' => t('A placeholder for <em>Exhibit A - Facility Authorization</em>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
