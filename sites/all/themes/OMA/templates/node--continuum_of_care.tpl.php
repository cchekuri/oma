<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */

?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

<?php 

  if (function_exists('oma_navigation_get_workflow_mode')) { 
    $workflow_mode = oma_navigation_get_workflow_mode($node); 
  }

  if($workflow_mode == 'edit')
    $edit = '/edit';
  else
    $edit = '';

  print render($title_prefix);

  $container = $node->nid;
  $destination = array();
  $route = str_replace("_", "-", $node->type);


  // Set Sponsor Information Link
  $related_sponsor_info = get_items($container, 'sponsor_information');
  $count = $related_sponsor_info->rowCount();
  $completed = "";
  
  if($count == 0) {
    $sponsor_info_link = $link = l('Sponsor Information', 'application/continuum-of-care/sponsor-information/'. $node->nid, $destination);
  } else {
    $sponsor_options = $destination;
    $sponsor_options['attributes'] = array('class' => 'completed');
    foreach($related_sponsor_info as $i=>$record) {
      $linked_node = node_load($record->entity_id);  
      $sponsor_info_link = l('Sponsor Information', 'node/' . $linked_node->nid . $edit, $sponsor_options);
    }  
    $completed = TRUE;
  }


  // Set Prospective Member Information Link
  $related_member_info = get_items($container, 'member_information');
  $count = $related_member_info->rowCount();
  if($count == 0) {
    $prospective_member_info_link = $link = l('Prospective Member Information', 'application/continuum-of-care/member-information/'. $node->nid, $destination);    
  } else {
    $member_options = $destination;
    $member_options['attributes'] = array('class' => 'completed');
    foreach($related_member_info as $i=>$record) {
      $linked_node = node_load($record->entity_id);
      $prospective_member_info_link = l('Prospective Member Information', 'node/' . $linked_node->nid . $edit, $member_options);
    }  
  }


  // Set Membership Classification Information Link
  $related_membership_classification_info = get_items($container, 'membership_classification');
  $count = $related_membership_classification_info->rowCount();

  if($count == 0) {
    $related_membership_classification_info_link = $link = l('Member Classification', 'application/continuum-of-care/membership-classification/'. $node->nid, $destination);    
  } else {
    $member_options = $destination;
    $member_options['attributes'] = array('class' => 'completed');
    foreach($related_membership_classification_info as $i=>$record) {
      $linked_node = node_load($record->entity_id);  
      $related_membership_classification_info_link = l('Member Classification', 'node/' . $linked_node->nid . $edit, $member_options);
    }  
  }


  // Set Facility Authorization Link
  $related_facility_authorization_info = get_items($container, 'facility_authorization');
  $count = $related_facility_authorization_info->rowCount();

  if($count == 0) {
    $related_facility_authorization_info_link = $link = l('Faclity Authorization', 'application/continuum-of-care/facility-authorization/'. $node->nid, $destination);    
  } else {
    $member_options = $destination;
    $member_options['attributes'] = array('class' => 'completed');
    foreach($related_facility_authorization_info as $i=>$record) {
      $linked_node = node_load($record->entity_id);  
      $related_facility_authorization_info_link = l('Facility Authorization', 'node/' . $linked_node->nid . $edit, $member_options);
    }  
  }


  // Set Pharmacy Requirements Link
  $pharmacy_program_requirements = get_items($container, 'pharmacy_program_requirements');
  $count = $pharmacy_program_requirements->rowCount();

  if($count == 0) {
    $pharmacy_program_requirements_link = l('Pharmacy Program Requirements', 'application/'. $route . '/exhibit-b/' . $node->nid, $destination);    
  } else {
    $pharma_options = $destination;
    $pharma_options['attributes'] = array('class' => 'completed');
    $pharmacy_program_requirements_link = l('Pharmacy Program Requirements', 'application/'. $route . '/exhibit-b/' . $node->nid, $pharma_options);    
  }


  // Set Child Sites Link
  $child_sites = get_items($container, 'child_site');
  $count = $child_sites->rowCount();

  if($count == 0) {
    $child_sites_link = l('Additional Sites', 'application/'. $route . '/additional-sites/' . $node->nid, $destination);    
//    $child_sites_link = l('Additional Sites', 'application/'. $node->type . '/exhibit-d/' . $node->nid, $destination);    
  } else {
    $child_sites_options = $destination;
    $child_sites_options['attributes'] = array('class' => 'completed');
    $child_sites_link = l('Additional Sites', 'application/'. $route . '/exhibit-d/'. $node->nid . $edit, $child_sites_options);    
//    $child_sites_link = l('Additional Sites', 'application/'. $node->type . '/exhibit-d/'. $node->nid . $edit, $child_sites_options);    
  }


  // Set Facility Authorization Link
  $related_contact_profiles_info = get_items($container, 'contact_profile');
  $count = $related_contact_profiles_info->rowCount();

  if($count == 0) {
    $related_contact_profiles_info_link = $link = l('Contact Profiles', 'application/continuum-of-care/contact-profile/'. $node->nid, $destination);    
  } else {
    $member_options = $destination;
    $member_options['attributes'] = array('class' => 'completed');
    foreach($related_contact_profiles_info as $i=>$record) {
      $linked_node = node_load($record->entity_id);  
      $related_contact_profiles_info_link = l('Contact Profiles', 'node/' . $linked_node->nid . $edit, $member_options);
    }  
  }



  function get_items($container, $bundle) {
    // Grab a list of all nodes that are referenced by the container, of entity type node, and of entity type sponsor_information
    $result = db_select('field_data_field_master_application_node_id', 'entity_id')
    ->fields('entity_id')
    ->condition('field_master_application_node_id_nid', $container)
    ->condition('entity_type', 'node')
    ->condition('bundle', $bundle)
    ->execute();

    return $result;
  }

  ?>

  <h3>Section Links</h3>
  <div class="section-links">
    <?php print $sponsor_info_link; ?>
    <?php print $prospective_member_info_link; ?>
    <?php print $related_membership_classification_info_link; ?>
    <?php print $related_facility_authorization_info_link; ?>
    <?php print $pharmacy_program_requirements_link ?>
    <?php print $child_sites_link; ?>
    <?php print $related_contact_profiles_info_link; ?>
  </div>

  <div class="contract-links"> <?php 
  ?>

  <?php //print render($content['field_workflow_state']); ?>  
  <br />
  <?php //print l('Submit Application', '<front>', array('attributes' => array('class' => 'btn btn-primary'))); ?>
</div>


</div>
