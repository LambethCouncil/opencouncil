(function ($) {
  Drupal.behaviors.openlayers_switcher = {
    attach: function(context, settings) {
      $(document).ready(function() {
        $('#openlayers-switcher-block--food-growing-projects').click(function(e) {
          e.stopPropagation();
          var layername = 'food-growing-projects';
          var ol = $('.openlayers-map').data('openlayers');
          // var layers = ol.openlayers.getLayersByName(layername);
          ol.openlayers.getLayersByName(layername).setVisibility();
          for (var i = 0; i < layers.length; ++i) {
            alert(layers[i].name);
          }
          var currently_visible = layers[i].visibility;
          // layers[i].setVisibility(!currently_visible);
          //_openlayers_switcher_show_layer(ol, layername);
        });
      });
    }
  }
}(jQuery));

function _openlayers_switcher_show_layer(ol, layername) {
  var layers = ol.openlayers.layers;
  var layer_index = -1;
  var currently_visible = false;
  var visibility_known = false;
  for (var i = 0; i < layers.length; ++i) {
    if (!layers[i].isBaseLayer) {
      if (layers[i].name == layername) {
        if (layer_index < 0) {
        // commented out - for some reason this gets called twice.
        // so first time the layer gets shown, then gets hidden again!
        //
        //
        //TRY THIS
        //http://stackoverflow.com/questions/8238599/jquery-click-fires-twice-when-clicking-on-label
        //
        //
        //
        //console.log(layers[i]);
        // alert(i);
        // alert(layername);
        // get current visibility
        currently_visible = layers[i].visibility;
        layer_index = i;
        alert(currently_visible);
        }
      }
    }
  }
  // toggle visibility
  // alert(currently_visible);
  // alert(layer_index);
  if (currently_visible) {
    layers[layer_index].setVisibility(false);
  }
  else {
    layers[layer_index].setVisibility(true);
  }
}

function _openlayers_switcher_show_all_layers(ol) {
  var layers = ol.openlayers.layers;
  for (var i = 0; i < layers.length; ++i) {
    if (!layers[i].isBaseLayer) {
      alert('id = ' + layers[i].id);
      alert('name = ' + layers[i].name);
      layers[i].setVisibility(true);
    }
  }
}

function _hide_all_layers() {
  var layers = ol.openlayers.layers;
  for (var i = 0; i < layers.length; ++i) {
    if (!layers[i].isBaseLayer) {
      layers[i].setVisibility(false);
    }
  }
}
