<?php
/**
 * @file
 * pubapi_example.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pubapi_example_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_episode';
  $strongarm->value = 0;
  $export['comment_anonymous_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_season';
  $strongarm->value = 0;
  $export['comment_anonymous_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_episode';
  $strongarm->value = 1;
  $export['comment_default_mode_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_season';
  $strongarm->value = 1;
  $export['comment_default_mode_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_episode';
  $strongarm->value = '50';
  $export['comment_default_per_page_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_season';
  $strongarm->value = '50';
  $export['comment_default_per_page_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_episode';
  $strongarm->value = '2';
  $export['comment_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_episode';
  $strongarm->value = 1;
  $export['comment_form_location_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_season';
  $strongarm->value = 1;
  $export['comment_form_location_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_episode';
  $strongarm->value = '1';
  $export['comment_preview_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_season';
  $strongarm->value = '1';
  $export['comment_preview_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_season';
  $strongarm->value = '2';
  $export['comment_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_episode';
  $strongarm->value = 1;
  $export['comment_subject_field_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_season';
  $strongarm->value = 1;
  $export['comment_subject_field_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cors_domains';
  $strongarm->value = array(
    '*' => '<mirror>|GET|Content-Type,Authorization|true',
  );
  $export['cors_domains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__article';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__episode';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__gallery';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__season';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_episode';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_season';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_episode';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_season';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_episode';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_gallery';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_season';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_episode';
  $strongarm->value = '1';
  $export['node_preview_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_gallery';
  $strongarm->value = '1';
  $export['node_preview_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_season';
  $strongarm->value = '1';
  $export['node_preview_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_episode';
  $strongarm->value = 1;
  $export['node_submitted_episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_gallery';
  $strongarm->value = 0;
  $export['node_submitted_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_season';
  $strongarm->value = 1;
  $export['node_submitted_season'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restws_schema';
  $strongarm->value = array(
    'show' => array(
      'label' => 'Show',
      'properties' => array(
        'name' => array(
          'type' => 'Text',
          'label' => 'Show name',
        ),
        'id' => array(
          'type' => 'Integer',
          'label' => 'Show ID',
        ),
        'description' => array(
          'type' => 'Text',
          'label' => 'Show description',
        ),
        'genre' => array(
          'type' => 'Text',
          'label' => 'Show genre',
        ),
        'seasons' => array(
          'type' => 'Reference',
          'label' => 'The show\'s seasons',
        ),
        'status' => array(
          'type' => 'Boolean',
          'label' => 'Show published status',
        ),
      ),
    ),
    'season' => array(
      'label' => 'Season',
      'properties' => array(
        'name' => array(
          'type' => 'Text',
          'label' => 'Season name',
        ),
        'id' => array(
          'type' => 'Integer',
          'label' => 'Season ID',
        ),
        'description' => array(
          'type' => 'Text',
          'label' => 'Season description',
        ),
        'show' => array(
          'type' => 'Text',
          'label' => 'Show',
        ),
        'episodes' => array(
          'type' => 'Reference',
          'label' => 'The season\'s episodes',
        ),
        'status' => array(
          'type' => 'Boolean',
          'label' => 'Season status',
        ),
      ),
    ),
    'episode' => array(
      'label' => 'Episode',
      'properties' => array(
        'name' => array(
          'type' => 'Text',
          'label' => 'Episode name',
        ),
        'id' => array(
          'type' => 'Integer',
          'label' => 'Episode ID',
        ),
        'description' => array(
          'type' => 'Text',
          'label' => 'Episode description',
        ),
        'show' => array(
          'type' => 'Reference',
          'label' => 'The episode\'s show',
        ),
        'season' => array(
          'type' => 'Reference',
          'label' => 'The episode\'s season',
        ),
        'status' => array(
          'type' => 'Boolean',
          'label' => 'Episode status',
        ),
      ),
    ),
    'blog' => array(
      'label' => 'Blog',
      'properties' => array(
        'name' => array(
          'type' => 'Text',
          'label' => 'Blog name',
        ),
        'id' => array(
          'type' => 'Integer',
          'label' => 'Blog ID',
        ),
        'description' => array(
          'type' => 'Text',
          'label' => 'Blog description',
        ),
        'show' => array(
          'type' => 'Reference',
          'label' => 'The blog\'s show',
        ),
        'season' => array(
          'type' => 'Reference',
          'label' => 'The blog\'s season',
        ),
        'episode' => array(
          'type' => 'Reference',
          'label' => 'The blog\'s episode',
        ),
        'status' => array(
          'type' => 'Boolean',
          'label' => 'Blog status',
        ),
      ),
    ),
    'gallery' => array(
      'label' => 'Gallery',
      'properties' => array(
        'name' => array(
          'type' => 'Text',
          'label' => 'Gallery name',
        ),
        'id' => array(
          'type' => 'Integer',
          'label' => 'Gallery ID',
        ),
        'description' => array(
          'type' => 'Text',
          'label' => 'Gallery description',
        ),
        'photos' => array(
          'type' => 'Image',
          'label' => 'Gallery photos',
        ),
        'show' => array(
          'type' => 'Reference',
          'label' => 'The gallery\'s show',
        ),
        'season' => array(
          'type' => 'Reference',
          'label' => 'The gallery\'s season',
        ),
        'episode' => array(
          'type' => 'Reference',
          'label' => 'The gallery\'s episode',
        ),
        'status' => array(
          'type' => 'Boolean',
          'label' => 'Gallery status',
        ),
      ),
    ),
  );
  $export['restws_schema'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'restws_schema_map';
  $strongarm->value = array(
    'show:entity' => 'node',
    'show:bundle' => 'page',
    'show:name' => 'title',
    'show:id' => 'nid',
    'show:description' => 'body',
    'show:genre' => 'field_genre',
    'show:seasons' => 'field_seasons',
    'show:status' => 'status',
    'season:entity' => 'node',
    'season:bundle' => 'season',
    'season:name' => 'title',
    'season:id' => 'nid',
    'season:description' => 'body',
    'season:show' => 'field_show',
    'season:episodes' => 'field_episodes',
    'season:status' => 'status',
    'episode:entity' => 'node',
    'episode:bundle' => 'episode',
    'episode:name' => 'title',
    'episode:id' => 'nid',
    'episode:description' => 'body',
    'episode:show' => 'field_show',
    'episode:season' => 'field_season',
    'episode:status' => 'status',
    'blog:entity' => 'node',
    'blog:bundle' => 'article',
    'blog:name' => 'title',
    'blog:id' => 'nid',
    'blog:description' => 'body',
    'blog:show' => 'field_show',
    'blog:season' => 'field_season',
    'blog:episode' => 'field_episode',
    'blog:status' => 'status',
    'gallery:entity' => 'node',
    'gallery:bundle' => 'gallery',
    'gallery:name' => 'title',
    'gallery:id' => 'nid',
    'gallery:description' => 'body',
    'gallery:photos' => 'field_photos',
    'gallery:show' => 'field_show',
    'gallery:season' => 'field_season',
    'gallery:episode' => 'field_episode',
    'gallery:status' => 'status',
  );
  $export['restws_schema_map'] = $strongarm;

  return $export;
}
