(function ($) {
  Drupal.behaviors.openlayers_switcher = {
    attach: function(context, settings) {
      $(document).ready(function() {
        // http://stackoverflow.com/questions/1279957/how-to-move-an-element-into-another-element
        // This uses jQuery to move the layer switcher checkboxes from the lhs
        // switcher block to below the map.
        if ($('.layersDiv .dataLayersDiv').length) {
          $('.layersDiv .dataLayersDiv').appendTo('#openlayers-switcher-block');
          $('.layersDiv .dataLbl').hide();
        }
      });
    }
  }
}(jQuery));
