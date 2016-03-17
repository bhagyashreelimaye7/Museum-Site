<?php
/**
 * @file
 * about_us_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function about_us_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about__us';
  $page->task = 'page';
  $page->admin_title = 'About us';
  $page->admin_description = 'About us';
  $page->path = 'About_us';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about__us__panel';
  $handler->task = 'page';
  $handler->subtask = 'about__us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7ef4c993-22b5-4d1d-895f-52d9a0544561';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b0cef4e-cc46-402a-92b3-719cc7be317f';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'about_us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b0cef4e-cc46-402a-92b3-719cc7be317f';
    $display->content['new-7b0cef4e-cc46-402a-92b3-719cc7be317f'] = $pane;
    $display->panels['center'][0] = 'new-7b0cef4e-cc46-402a-92b3-719cc7be317f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7b0cef4e-cc46-402a-92b3-719cc7be317f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
