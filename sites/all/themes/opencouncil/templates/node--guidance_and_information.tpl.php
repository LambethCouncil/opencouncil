<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
  <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?>

  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
			
			// add anchor links for parts
			$counter = 1;
			print '<ul>';
			foreach ($node->field_guidance_part['und'] as $key => $value) {
			  $field_collection = entity_load('field_collection_item', array($value['value']));
			  $idx = $value['value'];
				print '<li><a href="#part' . $counter . '">' . $field_collection[$idx]->field_title['und'][0]['value'] . '</a></li>';
				$counter++;
			}
			print '</ul>';			

			//render standard content
      print render($content);
	
    ?>
  </div>

  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>