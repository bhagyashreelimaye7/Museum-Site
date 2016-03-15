<?php
/**
 * @file
 * faq_s.features.inc
 */

/**
 * Implements hook_views_api().
 */
function faq_s_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function faq_s_node_info() {
  $items = array(
    'faq_s' => array(
      'name' => t('FAQ\'s'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
