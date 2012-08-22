<?php
/**
 * @file
 * hnw_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hnw_users_user_default_roles() {
  $roles = array();

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => '2',
  );

  return $roles;
}
