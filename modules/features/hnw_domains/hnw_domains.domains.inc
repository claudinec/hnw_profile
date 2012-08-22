<?php
/**
 * @file
 * hnw_domains.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function hnw_domains_domain_default_domains() {
$domains = array();
  $domains['dev_hnw_au'] = array(
  'subdomain' => 'dev-hnw-au.moatdev.com',
  'sitename' => 'Hurll Nu-Way Australia',
  'scheme' => 'http',
  'valid' => '1',
  'weight' => '-1',
  'is_default' => '1',
  'machine_name' => 'dev_hnw_au',
);
  $domains['dev_hnw_nz'] = array(
  'subdomain' => 'dev-hnw-nz.moatdev.com',
  'sitename' => 'Hurll Nu-Way New Zealand',
  'scheme' => 'http',
  'valid' => '1',
  'weight' => '1',
  'is_default' => '0',
  'machine_name' => 'dev_hnw_nz',
);

return $domains;
}
