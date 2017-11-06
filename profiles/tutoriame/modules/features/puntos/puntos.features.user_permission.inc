<?php
/**
 * @file
 * puntos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function puntos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access puntos comprar'.
  $permissions['access puntos comprar'] = array(
    'name' => 'access puntos comprar',
    'roles' => array(
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'puntos',
  );

  // Exported permission: 'add userpoints'.
  $permissions['add userpoints'] = array(
    'name' => 'add userpoints',
    'roles' => array(),
    'module' => 'userpoints',
  );

  // Exported permission: 'administer order workflow'.
  $permissions['administer order workflow'] = array(
    'name' => 'administer order workflow',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'administer own product features'.
  $permissions['administer own product features'] = array(
    'name' => 'administer own product features',
    'roles' => array(),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer product classes'.
  $permissions['administer product classes'] = array(
    'name' => 'administer product classes',
    'roles' => array(),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer product features'.
  $permissions['administer product features'] = array(
    'name' => 'administer product features',
    'roles' => array(),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer products'.
  $permissions['administer products'] = array(
    'name' => 'administer products',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer store'.
  $permissions['administer store'] = array(
    'name' => 'administer store',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'uc_store',
  );

  // Exported permission: 'administer userpoints'.
  $permissions['administer userpoints'] = array(
    'name' => 'administer userpoints',
    'roles' => array(),
    'module' => 'userpoints',
  );

  // Exported permission: 'create orders'.
  $permissions['create orders'] = array(
    'name' => 'create orders',
    'roles' => array(
      'Aspirante Emprendedor' => 'Aspirante Emprendedor',
      'Emprendedor' => 'Emprendedor',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'delete orders'.
  $permissions['delete orders'] = array(
    'name' => 'delete orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(),
    'module' => 'uc_payment',
  );

  // Exported permission: 'delete terms in userpoints'.
  $permissions['delete terms in userpoints'] = array(
    'name' => 'delete terms in userpoints',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit orders'.
  $permissions['edit orders'] = array(
    'name' => 'edit orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'edit terms in userpoints'.
  $permissions['edit terms in userpoints'] = array(
    'name' => 'edit terms in userpoints',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit userpoints'.
  $permissions['edit userpoints'] = array(
    'name' => 'edit userpoints',
    'roles' => array(),
    'module' => 'userpoints',
  );

  // Exported permission: 'manual payments'.
  $permissions['manual payments'] = array(
    'name' => 'manual payments',
    'roles' => array(),
    'module' => 'uc_payment',
  );

  // Exported permission: 'moderate userpoints'.
  $permissions['moderate userpoints'] = array(
    'name' => 'moderate userpoints',
    'roles' => array(),
    'module' => 'userpoints',
  );

  // Exported permission: 'unconditionally delete orders'.
  $permissions['unconditionally delete orders'] = array(
    'name' => 'unconditionally delete orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'view all orders'.
  $permissions['view all orders'] = array(
    'name' => 'view all orders',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view customers'.
  $permissions['view customers'] = array(
    'name' => 'view customers',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view own invoices'.
  $permissions['view own invoices'] = array(
    'name' => 'view own invoices',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view own orders'.
  $permissions['view own orders'] = array(
    'name' => 'view own orders',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'uc_payment',
  );

  // Exported permission: 'view reports'.
  $permissions['view reports'] = array(
    'name' => 'view reports',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'uc_store',
  );

  // Exported permission: 'view userpoints'.
  $permissions['view userpoints'] = array(
    'name' => 'view userpoints',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'userpoints',
  );

  return $permissions;
}
