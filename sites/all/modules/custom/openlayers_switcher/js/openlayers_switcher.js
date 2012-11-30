(function ($) {
  Drupal.behaviors.openlayers_switcher = {
    attach: function(context, settings) {
      $(document).ready(function() {
        // Move the layer switcher checkboxes and labels out of the
        // left-hand-side OpenLayers switcher widget, and put the content of
        // .dataLayersDiv inside the openlayers-switcher-block defined by the
        // module.
        if ($('.layersDiv .dataLayersDiv').length) {
          $('.layersDiv .dataLayersDiv').appendTo('#openlayers-switcher-block');
          $('.layersDiv .dataLbl').hide();
        }        
      });
    }
  }
}(jQuery));
