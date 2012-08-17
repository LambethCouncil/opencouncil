<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
	    if (isset($content['field_title'])) {
	      print '<h2>' . $content['field_title'][0]['#markup'] . '</h2>';
	    }
	    if (isset($content['field_content'])) {
	      	print $content['field_content'][0]['#markup'];
	     }
    ?>
  </div>
</div>