<?php
/**
 * @file
 * front_page_mini_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function front_page_mini_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'content_preface';
  $mini->category = '';
  $mini->admin_title = 'Content Preface';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '705211ec-eefc-4e75-87e3-b77567f21e92';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d9e02a04-8567-4005-bb63-fa05c2c41e28';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block';
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
    $pane->uuid = 'd9e02a04-8567-4005-bb63-fa05c2c41e28';
    $display->content['new-d9e02a04-8567-4005-bb63-fa05c2c41e28'] = $pane;
    $display->panels['center'][0] = 'new-d9e02a04-8567-4005-bb63-fa05c2c41e28';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d9e02a04-8567-4005-bb63-fa05c2c41e28';
  $mini->display = $display;
  $export['content_preface'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'front_content_block';
  $mini->category = '';
  $mini->admin_title = 'Front Content block';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'Column 2',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_2',
        ),
        'parent' => '1',
        'class' => 'row 2',
        'hide_empty' => 0,
      ),
      'content_2' => array(
        'type' => 'region',
        'title' => 'Content 2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0b0ce42f-2b63-41c4-b2fc-dbdfc009c34a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14e90ba6-ef6a-4eca-ab78-041cdf803db8';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block_2';
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
    $pane->uuid = '14e90ba6-ef6a-4eca-ab78-041cdf803db8';
    $display->content['new-14e90ba6-ef6a-4eca-ab78-041cdf803db8'] = $pane;
    $display->panels['center'][0] = 'new-14e90ba6-ef6a-4eca-ab78-041cdf803db8';
    $pane = new stdClass();
    $pane->pid = 'new-63ad78ae-2a7a-4baa-9868-9bbe674376ce';
    $pane->panel = 'content_2';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_blocks-block_3';
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
    $pane->uuid = '63ad78ae-2a7a-4baa-9868-9bbe674376ce';
    $display->content['new-63ad78ae-2a7a-4baa-9868-9bbe674376ce'] = $pane;
    $display->panels['content_2'][0] = 'new-63ad78ae-2a7a-4baa-9868-9bbe674376ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-14e90ba6-ef6a-4eca-ab78-041cdf803db8';
  $mini->display = $display;
  $export['front_content_block'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'front_content_block_1';
  $mini->category = '';
  $mini->admin_title = 'Front Content block 1';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '7d626f52-e878-4c27-9a37-af2b99992317';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-499a0df0-71ff-4106-b0bb-0aa5e2c61c77';
    $pane->panel = 'center';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '499a0df0-71ff-4106-b0bb-0aa5e2c61c77';
    $display->content['new-499a0df0-71ff-4106-b0bb-0aa5e2c61c77'] = $pane;
    $display->panels['center'][0] = 'new-499a0df0-71ff-4106-b0bb-0aa5e2c61c77';
    $pane = new stdClass();
    $pane->pid = 'new-02f504b0-4a38-4d2e-b836-361c310f7d91';
    $pane->panel = 'center';
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
    $pane->uuid = '02f504b0-4a38-4d2e-b836-361c310f7d91';
    $display->content['new-02f504b0-4a38-4d2e-b836-361c310f7d91'] = $pane;
    $display->panels['center'][1] = 'new-02f504b0-4a38-4d2e-b836-361c310f7d91';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-499a0df0-71ff-4106-b0bb-0aa5e2c61c77';
  $mini->display = $display;
  $export['front_content_block_1'] = $mini;

  return $export;
}
