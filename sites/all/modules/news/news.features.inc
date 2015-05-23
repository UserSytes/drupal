<?php
/**
 * @file
 * news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function news_node_info() {
  $items = array(
    'newsy' => array(
      'name' => t('Newsy'),
      'base' => 'node_content',
      'description' => t('Nowości w serwisie'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
