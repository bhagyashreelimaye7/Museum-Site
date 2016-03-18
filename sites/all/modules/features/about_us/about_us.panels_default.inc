<?php
/**
 * @file
 * about_us.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function about_us_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'about_us';
  $mini->category = '';
  $mini->admin_title = 'About us';
  $mini->admin_description = 'About us';
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
  $display->title = 'A Few words about us';
  $display->uuid = '3c3c1090-80a4-41ff-8e8e-7ca42238bdf6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2dff0cd6-e46e-45dd-8426-edac76c9ee9c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About us',
      'title' => '',
      'body' => '<h1>Vitaesaert asety kertya asplicase bosrae viseaseisagast nverit.</h1>

<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent vestibulum molestie lacus. Aenean nonummy hendrerit mauris. Phasellus porta. Fusce suscipit varius mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla dui. Fusce feugiat malesuada odio. Morbi nunc odio, gravida at, cursus nec, luctus a, lorem. Maecenas tristique orci ac semus ultricies pharetra magnaonec accumsan.Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent vestibulum molestie lacus. Aenean nonummy hendrerit mauris. Phasellus porta. Fusce suscipit varius mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
 <p>Nulla dui. Fusce feugiat malesuada odio. Morbi nunc odio, gravida at, cursus nec, luctus a, lorem. Maecenas tristique orci ac semus ultricies pharetra magnaonec accumsan.Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent vestibulum molestie lacus. Aenean nonummy hendrerit mauris. Phasellus porta. Fusce suscipit varius mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla dui. Fusce feugiat malesuada odio. Morbi nunc odio, gravida at, cursus nec, luctus a, lorem. Maecenas tristique orci ac semus ultricies pharetra magnaonec accumsan.Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent vestibulum molestie lacus.</p>
 <p>Aenean nonummy hendrerit mauris. Phasellus porta. Fusce suscipit varius mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla dui. Fusce feugiat malesuada odio. Morbi nunc odio, gravida at, cursus nec, luctus a, lorem. Maecenas tristique orci ac semus ultricies pharetra magnaonec accumsan.Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent vestibulum molestie lacus. Aenean nonummy hendrerit mauris. Phasellus porta. Fusce suscipit varius mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla dui. Fusce feugiat malesuada odio. Morbi nunc odio, gravida at, cursus nec, luctus a, lorem. Maecenas tristique orci ac semus ultricies pharetra magnaonec accumsan.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2dff0cd6-e46e-45dd-8426-edac76c9ee9c';
    $display->content['new-2dff0cd6-e46e-45dd-8426-edac76c9ee9c'] = $pane;
    $display->panels['middle'][0] = 'new-2dff0cd6-e46e-45dd-8426-edac76c9ee9c';
    $pane = new stdClass();
    $pane->pid = 'new-7ba18fc6-1ab7-428e-be29-1b3b011ef59f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ba18fc6-1ab7-428e-be29-1b3b011ef59f';
    $display->content['new-7ba18fc6-1ab7-428e-be29-1b3b011ef59f'] = $pane;
    $display->panels['middle'][1] = 'new-7ba18fc6-1ab7-428e-be29-1b3b011ef59f';
    $pane = new stdClass();
    $pane->pid = 'new-42946034-88cf-4b00-8d43-2bfad86602db';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-testimony-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Testimonials',
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
    $pane->uuid = '42946034-88cf-4b00-8d43-2bfad86602db';
    $display->content['new-42946034-88cf-4b00-8d43-2bfad86602db'] = $pane;
    $display->panels['middle'][2] = 'new-42946034-88cf-4b00-8d43-2bfad86602db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['about_us'] = $mini;

  return $export;
}
