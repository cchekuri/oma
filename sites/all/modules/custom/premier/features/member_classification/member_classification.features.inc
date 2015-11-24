<?php
/**
 * @file
 * member_classification.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function member_classification_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function member_classification_node_info() {
  $items = array(
    'membership_classification' => array(
      'name' => t('Membership Classification'),
      'base' => 'node_content',
      'description' => t('Holds the <em>Membership Classification</em> fields.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
