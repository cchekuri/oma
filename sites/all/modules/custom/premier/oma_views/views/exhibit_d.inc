<?php

$view = new view();
$view->name = 'exhibit_d';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Exhibit D';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Exhibit D';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'import child_sites_import feeds';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['columns'] = '1';
$handler->display->display_options['style_options']['alignment'] = 'vertical';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_address_organisation_name' => 'field_address_organisation_name',
  'field_address_name_line' => 'field_address_name_line',
  'field_address_thoroughfare' => 'field_address_thoroughfare',
  'field_address_sub_premise' => 'field_address_sub_premise',
  'field_address_locality' => 'field_address_locality',
  'field_address_administrative_area' => 'field_address_administrative_area',
  'field_address_country' => 'field_address_country',
  'field_address_postal_code' => 'field_address_postal_code',
  'field_sponsor_name' => 'field_sponsor_name',
  'field_sponsor_entity_code_1' => 'field_sponsor_entity_code_1',
  'field_direct_parent_name' => 'field_direct_parent_name',
  'field_direct_parent_entity_cde' => 'field_direct_parent_entity_cde',
  'field_dea_if_participating_in_ph' => 'field_dea_if_participating_in_ph',
  'field_hin_1' => 'field_hin_1',
  'field_rx_service_provider_class' => 'field_rx_service_provider_class',
);
$handler->display->display_options['row_options']['separator'] = ',';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<?php 

  $container_nid = &drupal_static(__FUNCTION__);
  if (!isset($container_nid)) {
    if ($container_nid_cache = cache_get(\'oma_navigation_container_nid\')) {
      $container_nid = $container_nid_cache->data;
    } else {
      cache_set(\'oma_navigation_container_nid\', arg(3), \'cache\');
    }
  }

  print drupal_render(drupal_get_form(\'oma_navigation_additonal_sites_authority_control_form\')); 

  ?>

<p>Please use the form attached below to list all additional sites that will be receiving products and services through the program.</p>

<a class="btn btn-default" href="/import/child_sites_import/xlstemplate?destination=<?php print current_path(); ?>">Download a template.</a>
<a class="btn btn-primary" href="/import/child_sites_import/<?php print arg(2) ?>?destination=<?php print current_path(); ?>">Bulk additional site uploader</a>
';
$handler->display->display_options['header']['area']['format'] = 'php_code';
/* Header: Global: Text area */
$handler->display->display_options['header']['area_1']['id'] = 'area_1';
$handler->display->display_options['header']['area_1']['table'] = 'views';
$handler->display->display_options['header']['area_1']['field'] = 'area';
$handler->display->display_options['header']['area_1']['content'] = '<a class="btn btn-danger" href="/import/child_sites_import/delete-items?destination=<?php print current_path(); ?>">Delete previously imported additional sites</a>
<h3>Additional Sites</h3>';
$handler->display->display_options['header']['area_1']['format'] = 'php_code';
/* Field: Content: Address - Company */
$handler->display->display_options['fields']['field_address_organisation_name']['id'] = 'field_address_organisation_name';
$handler->display->display_options['fields']['field_address_organisation_name']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_organisation_name']['field'] = 'field_address_organisation_name';
$handler->display->display_options['fields']['field_address_organisation_name']['label'] = '';
$handler->display->display_options['fields']['field_address_organisation_name']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_address_organisation_name']['element_label_colon'] = FALSE;
/* Field: Content: Address - Full name */
$handler->display->display_options['fields']['field_address_name_line']['id'] = 'field_address_name_line';
$handler->display->display_options['fields']['field_address_name_line']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_name_line']['field'] = 'field_address_name_line';
$handler->display->display_options['fields']['field_address_name_line']['label'] = '';
$handler->display->display_options['fields']['field_address_name_line']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_address_name_line']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address_name_line']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_address_name_line']['hide_alter_empty'] = FALSE;
/* Field: Content: Address - Thoroughfare (i.e. Street address) */
$handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
$handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
$handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
$handler->display->display_options['fields']['field_address_thoroughfare']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address_thoroughfare']['element_default_classes'] = FALSE;
/* Field: Content: Address - Sub Premise (i.e. Suite, Apartment, Floor, Unknown. */
$handler->display->display_options['fields']['field_address_sub_premise']['id'] = 'field_address_sub_premise';
$handler->display->display_options['fields']['field_address_sub_premise']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_sub_premise']['field'] = 'field_address_sub_premise';
$handler->display->display_options['fields']['field_address_sub_premise']['label'] = '';
$handler->display->display_options['fields']['field_address_sub_premise']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address_sub_premise']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_address_sub_premise']['hide_alter_empty'] = FALSE;
/* Field: Content: Address - Locality (i.e. City) */
$handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
$handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
$handler->display->display_options['fields']['field_address_locality']['label'] = '';
$handler->display->display_options['fields']['field_address_locality']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address_locality']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_address_locality']['hide_alter_empty'] = FALSE;
/* Field: Content: Address - Administrative area (i.e. State / Province) */
$handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
$handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
$handler->display->display_options['fields']['field_address_administrative_area']['label'] = '';
$handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 1;
/* Field: Content: Address - Country */
$handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
$handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
$handler->display->display_options['fields']['field_address_country']['label'] = '';
$handler->display->display_options['fields']['field_address_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
/* Field: Content: Address - Postal code */
$handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['label'] = '';
$handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
/* Field: Content: Address - Dependent locality */
$handler->display->display_options['fields']['field_address_dependent_locality']['id'] = 'field_address_dependent_locality';
$handler->display->display_options['fields']['field_address_dependent_locality']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_dependent_locality']['field'] = 'field_address_dependent_locality';
$handler->display->display_options['fields']['field_address_dependent_locality']['label'] = 'Address 3 (Delivery Information)';
$handler->display->display_options['fields']['field_address_dependent_locality']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_address_dependent_locality']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address_dependent_locality']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_address_dependent_locality']['hide_alter_empty'] = FALSE;
/* Field: Content: Phone */
$handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
$handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
$handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
$handler->display->display_options['fields']['field_phone']['label'] = 'Phone*';
$handler->display->display_options['fields']['field_phone']['element_label_type'] = 'strong';
/* Field: Content: Class of Trade (Primary Service) */
$handler->display->display_options['fields']['field_class_of_trade']['id'] = 'field_class_of_trade';
$handler->display->display_options['fields']['field_class_of_trade']['table'] = 'field_data_field_class_of_trade';
$handler->display->display_options['fields']['field_class_of_trade']['field'] = 'field_class_of_trade';
$handler->display->display_options['fields']['field_class_of_trade']['label'] = 'Class of Trade (Primary Service) *';
$handler->display->display_options['fields']['field_class_of_trade']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_class_of_trade']['element_wrapper_class'] = 'field-inline';
/* Field: Content: Sponsor Name */
$handler->display->display_options['fields']['field_sponsor_name']['id'] = 'field_sponsor_name';
$handler->display->display_options['fields']['field_sponsor_name']['table'] = 'field_data_field_sponsor_name';
$handler->display->display_options['fields']['field_sponsor_name']['field'] = 'field_sponsor_name';
$handler->display->display_options['fields']['field_sponsor_name']['label'] = 'Sponsor Name*';
$handler->display->display_options['fields']['field_sponsor_name']['element_label_type'] = 'strong';
/* Field: Content: Sponsor Entity Code */
$handler->display->display_options['fields']['field_sponsor_entity_code_1']['id'] = 'field_sponsor_entity_code_1';
$handler->display->display_options['fields']['field_sponsor_entity_code_1']['table'] = 'field_data_field_sponsor_entity_code_1';
$handler->display->display_options['fields']['field_sponsor_entity_code_1']['field'] = 'field_sponsor_entity_code_1';
$handler->display->display_options['fields']['field_sponsor_entity_code_1']['label'] = 'Sponsor Entity Code*';
$handler->display->display_options['fields']['field_sponsor_entity_code_1']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_sponsor_entity_code_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_sponsor_entity_code_1']['hide_alter_empty'] = FALSE;
/* Field: Content: Direct Parent Name */
$handler->display->display_options['fields']['field_direct_parent_name']['id'] = 'field_direct_parent_name';
$handler->display->display_options['fields']['field_direct_parent_name']['table'] = 'field_data_field_direct_parent_name';
$handler->display->display_options['fields']['field_direct_parent_name']['field'] = 'field_direct_parent_name';
$handler->display->display_options['fields']['field_direct_parent_name']['element_label_type'] = 'strong';
/* Field: Content: Direct Parent Entity Code */
$handler->display->display_options['fields']['field_direct_parent_entity_cde']['id'] = 'field_direct_parent_entity_cde';
$handler->display->display_options['fields']['field_direct_parent_entity_cde']['table'] = 'field_data_field_direct_parent_entity_cde';
$handler->display->display_options['fields']['field_direct_parent_entity_cde']['field'] = 'field_direct_parent_entity_cde';
$handler->display->display_options['fields']['field_direct_parent_entity_cde']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_direct_parent_entity_cde']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_direct_parent_entity_cde']['hide_alter_empty'] = FALSE;
/* Field: Content: Relationship to Direct Parent */
$handler->display->display_options['fields']['field_relationship_to_direct_par']['id'] = 'field_relationship_to_direct_par';
$handler->display->display_options['fields']['field_relationship_to_direct_par']['table'] = 'field_data_field_relationship_to_direct_par';
$handler->display->display_options['fields']['field_relationship_to_direct_par']['field'] = 'field_relationship_to_direct_par';
$handler->display->display_options['fields']['field_relationship_to_direct_par']['label'] = 'Relationship to Direct Parent *';
$handler->display->display_options['fields']['field_relationship_to_direct_par']['element_label_type'] = 'strong';
/* Field: Content: Does the additional site require its own Premier identifier (i.e. Entity Code)? */
$handler->display->display_options['fields']['field_does_the_child_site_requir']['id'] = 'field_does_the_child_site_requir';
$handler->display->display_options['fields']['field_does_the_child_site_requir']['table'] = 'field_data_field_does_the_child_site_requir';
$handler->display->display_options['fields']['field_does_the_child_site_requir']['field'] = 'field_does_the_child_site_requir';
$handler->display->display_options['fields']['field_does_the_child_site_requir']['label'] = 'Does the child site require its own Premier identifier (i.e. Entity Code)? *';
$handler->display->display_options['fields']['field_does_the_child_site_requir']['element_label_type'] = 'strong';
/* Field: Content: DEA# (If participating in Pharmacy Program) */
$handler->display->display_options['fields']['field_dea_if_participating_in_ph']['id'] = 'field_dea_if_participating_in_ph';
$handler->display->display_options['fields']['field_dea_if_participating_in_ph']['table'] = 'field_data_field_dea_if_participating_in_ph';
$handler->display->display_options['fields']['field_dea_if_participating_in_ph']['field'] = 'field_dea_if_participating_in_ph';
$handler->display->display_options['fields']['field_dea_if_participating_in_ph']['label'] = 'DEA#';
$handler->display->display_options['fields']['field_dea_if_participating_in_ph']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_dea_if_participating_in_ph']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_dea_if_participating_in_ph']['hide_alter_empty'] = FALSE;
/* Field: Content: HIN (If participating in Pharmacy Program the a DEA and/or HIN is required) */
$handler->display->display_options['fields']['field_hin_1']['id'] = 'field_hin_1';
$handler->display->display_options['fields']['field_hin_1']['table'] = 'field_data_field_hin_1';
$handler->display->display_options['fields']['field_hin_1']['field'] = 'field_hin_1';
$handler->display->display_options['fields']['field_hin_1']['label'] = 'HIN #';
$handler->display->display_options['fields']['field_hin_1']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_hin_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_hin_1']['hide_alter_empty'] = FALSE;
/* Field: Content: RX Service Provider Class */
$handler->display->display_options['fields']['field_rx_service_provider_class']['id'] = 'field_rx_service_provider_class';
$handler->display->display_options['fields']['field_rx_service_provider_class']['table'] = 'field_data_field_rx_service_provider_class';
$handler->display->display_options['fields']['field_rx_service_provider_class']['field'] = 'field_rx_service_provider_class';
$handler->display->display_options['fields']['field_rx_service_provider_class']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_rx_service_provider_class']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_rx_service_provider_class']['hide_alter_empty'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-field';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_class'] = 'delete-field';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Address - Country */
$handler->display->display_options['sorts']['field_address_country']['id'] = 'field_address_country';
$handler->display->display_options['sorts']['field_address_country']['table'] = 'field_data_field_address';
$handler->display->display_options['sorts']['field_address_country']['field'] = 'field_address_country';
$handler->display->display_options['sorts']['field_address_country']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_address_country']['expose']['label'] = 'Country';
/* Sort criterion: Content: Address - Locality (i.e. City) */
$handler->display->display_options['sorts']['field_address_locality']['id'] = 'field_address_locality';
$handler->display->display_options['sorts']['field_address_locality']['table'] = 'field_data_field_address';
$handler->display->display_options['sorts']['field_address_locality']['field'] = 'field_address_locality';
$handler->display->display_options['sorts']['field_address_locality']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_address_locality']['expose']['label'] = 'City';
/* Sort criterion: Content: Address - Postal code */
$handler->display->display_options['sorts']['field_address_postal_code']['id'] = 'field_address_postal_code';
$handler->display->display_options['sorts']['field_address_postal_code']['table'] = 'field_data_field_address';
$handler->display->display_options['sorts']['field_address_postal_code']['field'] = 'field_address_postal_code';
$handler->display->display_options['sorts']['field_address_postal_code']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_address_postal_code']['expose']['label'] = 'Postal code';
/* Sort criterion: Content: Class of Trade (Primary Service) (field_class_of_trade) */
$handler->display->display_options['sorts']['field_class_of_trade_value']['id'] = 'field_class_of_trade_value';
$handler->display->display_options['sorts']['field_class_of_trade_value']['table'] = 'field_data_field_class_of_trade';
$handler->display->display_options['sorts']['field_class_of_trade_value']['field'] = 'field_class_of_trade_value';
$handler->display->display_options['sorts']['field_class_of_trade_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_class_of_trade_value']['expose']['label'] = 'Class of Trade';
/* Sort criterion: Content: Direct Parent Name (field_direct_parent_name) */
$handler->display->display_options['sorts']['field_direct_parent_name_value']['id'] = 'field_direct_parent_name_value';
$handler->display->display_options['sorts']['field_direct_parent_name_value']['table'] = 'field_data_field_direct_parent_name';
$handler->display->display_options['sorts']['field_direct_parent_name_value']['field'] = 'field_direct_parent_name_value';
$handler->display->display_options['sorts']['field_direct_parent_name_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_direct_parent_name_value']['expose']['label'] = 'Direct Parent Name ';
/* Sort criterion: Content: Does the additional site require its own Premier identifier (i.e. Entity Code)? (field_does_the_child_site_requir) */
$handler->display->display_options['sorts']['field_does_the_child_site_requir_value']['id'] = 'field_does_the_child_site_requir_value';
$handler->display->display_options['sorts']['field_does_the_child_site_requir_value']['table'] = 'field_data_field_does_the_child_site_requir';
$handler->display->display_options['sorts']['field_does_the_child_site_requir_value']['field'] = 'field_does_the_child_site_requir_value';
$handler->display->display_options['sorts']['field_does_the_child_site_requir_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_does_the_child_site_requir_value']['expose']['label'] = 'Does the additional site require its own Premier identifier (i.e. Entity Code)?';
/* Sort criterion: Content: Phone (field_phone) */
$handler->display->display_options['sorts']['field_phone_value']['id'] = 'field_phone_value';
$handler->display->display_options['sorts']['field_phone_value']['table'] = 'field_data_field_phone';
$handler->display->display_options['sorts']['field_phone_value']['field'] = 'field_phone_value';
$handler->display->display_options['sorts']['field_phone_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_phone_value']['expose']['label'] = 'Phone';
/* Sort criterion: Content: Address - Company */
$handler->display->display_options['sorts']['field_address_organisation_name_1']['id'] = 'field_address_organisation_name_1';
$handler->display->display_options['sorts']['field_address_organisation_name_1']['table'] = 'field_data_field_address';
$handler->display->display_options['sorts']['field_address_organisation_name_1']['field'] = 'field_address_organisation_name';
$handler->display->display_options['sorts']['field_address_organisation_name_1']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_address_organisation_name_1']['expose']['label'] = 'Name of Additional Site';
/* Sort criterion: Content: Address - Thoroughfare (i.e. Street address) */
$handler->display->display_options['sorts']['field_address_thoroughfare_1']['id'] = 'field_address_thoroughfare_1';
$handler->display->display_options['sorts']['field_address_thoroughfare_1']['table'] = 'field_data_field_address';
$handler->display->display_options['sorts']['field_address_thoroughfare_1']['field'] = 'field_address_thoroughfare';
$handler->display->display_options['sorts']['field_address_thoroughfare_1']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_address_thoroughfare_1']['expose']['label'] = 'Address';
/* Sort criterion: Content: Sponsor Name (field_sponsor_name:format) */
$handler->display->display_options['sorts']['field_sponsor_name_format']['id'] = 'field_sponsor_name_format';
$handler->display->display_options['sorts']['field_sponsor_name_format']['table'] = 'field_data_field_sponsor_name';
$handler->display->display_options['sorts']['field_sponsor_name_format']['field'] = 'field_sponsor_name_format';
$handler->display->display_options['sorts']['field_sponsor_name_format']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_sponsor_name_format']['expose']['label'] = 'Sponsor Name';
/* Sort criterion: Content: Relationship to Direct Parent (field_relationship_to_direct_par) */
$handler->display->display_options['sorts']['field_relationship_to_direct_par_value']['id'] = 'field_relationship_to_direct_par_value';
$handler->display->display_options['sorts']['field_relationship_to_direct_par_value']['table'] = 'field_data_field_relationship_to_direct_par';
$handler->display->display_options['sorts']['field_relationship_to_direct_par_value']['field'] = 'field_relationship_to_direct_par_value';
$handler->display->display_options['sorts']['field_relationship_to_direct_par_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_relationship_to_direct_par_value']['expose']['label'] = 'Relationship to Direct Parent';
/* Contextual filter: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
/* Contextual filter: Global: Null */
$handler->display->display_options['arguments']['null_1']['id'] = 'null_1';
$handler->display->display_options['arguments']['null_1']['table'] = 'views';
$handler->display->display_options['arguments']['null_1']['field'] = 'null';
$handler->display->display_options['arguments']['null_1']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['null_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['null_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['null_1']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
$handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'min' => '',
  'max' => '',
  'value' => '',
  'child_site' => 'child_site',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'application/%/exhibit-d/%';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Exhibit D';





$views[$view->name] = $view;