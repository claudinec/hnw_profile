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
  $domains['wipe-domain-tables'] = 'wipe-domain-tables';
  $domains['hnw_au_claudinechionh_net'] = array(
  'subdomain' => 'dev-hnw-au.moatdev.com',
  'sitename' => 'Hurll Nu-Way Australia',
  'scheme' => 'http',
  'valid' => '1',
  'weight' => '-1',
  'is_default' => '1',
  'machine_name' => 'hnw_au_claudinechionh_net',
);
  $domains['hnw_nz_claudinechionh_net'] = array(
  'subdomain' => 'dev-hnw-nz.moatdev.com',
  'sitename' => 'Hurll Nu-Way New Zealand',
  'scheme' => 'http',
  'valid' => '1',
  'weight' => '1',
  'is_default' => '0',
  'machine_name' => 'hnw_nz_claudinechionh_net',
);

return $domains;
}
