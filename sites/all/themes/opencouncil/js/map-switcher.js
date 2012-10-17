(function ($) {
Drupal.behaviors.yourfunction = {
  attach: function(context) {
      $(document).ready(function() {
        // http://stackoverflow.com/questions/1279957/how-to-move-an-element-into-another-element
        // NOTE: #block-block-1 is hard-coded.
        // commented out ml 2012-10-17 - revert to usual switcher.
        // $('.layersDiv .dataLayersDiv').appendTo('#block-block-1');
        // $('.layersDiv .dataLbl').hide();
      });
    }
  }
}(jQuery));

