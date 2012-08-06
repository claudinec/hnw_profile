<?php
/**
 * @file
 * hnw_ds_fields.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function hnw_ds_fields_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'image_placeholder';
  $ds_field->label = 'Image placeholder';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><img src="http://placekitten.com/160/120" alt="" /></p>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['image_placeholder'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'map_au';
  $ds_field->label = 'Map AU';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><iframe src="https://maps.google.com.au/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=14+Aristoc+Road,+Glen+Waverley,+VIC,+3150,+Australia&amp;aq=0&amp;oq=14+Aristoc+Road,+Glen+Waverley,+VIC,+3150,+australi&amp;sll=-37.886319,145.158485&amp;sspn=0.007553,0.010664&amp;ie=UTF8&amp;hq=&amp;hnear=14+Aristoc+Rd,+Glen+Waverley+Victoria+3150&amp;t=m&amp;view=map&amp;ll=-37.886302,145.158491&amp;spn=0.020322,0.025749&amp;z=14&amp;iwloc=A&amp;output=embed" frameborder="0" marginwidth="0" marginheight="0" scrolling="no" width="300" height="300"></iframe><br /><small><a style="color: #0000ff; text-align: left;" href="https://maps.google.com.au/maps?f=q&amp;source=embed&amp;hl=en&amp;geocode=&amp;q=14+Aristoc+Road,+Glen+Waverley,+VIC,+3150,+Australia&amp;aq=0&amp;oq=14+Aristoc+Road,+Glen+Waverley,+VIC,+3150,+australi&amp;sll=-37.886319,145.158485&amp;sspn=0.007553,0.010664&amp;ie=UTF8&amp;hq=&amp;hnear=14+Aristoc+Rd,+Glen+Waverley+Victoria+3150&amp;t=m&amp;view=map&amp;ll=-37.886302,145.158491&amp;spn=0.020322,0.025749&amp;z=14&amp;iwloc=A">View Larger Map</a></small></p>',
      'format' => 'hnw_wysiwyg',
    ),
    'use_token' => 0,
  );
  $export['map_au'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'map_nz';
  $ds_field->label = 'Map NZ';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<iframe width="300" height="300" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="http://maps.google.co.nz/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=123+Cryers+Road,+East+Tamaki,+Auckland,+New+Zealand&amp;aq=0&amp;oq=123+Cryers+Road,+East+Tamaki,+Auckland,+N&amp;sll=-41.244772,172.617188&amp;sspn=29.390228,48.427734&amp;ie=UTF8&amp;hq=&amp;hnear=123+Cryers+Rd,+East+Tamaki,+Auckland+2013,+Auckland&amp;t=m&amp;ll=-36.931918,174.894104&amp;spn=0.020583,0.025749&amp;z=14&amp;iwloc=A&amp;output=embed"></iframe><br /><small><a href="http://maps.google.co.nz/maps?f=q&amp;source=embed&amp;hl=en&amp;geocode=&amp;q=123+Cryers+Road,+East+Tamaki,+Auckland,+New+Zealand&amp;aq=0&amp;oq=123+Cryers+Road,+East+Tamaki,+Auckland,+N&amp;sll=-41.244772,172.617188&amp;sspn=29.390228,48.427734&amp;ie=UTF8&amp;hq=&amp;hnear=123+Cryers+Rd,+East+Tamaki,+Auckland+2013,+Auckland&amp;t=m&amp;ll=-36.931918,174.894104&amp;spn=0.020583,0.025749&amp;z=14&amp;iwloc=A" style="color:#0000FF;text-align:left">View Larger Map</a></small>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['map_nz'] = $ds_field;

  return $export;
}
