<?php
/**
 * @file
 * instructor_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function instructor_role_user_default_roles() {
  $roles = array();

  // Exported role: instructor.
  $roles['instructor'] = array(
    'name' => 'instructor',
    'weight' => 3,
  );

  return $roles;
}
