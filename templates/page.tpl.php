<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">


  <?php if ($messages): ?>
  <div id="speedysito_messages">
  <span class="trigger"><em></em></span>
    <div class="ss_row_wrapper clearfix">
      <?php print $messages; ?>
    </div>
  </div>
  <?php endif; ?>

  <?php if (render($tabs)): ?>
  <div id="speedysito_tabs">
  <span class="trigger"><em></em></span>
    <div class="ss_row_wrapper clearfix">
      <?php print render($tabs); ?>
    </div>
  </div>
  <?php endif; ?>



  <div id="header_top">
  <div class="region_header_top_inner ss_row_wrapper clearfix">
    <?php print render($page['header_top']); ?>
  </div>
  </div>
  <header class="header" id="header" role="banner">
  <div class="region_header_inner ss_row_wrapper clearfix">
    <?php print render($page['header']); ?>
  </div>
  </header>
  <header class="header" id="header_bottom" role="banner">
  <div class="region_header_bottom_inner ss_row_wrapper clearfix">
    <?php print render($page['header_bottom']); ?>
  </div>
  </header>

  <div id="preface">
  <div class="region_preface_inner ss_row_wrapper clearfix">
    <?php print render($page['preface']); ?>
  </div>
  </div>

  <div id="main-wrapper">

  <div id="main_top">
  <div class="main_top_inner ss_row_wrapper clearfix">
    <?php print render($page['main_top']); ?>
  </div>
  </div>

  <div id="main">
  <div class="region_main_inner ss_row_wrapper clearfix">

    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php //print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print render($page['content_bottom']); ?>
      <?php print $feed_icons; ?>
    </div>

    <div id="navigation" class="ss_row_wrapper">
      <?php print render($page['navigation']); ?>
    </div>

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>
  </div>

  <div id="main_bottom">
  <div class="main_bottom_inner ss_row_wrapper clearfix">
    <?php print render($page['main_bottom']); ?>
  </div>
  </div>

  </div>

  <div id="footer_top">
  <div class="footer_top_inner ss_row_wrapper clearfix">
    <?php print render($page['footer_top']); ?>
  </div>
  </div>



  <div id="footer-wrapper">
  <div class="ss_row_wrapper clearfix">
  <?php print render($page['footer']); ?>
  </div>
  </div>

</div>

<?php print render($page['bottom']); ?>
