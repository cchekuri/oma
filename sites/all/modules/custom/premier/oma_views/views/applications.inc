<?php

$view = new view();
$view->name = 'all_applications';
$view->description = 'Show all applications and their workflow state.';
$view->tag = 'premier';
$view->base_table = 'node';
$view->human_name = 'Premier Ops Dashboard';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Workflow';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access workflow summary views';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'name' => 'name',
  'created' => 'created',
  'timestamp' => 'timestamp',
  'type' => 'type',
  'hid_1' => 'hid_1',
  'sid' => 'sid',
  'stamp' => 'stamp',
  'comment' => 'comment',
  'workflow_node' => 'workflow_node',
  'edit_comment' => 'workflow_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'hid_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'sid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'stamp' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'comment' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'workflow_node' => array(
    'align' => '',
    'separator' => '<br>',
    'empty_column' => 0,
  ),
  'edit_comment' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid_3']['id'] = 'uid_3';
$handler->display->display_options['relationships']['uid_3']['table'] = 'node';
$handler->display->display_options['relationships']['uid_3']['field'] = 'uid';
/* Relationship: Workflow current: User */
$handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['relationships']['uid_1']['table'] = 'workflow_node_current';
$handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
$handler->display->display_options['relationships']['uid_1']['label'] = 'Current user';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
$handler->display->display_options['fields']['name']['label'] = 'By';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Updated';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
/* Field: Workflow current: Transition ID */
$handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
$handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['hid_1']['field'] = 'hid';
$handler->display->display_options['fields']['hid_1']['label'] = 'hid';
$handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
/* Field: Workflow current: New state name */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
/* Field: Workflow current: Time */
$handler->display->display_options['fields']['stamp']['id'] = 'stamp';
$handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['stamp']['field'] = 'stamp';
$handler->display->display_options['fields']['stamp']['label'] = 'Since';
$handler->display->display_options['fields']['stamp']['date_format'] = 'raw time ago';
/* Field: Workflow current: Comment */
$handler->display->display_options['fields']['comment']['id'] = 'comment';
$handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['comment']['field'] = 'comment';
/* Field: Content: Workflow link */
$handler->display->display_options['fields']['workflow_node']['id'] = 'workflow_node';
$handler->display->display_options['fields']['workflow_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['workflow_node']['field'] = 'workflow_node';
$handler->display->display_options['fields']['workflow_node']['label'] = 'Actions';
$handler->display->display_options['fields']['workflow_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['workflow_node']['alter']['text'] = 'workflow';
/* Field: Workflow current: Edit comment */
$handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
/* Sort criterion: Workflow current: Time */
$handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
$handler->display->display_options['sorts']['stamp']['table'] = 'workflow_node_current';
$handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'all' => 'all',
  'basic_page' => 'basic_page',
  'child_site' => 'child_site',
  'contact_profile' => 'contact_profile',
  'continuum_of_care' => 'continuum_of_care',
  'facility_authorization' => 'facility_authorization',
  'membership_classification' => 'membership_classification',
  'pharmacy_program_requirements' => 'pharmacy_program_requirements',
  'member_information' => 'member_information',
  'sponsor_information' => 'sponsor_information',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
);
/* Filter criterion: Workflow current: New state name */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['value'] = array(
  2 => '2',
  3 => '3',
  4 => '4',
  5 => '5',
);
$handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
$handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
$handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid_3';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Created By';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);

/* Display: My content */
$handler = $view->new_display('page', 'My content', 'page_3');
$handler->display->display_options['display_description'] = 'Show content created by current user.';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
$handler->display->display_options['fields']['name']['label'] = 'By';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Updated';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
/* Field: Workflow current: Transition ID */
$handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
$handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['hid_1']['field'] = 'hid';
$handler->display->display_options['fields']['hid_1']['label'] = 'hid';
$handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
/* Field: Workflow current: New state name */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
$handler->display->display_options['fields']['sid']['exclude'] = TRUE;
/* Field: Workflow current: Time */
$handler->display->display_options['fields']['stamp']['id'] = 'stamp';
$handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['stamp']['field'] = 'stamp';
$handler->display->display_options['fields']['stamp']['label'] = 'Since';
$handler->display->display_options['fields']['stamp']['date_format'] = 'raw time ago';
/* Field: Workflow current: Comment */
$handler->display->display_options['fields']['comment']['id'] = 'comment';
$handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['comment']['field'] = 'comment';
/* Field: Content: Workflow link */
$handler->display->display_options['fields']['workflow_node']['id'] = 'workflow_node';
$handler->display->display_options['fields']['workflow_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['workflow_node']['field'] = 'workflow_node';
$handler->display->display_options['fields']['workflow_node']['label'] = 'Actions';
$handler->display->display_options['fields']['workflow_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['workflow_node']['alter']['text'] = 'workflow';
/* Field: Workflow current: Edit comment */
$handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'continuum_of_care' => 'continuum_of_care',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
);
/* Filter criterion: Workflow current: New state name */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['value'] = array(
  6 => '6',
);
$handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
$handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
$handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Content: Post date */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'node';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['label'] = 'Created';
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
$handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Content: Updated date */
$handler->display->display_options['filters']['changed']['id'] = 'changed';
$handler->display->display_options['filters']['changed']['table'] = 'node';
$handler->display->display_options['filters']['changed']['field'] = 'changed';
$handler->display->display_options['filters']['changed']['exposed'] = TRUE;
$handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated';
$handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
$handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Workflow current: Comment */
$handler->display->display_options['filters']['comment']['id'] = 'comment';
$handler->display->display_options['filters']['comment']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['comment']['field'] = 'comment';
$handler->display->display_options['filters']['comment']['exposed'] = TRUE;
$handler->display->display_options['filters']['comment']['expose']['operator_id'] = 'comment_op';
$handler->display->display_options['filters']['comment']['expose']['label'] = 'Comment';
$handler->display->display_options['filters']['comment']['expose']['operator'] = 'comment_op';
$handler->display->display_options['filters']['comment']['expose']['identifier'] = 'comment';
$handler->display->display_options['filters']['comment']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['path'] = 'workflow/my';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'My content';
$handler->display->display_options['menu']['weight'] = '-1';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Workflow';
$handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Application - In process */
$handler = $view->new_display('page', 'Application - In process', 'page_7');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
$handler->display->display_options['fields']['name']['label'] = 'By';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Updated';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
/* Field: Workflow current: Transition ID */
$handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
$handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['hid_1']['field'] = 'hid';
$handler->display->display_options['fields']['hid_1']['label'] = 'hid';
$handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
/* Field: Workflow current: New state name */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
/* Field: Workflow current: Time */
$handler->display->display_options['fields']['stamp']['id'] = 'stamp';
$handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['stamp']['field'] = 'stamp';
$handler->display->display_options['fields']['stamp']['label'] = 'Since';
$handler->display->display_options['fields']['stamp']['date_format'] = 'raw time ago';
/* Field: Workflow current: Comment */
$handler->display->display_options['fields']['comment']['id'] = 'comment';
$handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['comment']['field'] = 'comment';
/* Field: Content: Workflow link */
$handler->display->display_options['fields']['workflow_node']['id'] = 'workflow_node';
$handler->display->display_options['fields']['workflow_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['workflow_node']['field'] = 'workflow_node';
$handler->display->display_options['fields']['workflow_node']['label'] = 'Actions';
$handler->display->display_options['fields']['workflow_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['workflow_node']['alter']['text'] = 'workflow';
/* Field: Workflow current: Edit comment */
$handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'continuum_of_care' => 'continuum_of_care',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
);
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Workflow current: New state name */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['value'] = array(
  2 => '2',
  3 => '3',
  4 => '4',
  5 => '5',
);
$handler->display->display_options['filters']['sid']['group'] = 1;
$handler->display->display_options['filters']['sid']['exposed'] = TRUE;
$handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
$handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
$handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['sid']['group_info']['label'] = 'New state name';
$handler->display->display_options['filters']['sid']['group_info']['identifier'] = 'sid';
$handler->display->display_options['filters']['sid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['sid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
/* Filter criterion: Content: Post date */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'node';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['group'] = 1;
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['label'] = 'Created';
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
$handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Content: Updated date */
$handler->display->display_options['filters']['changed']['id'] = 'changed';
$handler->display->display_options['filters']['changed']['table'] = 'node';
$handler->display->display_options['filters']['changed']['field'] = 'changed';
$handler->display->display_options['filters']['changed']['group'] = 1;
$handler->display->display_options['filters']['changed']['exposed'] = TRUE;
$handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated';
$handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
$handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Workflow current: New state name */
$handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
$handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['sid_1']['field'] = 'sid';
$handler->display->display_options['filters']['sid_1']['value'] = array(
  2 => '2',
  3 => '3',
  4 => '4',
  5 => '5',
);
$handler->display->display_options['filters']['sid_1']['group'] = 1;
/* Filter criterion: Workflow current: Comment */
$handler->display->display_options['filters']['comment']['id'] = 'comment';
$handler->display->display_options['filters']['comment']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['comment']['field'] = 'comment';
$handler->display->display_options['filters']['comment']['exposed'] = TRUE;
$handler->display->display_options['filters']['comment']['expose']['operator_id'] = 'comment_op';
$handler->display->display_options['filters']['comment']['expose']['label'] = 'Comment';
$handler->display->display_options['filters']['comment']['expose']['operator'] = 'comment_op';
$handler->display->display_options['filters']['comment']['expose']['identifier'] = 'comment';
$handler->display->display_options['filters']['comment']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['path'] = 'workflow/in_process';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'In process';
$handler->display->display_options['menu']['weight'] = '2';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Historic */
$handler = $view->new_display('page', 'Historic', 'page_2');
$handler->display->display_options['display_description'] = 'which shows accepted and rejected recordss';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
$handler->display->display_options['fields']['name']['label'] = 'Created By';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Updated';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
/* Field: Workflow current: Transition ID */
$handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
$handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['hid_1']['field'] = 'hid';
$handler->display->display_options['fields']['hid_1']['label'] = 'hid';
$handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
/* Field: Workflow current: New state name */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
/* Field: Workflow current: Time */
$handler->display->display_options['fields']['stamp']['id'] = 'stamp';
$handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['stamp']['field'] = 'stamp';
$handler->display->display_options['fields']['stamp']['label'] = 'Since';
$handler->display->display_options['fields']['stamp']['date_format'] = 'raw time ago';
/* Field: Workflow current: Comment */
$handler->display->display_options['fields']['comment']['id'] = 'comment';
$handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['comment']['field'] = 'comment';
/* Field: Content: Workflow link */
$handler->display->display_options['fields']['workflow_node']['id'] = 'workflow_node';
$handler->display->display_options['fields']['workflow_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['workflow_node']['field'] = 'workflow_node';
$handler->display->display_options['fields']['workflow_node']['label'] = 'Actions';
$handler->display->display_options['fields']['workflow_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['workflow_node']['alter']['text'] = 'view history';
/* Field: Workflow current: Edit comment */
$handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
$handler->display->display_options['fields']['edit_comment']['exclude'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Workflow current: New state name */
$handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
$handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['sid_1']['field'] = 'sid';
$handler->display->display_options['filters']['sid_1']['value'] = array(
  7 => '7',
  8 => '8',
);
$handler->display->display_options['filters']['sid_1']['group'] = 1;
$handler->display->display_options['filters']['sid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['sid_1']['expose']['operator_id'] = 'sid_1_op';
$handler->display->display_options['filters']['sid_1']['expose']['label'] = 'New state name';
$handler->display->display_options['filters']['sid_1']['expose']['operator'] = 'sid_1_op';
$handler->display->display_options['filters']['sid_1']['expose']['identifier'] = 'sid_1';
$handler->display->display_options['filters']['sid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['sid_1']['expose']['reduce'] = TRUE;
/* Filter criterion: Content: Post date */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'node';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['group'] = 1;
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['label'] = 'Created';
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
$handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Content: Updated date */
$handler->display->display_options['filters']['changed']['id'] = 'changed';
$handler->display->display_options['filters']['changed']['table'] = 'node';
$handler->display->display_options['filters']['changed']['field'] = 'changed';
$handler->display->display_options['filters']['changed']['group'] = 1;
$handler->display->display_options['filters']['changed']['exposed'] = TRUE;
$handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated';
$handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
$handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Workflow current: Comment */
$handler->display->display_options['filters']['comment']['id'] = 'comment';
$handler->display->display_options['filters']['comment']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['comment']['field'] = 'comment';
$handler->display->display_options['filters']['comment']['group'] = 1;
$handler->display->display_options['filters']['comment']['exposed'] = TRUE;
$handler->display->display_options['filters']['comment']['expose']['operator_id'] = 'comment_op';
$handler->display->display_options['filters']['comment']['expose']['label'] = 'Comment';
$handler->display->display_options['filters']['comment']['expose']['operator'] = 'comment_op';
$handler->display->display_options['filters']['comment']['expose']['identifier'] = 'comment';
$handler->display->display_options['filters']['comment']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  4 => 0,
  6 => 0,
  3 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'continuum_of_care' => 'continuum_of_care',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
);
/* Filter criterion: Workflow current: New state name */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['value'] = array(
  7 => '7',
  8 => '8',
);
$handler->display->display_options['filters']['sid']['group'] = 1;
$handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
$handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
$handler->display->display_options['path'] = 'workflow/historic';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Historic';
$handler->display->display_options['menu']['weight'] = '3';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$views[$view->name] = $view;