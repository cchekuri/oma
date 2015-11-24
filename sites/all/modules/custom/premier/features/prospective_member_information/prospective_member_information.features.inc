<?php
/**
 * @file
 * prospective_member_information.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function prospective_member_information_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function prospective_member_information_node_info() {
  $items = array(
    'member_information' => array(
      'name' => t('Prospective Member Information'),
      'base' => 'node_content',
      'description' => t('Holds the <em>Prospective Member Information</em>.'),
      'has_title' => '1',
      'title_label' => t('Application ID'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
