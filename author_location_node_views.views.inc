<?php
/**
 * @file
 * author_location_node_views.views.inc
 * Implementation of hook_views_data_alter().
 */
function author_location_node_views_views_data_alter(&$data) {
  $data['node']['uid'] = array(
    'title' => t('User'),
    'help' => t('Relate a node to the user who created it.'),
    'relationship' => array(
      'base' => 'users',
      'field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('user'),
    ),
  );
}
