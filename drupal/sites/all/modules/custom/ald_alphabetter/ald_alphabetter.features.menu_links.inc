<?php
/**
 * @file
 * ald_alphabetter.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ald_alphabetter_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu:previewer
  $menu_links['user-menu:previewer'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'previewer',
    'router_path' => 'previewer',
    'link_title' => 'Previewer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: user-menu:products
  $menu_links['user-menu:products'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'products',
    'router_path' => 'products',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Previewer');
  t('Products');


  return $menu_links;
}
