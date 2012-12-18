<?php
/**
 * @file
 * adorabets.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function adorabets_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:/contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:http://aldesign.zenfolio.com/
  $menu_links['main-menu:http://aldesign.zenfolio.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://aldesign.zenfolio.com/',
    'router_path' => '',
    'link_title' => 'Shop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:/blog
  $menu_links['main-menu:/blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/blog',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Shop');


  return $menu_links;
}
