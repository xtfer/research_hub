<?php

/**
 * Implementation of hook_user_default_roles().
 */
function research_hub_base_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  return $roles;
}
