(function ($) {
  Drupal.behaviors.yourfunction = {
    attach: function(context) {
      $(document).ready(function() {

        // http://stackoverflow.com/questions/1279957/how-to-move-an-element-into-another-element
        // NOTE: #block-block-1 is hard-coded.
        // commented out ml 2012-10-17 - revert to usual switcher.
        //
        // UNCOMMENT THESE NEXT TWO LINES TO PUT THE SWITCHER UNDER THE MAP
        //
          $('.layersDiv .dataLayersDiv').appendTo('#openlayers-switcher-block-lhs');
          $('.layersDiv .dataLbl').hide();
        //
        //

        $('#map_center_button').click(function(e) {

          // Get value of the textfield
          var map_center_text = $('#map_center_text').val();
          if (map_center_text.length > 0) {
            // alert(map_center_text);
            // url-encode
            var map_center_text_encoded = encodeURIComponent(map_center_text);
            // alert(map_center_text_encoded);

            var geocoder_url = '/geocoder/service/google/?data=';
            var ajax_url = geocoder_url + map_center_text_encoded;
            var london_url = ajax_url + ',%20London,%20UK';

            // Get the lat/lng of the textfield input
            $.ajax({
              url: london_url,
              success: function(data) {
                console.log(data);
                console.log(data.coordinates[0]);
                console.log(data.coordinates[1]);
                console.log(data.coordinates[0] + ',' + data.coordinates[1]);
                lat = data.coordinates[1];
                lon = data.coordinates[0];
                // Center the map.
                var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
                _show_all_layers(ol);
                var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
                ol.openlayers.setCenter(lonLat, 15);
              }
            });
          } // if (map_center_text.length > 0)
        });

        $('#map_center_brixton').click(function(e) {
          // Brixton 51.463, -0.106
          var lat = 51.463;
          var lon = -0.106;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_clapham').click(function(e) {
          // Clapham 51.462927, -0.134886
          var lat = 51.462927;
          var lon = -0.134886;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_crystal-palace').click(function(e) {
          // Crystal Palace 51.4203, -0.0705
          var lat = 51.4203;
          var lon = -0.0705;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_gipsy-hill').click(function(e) {
          // Gipsy Hill 51.4229, -0.0848
          var lat = 51.4229;
          var lon = -0.0848;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_herne-hill').click(function(e) {
          // Herne Hill 51.4544, -0.0936
          var lat = 51.4544;
          var lon = -0.0936;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_kennington').click(function(e) {
          // Kennington 51.4813, -0.1197
          var lat = 51.4813;
          var lon = -0.1197;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_oval').click(function(e) {
          // Oval 51.481847, -0.12134
          var lat = 51.481847;
          var lon = -0.12134;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_stockwell').click(function(e) {
          // Stockwell 51.4633, -0.1204
          var lat = 51.4633;
          var lon = -0.1204;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_streatham').click(function(e) {
          // Streatham 51.427927, -0.123552
          var lat = 51.427927;
          var lon = -0.123552;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_tulse-hill').click(function(e) {
          // Tulse Hill 51.4452, -0.1091
          var lat = 51.4452;
          var lon = -0.1091;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_vauxhall').click(function(e) {
          // Vauxhall 51.490833, -0.12097
          var lat = 51.490833;
          var lon = -0.12097;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_west-dulwich').click(function(e) {
          // West Dulwich 51.433566, -0.083037
          var lat = 51.433566;
          var lon = -0.083037;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });

        $('#map_center_west-norwood').click(function(e) {
          // West Norwood 51.427463, -0.094801
          var lat = 51.427463;
          var lon = -0.094801;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
          _show_all_layers(ol);
        });
      });
    }
  }
}(jQuery));

function _show_all_layers(ol) {
  var layers = ol.openlayers.layers;
  for (var i = 0; i < layers.length; ++i) {
    if (!layers[i].isBaseLayer) {
      layers[i].setVisibility(true);
    }
  }
}

