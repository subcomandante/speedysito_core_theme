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
  $skins['speedysito_block_horizontal_position'] = array(
    'title' => t('Block horizontal position'),
    'description' => t('Change the horizontal position of this block'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_block_position.css')),
    'default status' => 1,
    /*'group' => 'typography',*/
    'group' => 'speedysito_blocks',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_block_float_left'   => array('title' => t('Left'),   'class' => array('speedysito-block-float-left')),
      'speedysito_block_float_center' => array('title' => t('Center'), 'class' => array('speedysito-block-float-center')),
      'speedysito_block_float_right'  => array('title' => t('Right'),  'class' => array('speedysito-block-float-right')),
      'speedysito_block_float_clear'  => array('title' => t('Clear (block drops to a new line)'),  'class' => array('speedysito-block-float-clear')),
    ),
  );
  return $skins;
}

?>
