(function ($) {
Drupal.behaviors.yourfunction = {
  attach: function(context) {
      $(document).ready(function() {
        // http://stackoverflow.com/questions/1279957/how-to-move-an-element-into-another-element
        // NOTE: #block-block-1 is hard-coded.
        $('.layersDiv .dataLayersDiv').appendTo('#block-block-1');
        $('.layersDiv .dataLbl').hide();
        /*
        $('#block-block-1 .labelSpan').css({
          'display': 'inline-block',
          'height': '100px',
          'background-image': 'sites/default/files/logo_0.png', 
          'border': '5px solid blue'})
        */
      });
      $('#show-hide-LambethAdventurePlaygrounds', context).click(function() {
        alert('hello');

        // alert($('.dataLayersDiv').html());

        // $('.baseLbl').hide();
        

        /*
        var layers = map.layers;
        alert(layers);
        
        // http://stackoverflow.com/questions/6528243/how-to-hide-vector-features-in-openlayers
        var features = layer.features;

        for( var i = 0; i < features.length; i++ ) {
          features[i].style = { visibility: 'hidden' };
        }

        layer.redraw();
        */
      });
    }
  }
}(jQuery));

