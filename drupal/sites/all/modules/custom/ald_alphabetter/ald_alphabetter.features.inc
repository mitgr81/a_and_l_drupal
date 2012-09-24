<?php
/**
 * @file
 * ald_alphabetter.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ald_alphabetter_node_info() {
  $items = array(
    'ald_letter' => array(
      'name' => t('ALD Letter'),
      'base' => 'node_content',
      'description' => t('Content type for all A and L Design letter types.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
