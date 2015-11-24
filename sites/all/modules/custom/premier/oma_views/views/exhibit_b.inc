<?php

$view = new view();
$view->name = 'exhibit_b';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Exhibit B';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Exhibit B';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['label'] = 'Global: Add Another Text Area';
$handler->display->display_options['header']['area']['content'] = '<a href="/node/add/pharmacy-program-requirements/<?php print arg(2); ?>?destination=<?php print current_path(); ?>">Add Another</a>';
$handler->display->display_options['header']['area']['format'] = 'php_code';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You have not submitted any pharmacy requirements.  

If you wish to participate in Premier\'s Pharmacy program, please complete <a href="/node/add/pharmacy-program-requirements/<?php print arg(2); ?>">exhibit B</a>.';
$handler->display->display_options['empty']['area']['format'] = 'php_code';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'member_type' => 'member_type',
  'member_classification' => 0,
  'tags' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: DEA # */
$handler->display->display_options['fields']['field_dea']['id'] = 'field_dea';
$handler->display->display_options['fields']['field_dea']['table'] = 'field_data_field_dea';
$handler->display->display_options['fields']['field_dea']['field'] = 'field_dea';
/* Field: Content: HIN # */
$handler->display->display_options['fields']['field_hin']['id'] = 'field_hin';
$handler->display->display_options['fields']['field_hin']['table'] = 'field_data_field_hin';
$handler->display->display_options['fields']['field_hin']['field'] = 'field_hin';
/* Field: Content: Pharmacy Start Date */
$handler->display->display_options['fields']['field_pharmacy_start_date']['id'] = 'field_pharmacy_start_date';
$handler->display->display_options['fields']['field_pharmacy_start_date']['table'] = 'field_data_field_pharmacy_start_date';
$handler->display->display_options['fields']['field_pharmacy_start_date']['field'] = 'field_pharmacy_start_date';
$handler->display->display_options['fields']['field_pharmacy_start_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Field: Content: Type */
$handler->display->display_options['fields']['field_type']['id'] = 'field_type';
$handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
$handler->display->display_options['fields']['field_type']['field'] = 'field_type';
$handler->display->display_options['fields']['field_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Content: Master Application Node ID (field_master_application_node_id) */
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['id'] = 'field_master_application_node_id_nid';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['table'] = 'field_data_field_master_application_node_id';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['field'] = 'field_master_application_node_id_nid';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['validate_options']['access'] = TRUE;
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['validate_options']['access_op'] = 'update';
$handler->display->display_options['arguments']['field_master_application_node_id_nid']['validate']['fail'] = 'access denied';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'pharmacy_program_requirements' => 'pharmacy_program_requirements',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'application/%/exhibit-b/%';

$views[$view->name] = $view;