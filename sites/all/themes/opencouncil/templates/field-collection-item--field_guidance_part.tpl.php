<div class="guide-section <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
		<?php
			print '<h2>' . render($content['field_title'][0]['#markup']) . '</h2>';
			print render($content['field_content'][0]['#markup']);
		?>
  </div>
</div>