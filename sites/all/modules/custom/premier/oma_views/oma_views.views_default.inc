<?php

/**
 * Implements hook_views_default_views().
 */
function oma_views_views_default_views() {
 
    $path = './' . drupal_get_path('module', 'oma_views') . '/views/*.inc';
    $views = array();
    foreach (glob($path) as $views_filename) {
      require_once($views_filename);
    }
    return $views;

}