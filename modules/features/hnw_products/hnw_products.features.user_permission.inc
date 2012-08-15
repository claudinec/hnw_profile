<?php
/**
 * @file
 * hnw_products.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hnw_products_user_default_permissions() {
  $permissions = array();

  // Exported permission: create product content
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any product content
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(),
  );

  // Exported permission: delete own product content
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(),
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any product content
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own product content
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'publisher',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
