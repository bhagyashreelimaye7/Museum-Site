<?php
/**
 * @file
 * contact_us.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function contact_us_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'contact_us';
  $mini->category = '';
  $mini->admin_title = 'Contact us';
  $mini->admin_description = 'Contact us';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6ebe0d52-42ba-42fc-be6b-ec4d545a3541';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e8d261a9-43cc-45b2-aae4-3e4fccada7ee';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'locationmap-image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Our Location',
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
    $pane->uuid = 'e8d261a9-43cc-45b2-aae4-3e4fccada7ee';
    $display->content['new-e8d261a9-43cc-45b2-aae4-3e4fccada7ee'] = $pane;
    $display->panels['middle'][0] = 'new-e8d261a9-43cc-45b2-aae4-3e4fccada7ee';
    $pane = new stdClass();
    $pane->pid = 'new-87b12d75-60b2-48c5-833f-d03dcc98db0c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'contact info',
      'title' => 'Contact Info',
      'body' => '<h1>Sed ut perspiciatis unde omnis iste natus error sit.</h1>

<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque et quasi architecto beatae vitae dicta sunt explicabo. Mornunc odio gravida atcursus neus a lorem. Maecenas tristique orci ac sem. Duis ultric pharetra magna. </p>

The Company Name Inc.
9870 St Vincent Place,
Glasgow, DC 45 Fr 45.
Telephone: +1 800 603 6035
FAX: +1 800 889 9898
E-mail: mail@demolink.org',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '87b12d75-60b2-48c5-833f-d03dcc98db0c';
    $display->content['new-87b12d75-60b2-48c5-833f-d03dcc98db0c'] = $pane;
    $display->panels['middle'][1] = 'new-87b12d75-60b2-48c5-833f-d03dcc98db0c';
    $pane = new stdClass();
    $pane->pid = 'new-ed60a328-8147-482e-9696-9ac749111b2a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-26';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contact Form',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ed60a328-8147-482e-9696-9ac749111b2a';
    $display->content['new-ed60a328-8147-482e-9696-9ac749111b2a'] = $pane;
    $display->panels['middle'][2] = 'new-ed60a328-8147-482e-9696-9ac749111b2a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-87b12d75-60b2-48c5-833f-d03dcc98db0c';
  $mini->display = $display;
  $export['contact_us'] = $mini;

  return $export;
}
