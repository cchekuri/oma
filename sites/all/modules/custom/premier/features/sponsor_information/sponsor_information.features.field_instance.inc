<?php
/**
 * @file
 * sponsor_information.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sponsor_information_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-sponsor_information-field_direct_parent_entity_code'.
  $field_instances['node-sponsor_information-field_direct_parent_entity_code'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_parent_entity_code',
    'label' => 'Direct Parent Entity Code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-sponsor_information-field_direct_parent_name1'.
  $field_instances['node-sponsor_information-field_direct_parent_name1'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_direct_parent_name1',
    'label' => 'Direct Parent Name (parent company, if different from Sponsor)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-sponsor_information-field_master_application_node_id'.
  $field_instances['node-sponsor_information-field_master_application_node_id'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_master_application_node_id',
    'label' => 'Master Application Node ID',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-sponsor_information-field_prospective_member_relatio'.
  $field_instances['node-sponsor_information-field_prospective_member_relatio'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'OWNED: A facility is considered to be owned if the parent (1) holds a direct or indirect equity or corporate Membership interest (which may be less than a majority of the equity or corporate Membership interests) or otherwise has the ability to appoint one or more members of the facility\'s governing board and (2) the facility is willing to designate Premier Healthcare Alliance, L.P. (“Premier”) as its primary GPO.<br>
LEASED: A leased facility is leased and operated by its direct parent.<br>
MANAGED: A facility is considered to be managed if the direct parent directly or indirectly manages all or a portion of its operations pursuant to a management agreement.<br>
AFFILIATED: A facility is considered to be affiliated if the direct parent formally sponsors the facility, but does not own, lease or manage. If an affiliated facility’s relationship with its sponsor ends and such facility wishes to continue its participation in the group purchasing programs operated by Premier, such facility should consult with Premier regarding other participation options. In addition, if the affiliate has a sponsoring Premier Owner or purchasing group, the sponsoring Premier Owner or purchasing group must countersign this agreement.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_prospective_member_relatio',
    'label' => 'Participating Member Relation to Direct Parent (If No Direct Parent, Indicate Participating Member Relation to Sponsor)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-sponsor_information-field_sponsor_contact_email'.
  $field_instances['node-sponsor_information-field_sponsor_contact_email'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sponsor_contact_email',
    'label' => 'Sponsor Contact Email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-sponsor_information-field_sponsor_contact_name'.
  $field_instances['node-sponsor_information-field_sponsor_contact_name'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sponsor_contact_name',
    'label' => 'Sponsor Contact Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-sponsor_information-field_sponsor_contact_phone_numb'.
  $field_instances['node-sponsor_information-field_sponsor_contact_phone_numb'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sponsor_contact_phone_numb',
    'label' => 'Sponsor Contact Phone Number',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-sponsor_information-field_sponsor_entity_code'.
  $field_instances['node-sponsor_information-field_sponsor_entity_code'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sponsor_entity_code',
    'label' => 'Sponsor Entity Code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-sponsor_information-field_sponsoring_premier_owner_p'.
  $field_instances['node-sponsor_information-field_sponsoring_premier_owner_p'] = array(
    'bundle' => 'sponsor_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sponsoring_premier_owner_p',
    'label' => 'Sponsor Name (Sponsoring Premier Owner/Purchasing Group)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Direct Parent Entity Code');
  t('Direct Parent Name (parent company, if different from Sponsor)');
  t('Master Application Node ID');
  t('OWNED: A facility is considered to be owned if the parent (1) holds a direct or indirect equity or corporate Membership interest (which may be less than a majority of the equity or corporate Membership interests) or otherwise has the ability to appoint one or more members of the facility\'s governing board and (2) the facility is willing to designate Premier Healthcare Alliance, L.P. (“Premier”) as its primary GPO.<br>
LEASED: A leased facility is leased and operated by its direct parent.<br>
MANAGED: A facility is considered to be managed if the direct parent directly or indirectly manages all or a portion of its operations pursuant to a management agreement.<br>
AFFILIATED: A facility is considered to be affiliated if the direct parent formally sponsors the facility, but does not own, lease or manage. If an affiliated facility’s relationship with its sponsor ends and such facility wishes to continue its participation in the group purchasing programs operated by Premier, such facility should consult with Premier regarding other participation options. In addition, if the affiliate has a sponsoring Premier Owner or purchasing group, the sponsoring Premier Owner or purchasing group must countersign this agreement.');
  t('Participating Member Relation to Direct Parent (If No Direct Parent, Indicate Participating Member Relation to Sponsor)');
  t('Sponsor Contact Email');
  t('Sponsor Contact Name');
  t('Sponsor Contact Phone Number');
  t('Sponsor Entity Code');
  t('Sponsor Name (Sponsoring Premier Owner/Purchasing Group)');

  return $field_instances;
}
