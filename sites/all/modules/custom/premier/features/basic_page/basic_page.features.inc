<?php
/**
 * @file
 * basic_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function basic_page_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Creates a <em>Basic Page</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
