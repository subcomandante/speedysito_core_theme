<?php
/**
* Implements hook_skinr_group_info().
*/
/*function speedysito_skinr_group_info() {*/
function speedysito_skinr_group_speedysito_blocks_info() {
  $groups['speedysito_blocks'] = array(
    'title' => t('SpeedySito Blocks'),
    'description' => t('SpeedySito block styles.'),
  );
  $groups['speedysito_content'] = array(
    'title' => t('SpeedySito Content'),
    'description' => t('SpeedySito content styles.'),
  );
  $groups['speedysito_menus'] = array(
    'title' => t('SpeedySito Menu'),
    'description' => t('SpeedySito menu styles.'),
  );

  return $groups;
}


/**
* Implements hook_skinr_skin_PLUGIN_info().
*/
function speedysito_skinr_skin_speedysito_blocks_info() {
  $skins['speedysito_block_horizontal_position'] = array(
    'title' => t('Horizontal position'),
    'description' => t('Change the horizontal position of this block'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_block_position.css')),
    'default status' => 1,
    /*'group' => 'typography',*/
    'group' => 'speedysito_blocks',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_block_inline'       => array('title' => t('Inline'), 'class' => array('speedysito-block-inline')),
      'speedysito_block_float_left'   => array('title' => t('Left'),   'class' => array('speedysito-block-float-left')),
      'speedysito_block_float_center' => array('title' => t('Center'), 'class' => array('speedysito-block-float-center')),
      'speedysito_block_float_right'  => array('title' => t('Right'),  'class' => array('speedysito-block-float-right')),
      'speedysito_block_float_clear'  => array('title' => t('Clear (block drops to a new line)'),  'class' => array('speedysito-block-float-clear')),
    ),
  );

  $skins['speedysito_block_width'] = array(
    'title' => t('Width'),
    'description' => t('Change the width of this block'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_block_width.css')),
    'default status' => 1,
    'group' => 'speedysito_blocks',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_block_width_25'     => array('title' => t('25%'),   'class' => array('speedysito-block-width-25')),
      'speedysito_block_width_33'     => array('title' => t('33%'),   'class' => array('speedysito-block-width-33')),
      'speedysito_block_width_50'     => array('title' => t('50%'),   'class' => array('speedysito-block-width-50')),
      'speedysito_block_width_66'     => array('title' => t('66%'),   'class' => array('speedysito-block-width-66')),
      'speedysito_block_width_75'     => array('title' => t('75%'),   'class' => array('speedysito-block-width-75')),
      'speedysito_block_width_100'    => array('title' => t('100%'),  'class' => array('speedysito-block-width-100')),
    ),
  );

  $skins['speedysito_block_innerspacing'] = array(
    'title' => t('Inner spacing'),
    'description' => t('Change the spacing between blocks'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_block_innerspacing.css')),
    'default status' => 1,
    'group' => 'speedysito_blocks',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_block_innerspacing_5'     => array('title' => t('5%'),   'class' => array('speedysito-block-innerspacing-5')),
      'speedysito_block_innerspacing_10'    => array('title' => t('10%'),  'class' => array('speedysito-block-innerspacing-10')),
    ),
  );




  $skins['speedysito_block_border'] = array(
    'title' => t('Border'),
    'description' => t('Change the border of this block'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_block_border.css')),
    'default status' => 1,
    'group' => 'speedysito_blocks',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_block_border_elegant'     => array('title' => t('Elegant'),   'class' => array('speedysito-block-border-elegant')),
      'speedysito_block_border_papersheet'  => array('title' => t('Paper sheet'), 'class' => array('speedysito-block-border-papersheet')),
    ),
  );

  $skins['speedysito_block_background_image'] = array(
    'title' => t('Background image'),
    'description' => t('Change the background image of this block'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_block_background_image.css')),
    'default status' => 1,
    'group' => 'speedysito_blocks',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_block_background_elegantgradient'     => array('title' => t('Elegant gradient'),   'class' => array('speedysito-block-background-image-elegantgradient')),
      'speedysito_block_background_numeroverde'     => array('title' => t('Numero Verde'),   'class' => array('speedysito-block-background-image-numeroverde')),
    ),
  );

  $skins['speedysito_block_background_color'] = array(
    'title' => t('Background color'),
    'description' => t('Change the background color of this block'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_block_background_color.css')),
    'default status' => 1,
    'group' => 'speedysito_blocks',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_block_background_white'     => array('title' => t('White'),   'class' => array('speedysito-block-background-color-white')),
      'speedysito_block_background_green'     => array('title' => t('Green'),   'class' => array('speedysito-block-background-color-green')),
      'speedysito_block_background_blue'      => array('title' => t('Blue'),    'class' => array('speedysito-block-background-color-blue')),
      'speedysito_block_background_orange'    => array('title' => t('Orange'),  'class' => array('speedysito-block-background-color-orange')),
      'speedysito_block_background_black'     => array('title' => t('Black'),   'class' => array('speedysito-block-background-color-black')),
    ),
  );






  $skins['speedysito_style_list'] = array(
    'title' => t('List style'),
    'description' => t('Change the list style'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_style_list.css')),
    'default status' => 1,
    'group' => 'speedysito_content',
    'theme hooks' => array('block', 'node'),
    'options' => array(
      'speedysito_style_list_checkmark'   => array('title' => t('Check mark'), 'class' => array('speedysito-style-list-checkmark')),
      'speedysito_style_list_arrow'   => array('title' => t('Arrow'), 'class' => array('speedysito-style-list-arrow')),
    ),
  );



  /* MENU */
  $skins['speedysito_menu_title'] = array(
    'title' => t('Title'),
    'description' => t('Configure the menu title'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_menu_title.css')),
    /*'weight' => '10',*/
    'default status' => 1,
    'group' => 'speedysito_menus',
    'theme hooks' => array('block__menu', 'block__system', 'block__menu_block'),
    'options' => array(
      'speedysito_menu_title_hidden'   => array('title' => t('Hidden'), 'class' => array('speedysito-menu-title-hidden')),
      /*'speedysito_menu_style_vertical'   => array('title' => t('Vertical'), 'class' => array('speedysito-menu-orientation-vertical')),*/
    ),
  );




  $skins['speedysito_menu_orientation'] = array(
    'title' => t('Orientation'),
    'description' => t('Change the menu orientation'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_menu_orientation.css')),
    /*'weight' => '10',*/
    'default status' => 1,
    'group' => 'speedysito_menus',
    'theme hooks' => array('block__menu', 'block__system', 'block__menu_block'),
    'options' => array(
      'speedysito_menu_style_horizontal'   => array('title' => t('Horizontal'), 'class' => array('speedysito-menu-orientation-horizontal')),
      'speedysito_menu_style_vertical'   => array('title' => t('Vertical'), 'class' => array('speedysito-menu-orientation-vertical')),
    ),
  );



  $skins['speedysito_menu_style'] = array(
    'title' => t('Style'),
    'description' => t('Change the style of menu'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_menu_style.css')),
    /*'weight' => '10',*/
    'default status' => 1,
    'group' => 'speedysito_menus',
    'theme hooks' => array('block__menu', 'block__system', 'block__menu_block'),
    'options' => array(
      'speedysito_menu_style_simple'   => array('title' => t('Simple'), 'class' => array('speedysito-menu-style-simple')),
      'speedysito_menu_style_tabbed'   => array('title' => t('Tabbed'), 'class' => array('speedysito-menu-style-tabbed')),
      'speedysito_menu_style_simpleslash' => array('title' => t('Simple Slash'), 'class' => array('speedysito-menu-style-simpleslash')),
    ),
  );


  return $skins;
}

?>
