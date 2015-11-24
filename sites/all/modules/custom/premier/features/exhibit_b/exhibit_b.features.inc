<?php
/**
 * @file
 * exhibit_b.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exhibit_b_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function exhibit_b_node_info() {
  $items = array(
    'pharmacy_program_requirements' => array(
      'name' => t('Pharmacy Program Requirements'),
      'base' => 'node_content',
      'description' => t('A placeholder for <em>Exhibit B - Pharmacy Program Requirements</em>'),
      'has_title' => '1',
      'title_label' => t('Facility Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
