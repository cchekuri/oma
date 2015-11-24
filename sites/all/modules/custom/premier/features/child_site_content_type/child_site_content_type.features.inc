<?php
/**
 * @file
 * child_site_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function child_site_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function child_site_content_type_node_info() {
  $items = array(
    'child_site' => array(
      'name' => t('Child Site'),
      'base' => 'node_content',
      'description' => t('Holds the fields for a <em>Child Site</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
