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
  return $groups;
}


/**
* Implements hook_skinr_skin_PLUGIN_info().
*/
function speedysito_skinr_skin_speedysito_blocks_info() {
  $skins['speedysito_text_color'] = array(
    'title' => t('Text color'),
    'description' => t('Description'),
    'type' => 'select',
    'attached' => array('css' => array('colors.css')),
    'default status' => 1,
    /*'group' => 'typography',*/
    'group' => 'speedysito_blocks',
    'theme hooks' => array('block'),
    'options' => array(
      'color_1' => array('title' => t('Red'), 'class' => array('red')),
      'color_2' => array('title' => t('Orange'), 'class' => array('orange')),
      'color_3' => array('title' => t('Yellow'), 'class' => array('yellow')),
      'color_4' => array('title' => t('Green'), 'class' => array('green')),
      'color_5' => array('title' => t('Blue'), 'class' => array('blue')),
      'color_6' => array('title' => t('Violet'), 'class' => array('violet')),
    ),
  );
  return $skins;
}

?>
