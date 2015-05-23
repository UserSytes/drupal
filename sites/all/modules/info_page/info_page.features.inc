<?php
/**
 * @file
 * info_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function info_page_node_info() {
  $items = array(
    'strony_informacyjne' => array(
      'name' => t('Strony informacyjne'),
      'base' => 'node_content',
      'description' => t('Strony z zawartością statyczną np. regulamin serwisu'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
