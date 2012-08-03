<?php
/**
 * @file
 * Enables modules and site configuration for the Moat Standard site installation.
 */

!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('hnw_profile');


/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function hnw_profile_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'Hurll Nu-Way';
  $form['site_information']['default_country']['#default_value'] = 'Australia';
}

