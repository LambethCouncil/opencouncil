<?php
/**
 * @file
 * feature_map_points_of_interest.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function feature_map_points_of_interest_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'points_of_interest';
  $openlayers_maps->title = 'Points of Interest';
  $openlayers_maps->description = 'Lambeth Points of Interest';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/themes/opencouncil/images/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-0.11637419648261, 51.458698102207',
        'zoom' => '15',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_geolocate' => array(
        'bind' => '1',
        'zoom_level' => '12',
        'watch' => '1',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_permalink' => array(
        'anchor' => 0,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'points_of_interest_openlayers_13' => 'points_of_interest_openlayers_13',
          'points_of_interest_openlayers_3' => 'points_of_interest_openlayers_3',
          'points_of_interest_openlayers_12' => 'points_of_interest_openlayers_12',
          'points_of_interest_openlayers_10' => 'points_of_interest_openlayers_10',
          'points_of_interest_openlayers_11' => 'points_of_interest_openlayers_11',
          'points_of_interest_openlayers_1' => 'points_of_interest_openlayers_1',
          'points_of_interest_openlayers_7' => 'points_of_interest_openlayers_7',
          'points_of_interest_openlayers_9' => 'points_of_interest_openlayers_9',
          'points_of_interest_openlayers_8' => 'points_of_interest_openlayers_8',
          'points_of_interest_openlayers_6' => 'points_of_interest_openlayers_6',
          'points_of_interest_openlayers_2' => 'points_of_interest_openlayers_2',
          'points_of_interest_openlayers_5' => 'points_of_interest_openlayers_5',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
      'mapquest_osm' => 'mapquest_osm',
      'osm_mapnik' => 'osm_mapnik',
      'points_of_interest_openlayers_12' => 'points_of_interest_openlayers_12',
      'points_of_interest_openlayers_10' => 'points_of_interest_openlayers_10',
      'points_of_interest_openlayers_11' => 'points_of_interest_openlayers_11',
      'points_of_interest_openlayers_13' => 'points_of_interest_openlayers_13',
      'points_of_interest_openlayers_3' => 'points_of_interest_openlayers_3',
      'points_of_interest_openlayers_1' => 'points_of_interest_openlayers_1',
      'points_of_interest_openlayers_9' => 'points_of_interest_openlayers_9',
      'points_of_interest_openlayers_7' => 'points_of_interest_openlayers_7',
      'points_of_interest_openlayers_8' => 'points_of_interest_openlayers_8',
      'points_of_interest_openlayers_5' => 'points_of_interest_openlayers_5',
      'points_of_interest_openlayers_6' => 'points_of_interest_openlayers_6',
      'points_of_interest_openlayers_2' => 'points_of_interest_openlayers_2',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'points_of_interest_openlayers_4' => '0',
      'map_view_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'points_of_interest_openlayers_12' => '1',
      'points_of_interest_openlayers_10' => '2',
      'points_of_interest_openlayers_11' => '3',
      'points_of_interest_openlayers_13' => '4',
      'points_of_interest_openlayers_3' => '5',
      'points_of_interest_openlayers_1' => '6',
      'points_of_interest_openlayers_9' => '7',
      'points_of_interest_openlayers_7' => '8',
      'points_of_interest_openlayers_8' => '9',
      'points_of_interest_openlayers_5' => '10',
      'points_of_interest_openlayers_6' => '10',
      'points_of_interest_openlayers_2' => '10',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_view_openlayers_1' => '0',
      'points_of_interest_openlayers_4' => 'LambethMaintainedCycleStands',
      'points_of_interest_openlayers_13' => 'lambeth_special_schools',
      'points_of_interest_openlayers_3' => 'LambethChildrensCentres',
      'points_of_interest_openlayers_12' => 'lambeth_nursery_schools',
      'points_of_interest_openlayers_10' => 'lambeth_primary_schools',
      'points_of_interest_openlayers_11' => 'lambeth_secondary_schools',
      'points_of_interest_openlayers_1' => 'LambethAdventurePlaygrounds',
      'points_of_interest_openlayers_7' => 'LambethFoodGrowingProjects',
      'points_of_interest_openlayers_9' => 'LambethRecycling',
      'points_of_interest_openlayers_8' => 'LambethLibraries',
      'points_of_interest_openlayers_6' => 'LambethCommunityToilets',
      'points_of_interest_openlayers_2' => 'LambethCarParks',
      'points_of_interest_openlayers_5' => 'LambethPoliceStations',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_view_openlayers_1' => '0',
      'points_of_interest_openlayers_4' => 'LambethMaintainedCycleStands',
      'points_of_interest_openlayers_13' => 'lambeth_special_schools',
      'points_of_interest_openlayers_3' => 'LambethChildrensCentres',
      'points_of_interest_openlayers_12' => 'lambeth_nursery_schools',
      'points_of_interest_openlayers_10' => 'lambeth_primary_schools',
      'points_of_interest_openlayers_11' => 'lambeth_secondary_schools',
      'points_of_interest_openlayers_1' => 'LambethAdventurePlaygrounds',
      'points_of_interest_openlayers_7' => 'LambethFoodGrowingProjects',
      'points_of_interest_openlayers_9' => 'LambethRecycling',
      'points_of_interest_openlayers_8' => 'LambethLibraries',
      'points_of_interest_openlayers_6' => 'LambethCommunityToilets',
      'points_of_interest_openlayers_2' => 'LambethCarParks',
      'points_of_interest_openlayers_5' => 'LambethPoliceStations',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'map_view_openlayers_1' => 0,
      'points_of_interest_openlayers_1' => 0,
      'points_of_interest_openlayers_2' => 0,
      'points_of_interest_openlayers_3' => 0,
      'points_of_interest_openlayers_4' => 0,
      'points_of_interest_openlayers_5' => 0,
      'points_of_interest_openlayers_6' => 0,
      'points_of_interest_openlayers_7' => 0,
      'points_of_interest_openlayers_8' => 0,
      'points_of_interest_openlayers_9' => 0,
      'points_of_interest_openlayers_10' => 0,
      'points_of_interest_openlayers_11' => 0,
      'points_of_interest_openlayers_12' => 0,
      'points_of_interest_openlayers_13' => 0,
    ),
    'layer_switcher' => array(
      'points_of_interest_openlayers_13' => 'points_of_interest_openlayers_13',
      'points_of_interest_openlayers_3' => 'points_of_interest_openlayers_3',
      'points_of_interest_openlayers_12' => 'points_of_interest_openlayers_12',
      'points_of_interest_openlayers_10' => 'points_of_interest_openlayers_10',
      'points_of_interest_openlayers_11' => 'points_of_interest_openlayers_11',
      'points_of_interest_openlayers_1' => 'points_of_interest_openlayers_1',
      'points_of_interest_openlayers_7' => 'points_of_interest_openlayers_7',
      'points_of_interest_openlayers_9' => 'points_of_interest_openlayers_9',
      'points_of_interest_openlayers_8' => 'points_of_interest_openlayers_8',
      'points_of_interest_openlayers_6' => 'points_of_interest_openlayers_6',
      'points_of_interest_openlayers_2' => 'points_of_interest_openlayers_2',
      'points_of_interest_openlayers_5' => 'points_of_interest_openlayers_5',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'map_view_openlayers_1' => 0,
      'points_of_interest_openlayers_4' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['points_of_interest'] = $openlayers_maps;

  return $export;
}
