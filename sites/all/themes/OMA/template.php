<?php

/**
 * @file
 * template.php
 */
function OMA_button($variables) {
  $element = $variables ['element'];
  $element ['#attributes']['type'] = $element['#type'];
  element_set_attributes($element, array('id', 'name', 'value'));

  $element ['#attributes']['class'][] = 'form-' . $element ['#button_type'];
  if (!empty($element ['#attributes']['disabled'])) {
    $element ['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<input' . drupal_attributes($element ['#attributes']) . ' />';
}