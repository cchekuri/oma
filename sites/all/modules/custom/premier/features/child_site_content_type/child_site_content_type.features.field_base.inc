<?php
/**
 * @file
 * child_site_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function child_site_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_address'.
  $field_bases['field_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_class_of_trade'.
  $field_bases['field_class_of_trade'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_class_of_trade',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Adult Day Care Center' => 'Adult Day Care Center',
        'Ambulatory Care Center' => 'Ambulatory Care Center',
        'Assisted Living' => 'Assisted Living',
        'Behavioral Health - Inpatient' => 'Behavioral Health - Inpatient',
        'Behavioral Health - Outpatient' => 'Behavioral Health - Outpatient',
        'Charity' => 'Charity',
        'Closed Door Pharmacy' => 'Closed Door Pharmacy',
        'Community Health Center' => 'Community Health Center',
        'Cont Care Retire Community (CCRC)' => 'Cont Care Retire Community (CCRC)',
        'Dentistry' => 'Dentistry',
        'Dialysis Center' => 'Dialysis Center',
        'DME & Supply Dealer' => 'DME & Supply Dealer',
        'First Responder' => 'First Responder',
        'Freestanding Healthcare Laboratory' => 'Freestanding Healthcare Laboratory',
        'Health Plan/HMO/PPO' => 'Health Plan/HMO/PPO',
        'Healthcare Corporate Office' => 'Healthcare Corporate Office',
        'Healthcare Management Svc Org' => 'Healthcare Management Svc Org',
        'Healthcare-Other:' => 'Healthcare-Other:',
        'Home Health Care Agency' => 'Home Health Care Agency',
        'Home Infusion' => 'Home Infusion',
        'Hospice – Home Care' => 'Hospice – Home Care',
        'Hospice – Inpatient' => 'Hospice – Inpatient',
        'Imaging Center' => 'Imaging Center',
        'Independent Living' => 'Independent Living',
        'Mail Order Pharmacy' => 'Mail Order Pharmacy',
        'Meals on Wheels' => 'Meals on Wheels',
        'Medical Association' => 'Medical Association',
        'Oncology Center' => 'Oncology Center',
        'Pharmacy' => 'Pharmacy',
        'Physician(s)' => 'Physician(s)',
        'Prison/Correctional Health' => 'Prison/Correctional Health',
        'Public Health Department' => 'Public Health Department',
        'Rehabilitation Center' => 'Rehabilitation Center',
        'Religious Institute' => 'Religious Institute',
        'Retail Pharmacy' => 'Retail Pharmacy',
        'Skilled Nursing-*What about # of Beds?*' => 'Skilled Nursing-*What about # of Beds?*',
        'Student/Employee Health Svc' => 'Student/Employee Health Svc',
        'Substance Abuse Treatment Center' => 'Substance Abuse Treatment Center',
        'Surgery Center' => 'Surgery Center',
        'Veterinary' => 'Veterinary',
        'Wellness Facility/Fitness Ctr' => 'Wellness Facility/Fitness Ctr',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_dea_if_participating_in_ph'.
  $field_bases['field_dea_if_participating_in_ph'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dea_if_participating_in_ph',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_direct_parent_entity_cde'.
  $field_bases['field_direct_parent_entity_cde'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_direct_parent_entity_cde',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_direct_parent_name'.
  $field_bases['field_direct_parent_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_direct_parent_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_does_the_child_site_requir'.
  $field_bases['field_does_the_child_site_requir'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_does_the_child_site_requir',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_hin_1'.
  $field_bases['field_hin_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hin_1',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_phone'.
  $field_bases['field_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phone',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'phone',
    'settings' => array(
      'country' => 'ca',
    ),
    'translatable' => 0,
    'type' => 'phone',
  );

  // Exported field_base: 'field_relationship_to_direct_par'.
  $field_bases['field_relationship_to_direct_par'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_relationship_to_direct_par',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Owned' => 'Owned',
        'Leased' => 'Leased',
        'Managed' => 'Managed',
        'Affiliated (Not Owned, Leased or Managed)' => 'Affiliated (Not Owned, Leased or Managed)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_rx_service_provider_class'.
  $field_bases['field_rx_service_provider_class'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rx_service_provider_class',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Acute Non-Retail' => 'Acute Non-Retail',
        'Retail' => 'Retail',
        'Non-Acute-Non-Retail' => 'Non-Acute-Non-Retail',
        'Managed Care Pharmacy' => 'Managed Care Pharmacy',
        'State Government Entities' => 'State Government Entities',
        'Long Term Care' => 'Long Term Care',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sponsor_entity_code_1'.
  $field_bases['field_sponsor_entity_code_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sponsor_entity_code_1',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_sponsor_name'.
  $field_bases['field_sponsor_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sponsor_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
