<?php
/**
 * @file
 * sponsor_information.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sponsor_information_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sponsor_information_node_info() {
  $items = array(
    'sponsor_information' => array(
      'name' => t('Sponsor Information'),
      'base' => 'node_content',
      'description' => t('Holds the <em>Sponsor Information</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
