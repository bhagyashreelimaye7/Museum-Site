<?php
/**
 * @file
 * blog_listing_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_listing_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
