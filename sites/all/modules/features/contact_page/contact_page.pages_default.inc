<?php
/**
 * @file
 * contact_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function contact_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'Contact ';
  $page->task = 'page';
  $page->admin_title = 'Contact us';
  $page->admin_description = 'Contact us';
  $page->path = 'contactus';
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
  $handler->name = 'page_Contact __panel_context_454f0e43-0beb-42da-9fbe-9da86e8902ec';
  $handler->task = 'page';
  $handler->subtask = 'Contact ';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'info',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Form',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'map',
        ),
        'parent' => 'main',
        'class' => 'Map',
        'hide_empty' => 0,
      ),
      'info' => array(
        'type' => 'region',
        'title' => 'Info',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'map' => array(
        'type' => 'region',
        'title' => 'map',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'info' => NULL,
      'map' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7230f554-d70a-4ebf-83b6-9311bf225397';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17aabc64-e5bf-47df-90d7-aa2bb531e3cb';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-26';
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
    $pane->uuid = '17aabc64-e5bf-47df-90d7-aa2bb531e3cb';
    $display->content['new-17aabc64-e5bf-47df-90d7-aa2bb531e3cb'] = $pane;
    $display->panels['center'][0] = 'new-17aabc64-e5bf-47df-90d7-aa2bb531e3cb';
    $pane = new stdClass();
    $pane->pid = 'new-a4091454-91b3-4f02-8033-492a17fb6b5c';
    $pane->panel = 'info';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contact Info',
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
    $pane->uuid = 'a4091454-91b3-4f02-8033-492a17fb6b5c';
    $display->content['new-a4091454-91b3-4f02-8033-492a17fb6b5c'] = $pane;
    $display->panels['info'][0] = 'new-a4091454-91b3-4f02-8033-492a17fb6b5c';
    $pane = new stdClass();
    $pane->pid = 'new-5a274634-6e70-4606-9c97-d891809acfb1';
    $pane->panel = 'map';
    $pane->type = 'block';
    $pane->subtype = 'locationmap-image';
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
    $pane->uuid = '5a274634-6e70-4606-9c97-d891809acfb1';
    $display->content['new-5a274634-6e70-4606-9c97-d891809acfb1'] = $pane;
    $display->panels['map'][0] = 'new-5a274634-6e70-4606-9c97-d891809acfb1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-17aabc64-e5bf-47df-90d7-aa2bb531e3cb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['Contact '] = $page;

  return $pages;

}
