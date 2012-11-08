(function ($) {
Drupal.behaviors.yourfunction = {
  attach: function(context) {
      $(document).ready(function() {
        $('#map_center_button').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // TEST Vauxhall
          // http://toolserver.org/~rhaworth/os/coor_g.php?pagename=Vauxhall&params=TQ305785_region%3AGB_scale%3A25000
          // 51.490833, -0.12097
          var lat = 51.490833;
          var lon = -0.12097;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_brixton').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Brixton 51.463, -0.106
          var lat = 51.463;
          var lon = -0.106;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_clapham').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Clapham 51.462927, -0.134886
          var lat = 51.462927;
          var lon = -0.134886;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_crystal-palace').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Crystal Palace 51.4203, -0.0705
          var lat = 51.4203;
          var lon = -0.0705;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_gipsy-hill').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Gipsy Hill 51.4229, -0.0848
          var lat = 51.4229;
          var lon = -0.0848;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_herne-hill').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Herne Hill 51.4544, -0.0936
          var lat = 51.4544;
          var lon = -0.0936;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_kennington').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Kennington 51.4813, -0.1197
          var lat = 51.4813;
          var lon = -0.1197;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_oval').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Oval 51.481847, -0.12134
          var lat = 51.481847;
          var lon = -0.12134;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_stockwell').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Stockwell 51.4633, -0.1204
          var lat = 51.4633;
          var lon = -0.1204;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_streatham').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Streatham 51.427927, -0.123552
          var lat = 51.427927;
          var lon = -0.123552;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_tulse-hill').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Tulse Hill 51.4452, -0.1091
          var lat = 51.4452;
          var lon = -0.1091;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_vauxhall').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // Vauxhall 51.490833, -0.12097
          var lat = 51.490833;
          var lon = -0.12097;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_west-dulwich').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // West Dulwich 51.433566, -0.083037
          var lat = 51.433566;
          var lon = -0.083037;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });

        $('#map_center_west-norwood').click(function(e) {
          // TODO get the lat/lng of the textfield input
          // $.ajax({
          //   ...
          // });
          // Center the map
          // West Norwood 51.427463, -0.094801
          var lat = 51.427463;
          var lon = -0.094801;
          var ol = $('.openlayers-map').data('openlayers');//assuming there is just one map on the page
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), ol.openlayers.getProjectionObject());
          ol.openlayers.setCenter(lonLat, 15);
        });




        // http://stackoverflow.com/questions/1279957/how-to-move-an-element-into-another-element
        // NOTE: #block-block-1 is hard-coded.
        // commented out ml 2012-10-17 - revert to usual switcher.
        //
        // UNCOMMENT THESE NEXT TWO LINES TO PUT THE SWITCHER UNDER THE MAP
        //
        $('.layersDiv .dataLayersDiv').appendTo('#block-block-1');
        $('.layersDiv .dataLbl').hide();
        //
        //
        // TRIED TO GET THE IMAGES TO TOGGLE ON CLICK BUT COULDN'T GET IT TO
        // WORK
        //
        // $('.dataLayersDiv input[name="cycle-stands"]').attr('id', 'input-cycle-stands');
        // $('.dataLayersDiv input[name="car-parks"]').attr('id', 'input-car-parks');
        // $('.dataLayersDiv input[name="police-stations"]').attr('id', 'input-police-stations');
        // $('.dataLayersDiv input[name="adventure-playgrounds"]').attr('id', 'input-adventure-playgrounds');
        // $('.dataLayersDiv input[name="childrens-centres"]').attr('id', 'input-childrens-centres');
        //
        // $('.dataLayersDiv input[name="cycle-stands"] + .labelSpan').attr('id', 'label-span-cycle-stands');
        // $('.dataLayersDiv input[name="car-parks"] + .labelSpan').attr('id', 'label-span-car-parks');
        // $('.dataLayersDiv input[name="police-stations"] + .labelSpan').attr('id', 'label-span-police-stations');
        // $('.dataLayersDiv input[name="adventure-playgrounds"] + .labelSpan').attr('id', 'label-span-adventure-playgrounds');
        // $('.dataLayersDiv input[name="childrens-centres"] + .labelSpan').attr('id', 'label-span-childrens-centres');

        // doesn't work
        // $('#label-span-childrens-centres').live('click', function() {
        // works once
        // $('.dataLayersDiv input[name="childrens-centres"] + .labelSpan').click(function() {
        // $('.dataLayersDiv input[name="childrens-centres"] + .labelSpan').bind('click', function() {
        // alert($('.dataLayersDiv input[name="childrens-centres"]').attr('checked'));
        // if ($('.dataLayersDiv input[name="childrens-centres"]').attr('checked')) {
        // $('.dataLayersDiv input[name="childrens-centres"] + .labelSpan').css('background-image', 'url(/sites/all/themes/opencouncil/images/childrens-centres-off.png)');
        // }
        // else {
        // $('.dataLayersDiv input[name="childrens-centres"] + .labelSpan').css('background-image', 'url(/sites/all/themes/opencouncil/images/childrens-centres-on.png)');          
        // }
        // });
      });
      }
  }
}(jQuery));

