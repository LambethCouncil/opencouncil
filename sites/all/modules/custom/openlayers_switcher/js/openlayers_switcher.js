(function ($) {
  Drupal.behaviors.openlayers_switcher = {
    attach: function(context, settings) {
      $(document).ready(function() {
        // see http://drupal.org/node/756722
        // jQuery Once method for applying JavaScript behaviors once
        // $('[id^=openlayers-switcher-block--]').once('click', function() {
        $('[id^=openlayers-switcher-block--]').click(function(e) {
          // console.log($(this));
          var layername = e.target.id.substring(27);
          var ol = $('.openlayers-map').data('openlayers');
          var layers = ol.openlayers.getLayersByName(layername);

          checked = $('[name=' + layername + ']')[0].checked;
          console.log('checked=' + checked)
          visibility = layers[0].visibility;
          console.log('visibility=' + visibility);

          layers[0].setVisibility(true);
          // this doesn't work
          //if (layers[0].visibility) {
            //layers[0].setVisibility(false);
          //}
          //else {
            //layers[0].setVisibility(true);
          //}
          
        });
      });
    }
  }
}(jQuery));
