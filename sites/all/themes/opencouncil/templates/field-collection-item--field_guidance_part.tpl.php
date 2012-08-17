<div class="guide-section <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
		<?php
		
			// work out which number we are on (extracted from the url)
			$parts = explode('/', $url);
			$part_number =  $parts[count($parts) - 1];

			//print the title
			print '<h2 id="part' . $part_number . '">' . render($content['field_title'][0]['#markup']) . '</h2>';
			
			//print the content
			print render($content['field_content'][0]['#markup']);
		?>
  </div>
</div>