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

