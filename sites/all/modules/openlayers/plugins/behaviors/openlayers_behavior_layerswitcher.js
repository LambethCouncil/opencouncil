/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * Layer Switcher Behavior
 */
Drupal.openlayers.addBehavior('openlayers_behavior_layerswitcher', function (data, options) {
  options.ascending = !! options.ascending;
// lambeth.coop
console.log(options);
options['div'] = OpenLayers.Util.getElement('openlayers-switcher-block');
Drupal.openlayers.addControl(data.openlayers, 'LayerSwitcher', options);
console.log(options);
//
  // Maximize if needed.
  if (!! options.maximizeDefault == true) {
    data.openlayers.getControlsByClass('OpenLayers.Control.LayerSwitcher')[0].maximizeControl();
  }
});
