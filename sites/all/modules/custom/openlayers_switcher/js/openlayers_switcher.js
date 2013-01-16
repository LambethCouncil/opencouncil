(function ($) {
  Drupal.behaviors.openlayers_switcher = {
    attach: function(context, settings) {
      $(document).ready(function() {
        // Set classes on layerswitcher spans
        $('div.dataLayersDiv input').each(function() {
          layerName = ($(this).attr('name'));
          humanLayerName = layerName.replace('-', ' ');
          console.log(layerName);
          console.log(humanLayerName);
          // change element from span to a
          span = $(this).next();
          span.html(humanLayerName);
          span.addClass('switcher-text');
          br = span.next();
          br.remove();
          anchor = "<a class='openlayers-switcher-block--" + layerName + "'></a>";
          span.wrap(anchor);
          span.before("<span class='icon-switcher'></span>");
          $(this).remove();
        });
        //
        // Move the layer switcher checkboxes and labels out of the
        // left-hand-side OpenLayers switcher widget, and put the content of
        // .dataLayersDiv inside the openlayers-switcher-block defined by the
        // module.
        // if ($('div.dataLayersDiv').length) {
          // $('div.dataLayersDiv').appendTo('#openlayers-switcher-block');
        // }        
        // $('div.dataLbl').remove();
        //
        // 2013-01-07
        // this works but only once
        // $('div.dataLayersDiv span.labelSpan').click(function(e) {
          // console.log($(this));
        // });
        // this seems to do nothing
        // $('div.dataLayersDiv span.labelSpan').live('click', function(e) {
          // console.log($('hello'));
        // });
        // $("body").delegate("div.dataLayersDiv span.labelSpan", "click", function() {
          // console.log($(this));
        // });
      });
    }
  }
}(jQuery));
