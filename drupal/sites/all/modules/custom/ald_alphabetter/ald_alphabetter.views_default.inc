<?php
/**
 * @file
 * ald_alphabetter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ald_alphabetter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ald_letter' => 'ald_letter',
  );
  /* Filter criterion: Content: Alphabet (field_alphabet) */
  $handler->display->display_options['filters']['field_alphabet_tid']['id'] = 'field_alphabet_tid';
  $handler->display->display_options['filters']['field_alphabet_tid']['table'] = 'field_data_field_alphabet';
  $handler->display->display_options['filters']['field_alphabet_tid']['field'] = 'field_alphabet_tid';
  $handler->display->display_options['filters']['field_alphabet_tid']['value'] = array(
    5 => '5',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_alphabet_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_alphabet_tid']['expose']['operator_id'] = 'field_alphabet_tid_op';
  $handler->display->display_options['filters']['field_alphabet_tid']['expose']['label'] = 'Alphabet (field_alphabet)';
  $handler->display->display_options['filters']['field_alphabet_tid']['expose']['operator'] = 'field_alphabet_tid_op';
  $handler->display->display_options['filters']['field_alphabet_tid']['expose']['identifier'] = 'field_alphabet_tid';
  $handler->display->display_options['filters']['field_alphabet_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_alphabet_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_alphabet_tid']['expose']['remember_roles'] = array(
    2 => 0,
    1 => '1',
    3 => 0,
  );
  $handler->display->display_options['filters']['field_alphabet_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_alphabet_tid']['vocabulary'] = 'letter_type';

  /* Display: Products */
  $handler = $view->new_display('page', 'Products', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'products';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['products'] = $view;

  return $export;
}
