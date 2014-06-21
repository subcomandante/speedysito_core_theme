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
  $skins['speedysito_grid_column_width'] = array(
    'title' => t('Width (4 column grid)'),
    'description' => t('Change the width of this block. Fluid grid % widths are relative to the parent region\'s width. Default widths: sidebar blocks default to the sidebar width; in other regions width is divided equally among all blocks.'),
    'type' => 'select',
    /*'attached' => array('css' => array('speedysito_grid_column_width.css')),*/
    'default status' => 1,
    'group' => 'speedysito_grid',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_grid_columns_wide_1'      => array('title' => t('1 column'),  'class' => array('speedysito-grid-columns-wide-1')),
      'speedysito_grid_columns_wide_2'      => array('title' => t('2 columns'), 'class' => array('speedysito-grid-columns-wide-2')),
      'speedysito_grid_columns_wide_3'      => array('title' => t('3 columns'), 'class' => array('speedysito-grid-columns-wide-3')),
      'speedysito_grid_columns_wide_4'      => array('title' => t('4 columns'), 'class' => array('speedysito-grid-columns-wide-4')),
    ),
  );


  $skins['speedysito_grid_column_start'] = array(
    'title' => t('Start (4 column grid)'),
    'description' => t('Change the start column of this block.'),
    'type' => 'select',
    /*'attached' => array('css' => array('speedysito_grid_column_start.css')),*/
    'default status' => 1,
    'group' => 'speedysito_grid',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_grid_column_start_1'     => array('title' => t('1 column'), 'class' => array('speedysito-grid-column-start-1')),
      'speedysito_grid_column_start_2'     => array('title' => t('2 column'), 'class' => array('speedysito-grid-column-start-2')),
      'speedysito_grid_column_start_3'     => array('title' => t('3 column'), 'class' => array('speedysito-grid-column-start-3')),
      'speedysito_grid_column_start_4'     => array('title' => t('4 column'), 'class' => array('speedysito-grid-column-start-4')),
    ),
  );

  $skins['speedysito_grid_column_alignment'] = array(
    'title' => t('Alignment'),
    'description' => t('Change me.'),
    'type' => 'select',
    /*'attached' => array('css' => array('speedysito_grid_column_start.css')),*/
    'default status' => 1,
    'group' => 'speedysito_grid',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_grid_column_alignment_right'     => array('title' => t('Right'), 'class' => array('speedysito-grid-column-alignment_right')),
    ),
  );


  $skins['speedysito_grid_column_clear'] = array(
    'title' => t('Clear'),
    'description' => t('Change me.'),
    'type' => 'select',
    /*'attached' => array('css' => array('speedysito_grid_column_start.css')),*/
    'default status' => 1,
    'group' => 'speedysito_grid',
    'theme hooks' => array('block'),
    'options' => array(
      'speedysito_grid_column_clear_left'      => array('title' => t('Left'),  'class' => array('speedysito-grid-columns-clear-left')),
      'speedysito_grid_column_clear_right'     => array('title' => t('Right'), 'class' => array('speedysito-grid-columns-clear-right')),
    ),
  );




  return $skins;
}

?>
