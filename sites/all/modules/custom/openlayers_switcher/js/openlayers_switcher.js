(function ($) {
  Drupal.behaviors.openlayers_switcher = {
    attach: function(context, settings) {
      $(document).ready(function() {
        // http://stackoverflow.com/questions/1279957/how-to-move-an-element-into-another-element
        // NOTE: #block-block-1 is hard-coded.
        // commented out ml 2012-10-17 - revert to usual switcher.
        //
        // UNCOMMENT THESE NEXT TWO LINES TO PUT THE SWITCHER UNDER THE MAP
        //
          // $('.layersDiv .dataLayersDiv').appendTo('#openlayers-switcher-block-lhs');
          // $('.layersDiv .dataLbl').hide();
        //
        //
        
      });
    }
  }
}(jQuery));
