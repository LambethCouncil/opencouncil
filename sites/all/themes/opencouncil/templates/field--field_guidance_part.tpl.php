<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
      print '<h2>' . render($content['field_title']) . '</h2>';
      print render($content['field_content']);
    ?>
  </div>
</div>