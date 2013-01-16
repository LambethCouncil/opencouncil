/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * Layer Switcher Behavior
 */
Drupal.openlayers.addBehavior('openlayers_behavior_layerswitcher', function (data, options) {
  options.ascending = !! options.ascending;

  // lambeth.coop - move layerswitcher outside map to openlayers-switcher-block
  // div
  // http://drupal.org/node/1475316
  options['div'] = OpenLayers.Util.getElement('openlayers-switcher-block');
  Drupal.openlayers.addControl(data.openlayers, 'LayerSwitcher', options);

  // Maximize if needed.
  if (!! options.maximizeDefault == true) {
    data.openlayers.getControlsByClass('OpenLayers.Control.LayerSwitcher')[0].maximizeControl();
  }
});
