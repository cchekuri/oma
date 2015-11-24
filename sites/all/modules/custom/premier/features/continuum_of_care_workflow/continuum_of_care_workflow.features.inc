<?php
/**
 * @file
 * continuum_of_care_workflow.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function continuum_of_care_workflow_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'continuum_of_care_workflow'
  $workflows['continuum_of_care_workflow'] = entity_import('Workflow', '{
    "name" : "continuum_of_care_workflow",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "35" : {"sid":"35","wid":"7","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "36" : {"sid":"36","wid":"7","weight":"-20","sysid":"0","state":"Sponsor (Edit)","status":"1","name":"(sponsor_editing)"},
      "37" : {"sid":"37","wid":"7","weight":"-19","sysid":"0","state":"Prospective Member","status":"1","name":"(prospective_member_editing)"},
      "38" : {"sid":"38","wid":"7","weight":"-18","sysid":"0","state":"Sponsor (Review)","status":"1","name":"(sponsor_review)"},
      "39" : {"sid":"39","wid":"7","weight":"-17","sysid":"0","state":"Awaiting Signatures","status":"1","name":"(signing_ceremony)"},
      "40" : {"sid":"40","wid":"7","weight":"-16","sysid":"0","state":"Premier Operations (Review)","status":"1","name":"(premier_operations_review)"},
      "41" : {"sid":"41","wid":"7","weight":"-15","sysid":"0","state":"Accepted","status":"1","name":"(accepted)"},
      "42" : {"sid":"42","wid":"7","weight":"-14","sysid":"0","state":"Rejected","status":"1","name":"(rejected)"}
    },
    "transitions" : {
      "81" : {"tid":"81","sid":"35","target_sid":"36","roles":{"-1":-1,"6":6},"wid":"7","name":"1_2","label":"Save","rdf_mapping":[]},
      "82" : {"tid":"82","sid":"36","target_sid":"36","roles":{"-1":-1,"5":5,"6":6,"4":4,"3":3},"wid":"7","name":"2_2","label":"Save","rdf_mapping":[]},
      "83" : {"tid":"83","sid":"36","target_sid":"37","roles":{"6":6},"wid":"7","name":"2_3","label":"Assign to Member","rdf_mapping":[]},
      "84" : {"tid":"84","sid":"37","target_sid":"36","roles":{"6":6},"wid":"7","name":"3_2","label":"Return to Sponsor for Edit","rdf_mapping":[]},
      "85" : {"tid":"85","sid":"37","target_sid":"37","roles":{"-1":-1,"5":5,"6":6,"4":4,"3":3},"wid":"7","name":"3_3","label":"Save","rdf_mapping":[]},
      "86" : {"tid":"86","sid":"37","target_sid":"38","roles":{"5":5},"wid":"7","name":"3_4","label":"Submit for Review","rdf_mapping":[]},
      "87" : {"tid":"87","sid":"38","target_sid":"36","roles":{"6":6},"wid":"7","name":"4_2","label":"Return to Sponsor for Edit","rdf_mapping":[]},
      "88" : {"tid":"88","sid":"38","target_sid":"37","roles":{"5":5},"wid":"7","name":"4_3","label":"Return to Member for Edit","rdf_mapping":[]},
      "89" : {"tid":"89","sid":"38","target_sid":"38","roles":{"-1":-1,"5":5,"6":6,"4":4,"3":3},"wid":"7","name":"4_4","label":"Save","rdf_mapping":[]},
      "90" : {"tid":"90","sid":"38","target_sid":"39","roles":{"6":6},"wid":"7","name":"4_5","label":"Initiate Signing Ceremony","rdf_mapping":[]},
      "91" : {"tid":"91","sid":"39","target_sid":"36","roles":{"6":6},"wid":"7","name":"5_2","label":"Retrieve Application for Edit","rdf_mapping":[]},
      "92" : {"tid":"92","sid":"39","target_sid":"37","roles":{"5":5},"wid":"7","name":"5_3","label":"Retrieve Application for Edit","rdf_mapping":[]},
      "93" : {"tid":"93","sid":"39","target_sid":"39","roles":{"-1":-1,"5":5,"6":6,"4":4,"3":3},"wid":"7","name":"5_5","label":"Save","rdf_mapping":[]},
      "94" : {"tid":"94","sid":"39","target_sid":"40","roles":{"4":4},"wid":"7","name":"5_6","label":"Initiate Premier Review","rdf_mapping":[]},
      "95" : {"tid":"95","sid":"40","target_sid":"36","roles":{"4":4},"wid":"7","name":"6_2","label":"","rdf_mapping":[]},
      "96" : {"tid":"96","sid":"40","target_sid":"40","roles":{"-1":-1,"5":5,"6":6,"4":4,"3":3},"wid":"7","name":"6_6","label":"Save","rdf_mapping":[]},
      "97" : {"tid":"97","sid":"40","target_sid":"41","roles":{"4":4},"wid":"7","name":"6_7","label":"Accept Application","rdf_mapping":[]},
      "98" : {"tid":"98","sid":"40","target_sid":"42","roles":{"4":4},"wid":"7","name":"6_8","label":"Reject Application","rdf_mapping":[]},
      "99" : {"tid":"99","sid":"41","target_sid":"41","roles":{"-1":-1,"5":5,"6":6,"4":4,"3":3},"wid":"7","name":"7_7","label":"Save","rdf_mapping":[]},
      "100" : {"tid":"100","sid":"42","target_sid":"42","roles":{"-1":-1,"5":5,"6":6,"4":4,"3":3},"wid":"7","name":"8_8","label":"Save","rdf_mapping":[]}
    },
    "label" : "Continuum of Care Workflow",
    "typeMap" : [],
    "rdf_mapping" : [],
    "wid_original" : "7",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "5" : "prospective_member",
      "6" : "sponsor",
      "4" : "premier operations",
      "3" : "administrator"
    }
  }');

  return $workflows;
}
