<?php
/**
 * @file
 * Returns the HTML for a block.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728246
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <div class="box"><!-- .box -->
    <div class="block-container">
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php print $content; ?>
    </div>
  </div><!-- /.box -->

  <!-- T : top -->
  <div class="side top border-color"></div>
  <!-- /T -->
  
  <!-- TR : top right -->
  <div class="corner top right corner-color"></div>
  <!-- /TR -->
  
  <!-- R : right -->
  <div class="side right border-color"></div>
  <!-- /R -->
  
  <!-- BR : bottom right -->
  <div class="corner bottom right corner-color"></div>
  <!-- /BR -->
  
  <!-- B : bottom -->
  <div class="side bottom border-color"></div>
  <!-- /B -->
  
  <!-- BL : bottom left -->
  <div class="corner bottom left corner-color"></div>
  <!-- /BL -->
  
  <!-- L : left -->
  <div class="side left border-color"></div>
  <!-- /L -->
  
  <!-- TL : top left -->
  <div class="corner top left corner-color"></div>
  <!-- /TL -->

</div>
