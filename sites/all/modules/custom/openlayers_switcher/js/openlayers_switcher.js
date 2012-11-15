(function ($) {
  Drupal.behaviors.openlayers_switcher = {
    attach: function(context, settings) {
      $(document).ready(function() {
        $('[id^=openlayers-switcher-block--]').click(function(e) {
          // 27 is the length of 'openlayers-switcher-block--'
          // layername is the string following that.
          var layername = e.target.id.substring(27);
          var ol = $('.openlayers-map').data('openlayers');
          var layers = ol.openlayers.getLayersByName(layername);
          layers[0].setVisibility(true);
          // this doesn't work
          // if (layers[0].visibility) {
            // layers[0].setVisibility(false);
          // }
          // else {
            // layers[0].setVisibility(true);
          // }
        });
      });
    }
  }
}(jQuery));
