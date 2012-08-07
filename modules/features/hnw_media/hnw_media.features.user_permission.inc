<?php
/**
 * @file
 * hnw_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hnw_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: create media_item content
  $permissions['create media_item content'] = array(
    'name' => 'create media_item content',
    'roles' => array(),
  );

  // Exported permission: delete any media_item content
  $permissions['delete any media_item content'] = array(
    'name' => 'delete any media_item content',
    'roles' => array(),
  );

  // Exported permission: delete own media_item content
  $permissions['delete own media_item content'] = array(
    'name' => 'delete own media_item content',
    'roles' => array(),
  );

  // Exported permission: edit any media_item content
  $permissions['edit any media_item content'] = array(
    'name' => 'edit any media_item content',
    'roles' => array(),
  );

  // Exported permission: edit own media_item content
  $permissions['edit own media_item content'] = array(
    'name' => 'edit own media_item content',
    'roles' => array(),
  );

  return $permissions;
}
