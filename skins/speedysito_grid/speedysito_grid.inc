<?php
/**
* Implements hook_skinr_group_info().
*/
/*function speedysito_skinr_group_info() {*/
function speedysito_skinr_group_speedysito_grid_info() {
  $groups['speedysito_grid'] = array(
    'title' => t('SpeedySito Grid'),
    'description' => t('SpeedySito grid settings, align an element to the grid.'),
  );

  return $groups;
}


/**
* Implements hook_skinr_skin_PLUGIN_info().
*/
function speedysito_skinr_skin_speedysito_grid_info() {
  $skins['speedysito_grid_width'] = array(
    'title' => t('Width (4 column grid)'),
    'description' => t('Change the width of this block. Fluid grid % widths are relative to the parent region\'s width. Default widths: sidebar blocks default to the sidebar width; in other regions width is divided equally among all blocks.'),
    'type' => 'select',
    'attached' => array('css' => array('speedysito_grid_width.css')),
    'default status' => 1,
    /*'group' => 'typography',*/
    'group' => 'speedysito_grid',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_grid_1_column_wide'      => array('title' => t('1 column'), 'class' => array('speedysito-grid-1-column-wide')),
      'speedysito_grid_2_column_wide'      => array('title' => t('2 column'), 'class' => array('speedysito-grid-2-column-wide')),
      'speedysito_grid_3_column_wide'      => array('title' => t('3 column'), 'class' => array('speedysito-grid-3-column-wide')),
      'speedysito_grid_4_column_wide'      => array('title' => t('4 column'), 'class' => array('speedysito-grid-4-column-wide')),
    ),
  );


  return $skins;
}

?>
