<?php
/**
 * @file
 * student_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function student_role_user_default_roles() {
  $roles = array();

  // Exported role: student.
  $roles['student'] = array(
    'name' => 'student',
    'weight' => 4,
  );

  return $roles;
}
