<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

		<?php
		print 'pre';		
		if (!empty($content['field_guidance_part'])) {
			print 'start';
		  foreach ($content['field_guidance_part']['#items'] as $entity_uri) {
		    $a_field_collection_item = entity_load('field_collection_item', $entity_uri);

		    foreach ($a_field_collection_item as $a_field_collection_item_object ) {
					print render($a_field_collection_item_object->title);
					print render($a_field_collection_item_object->content);
		    }

		  }

		}
		?>
		
  </div>
</div>


