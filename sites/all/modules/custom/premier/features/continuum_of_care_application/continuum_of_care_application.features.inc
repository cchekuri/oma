<?php
/**
 * @file
 * continuum_of_care_application.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function continuum_of_care_application_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function continuum_of_care_application_node_info() {
  $items = array(
    'continuum_of_care' => array(
      'name' => t('Continuum Of Care Application'),
      'base' => 'node_content',
      'description' => t('Acts as a container that holds the <em>Continuum of Care</em> form and any exhibits.  Any workflow is performed against this master container'),
      'has_title' => '1',
      'title_label' => t('Application ID'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
