<?php
	foreach ($content['#items'] as $entity_uri) {
	   $items = entity_load('field_guidance_part', $entity_uri);
	   //Now you have a variable with the entity object loaded in it, and you can do stuff. 
	   foreach ($items as $item ) {
	    	print render($item);
				print "XXXXX";
	   }

	 }
?>