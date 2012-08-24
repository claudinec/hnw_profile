<?php
/**
 * @file
 * hnw_media.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hnw_media_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_item|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'media_title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'download_as_pdf_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'media_back_button' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|media_item|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hnw_media_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'download_as_pdf_link';
  $ds_field->label = 'Download as PDF link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[node:field_media_pdf]" class="download-as-pdf">Download as PDF</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['download_as_pdf_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'media_back_button';
  $ds_field->label = 'Media back button';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
echo l(t(\'Back\'), \'media\', array(\'attributes\' => array(\'class\' => array(\'back-link\'))));
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['media_back_button'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'media_title';
  $ds_field->label = 'Media title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
$date_object = strtotime($entity->field_media_publication_date[\'und\'][0][\'value\']);
$date = format_date($date_object , \'medium\' , \'jS M Y\');
print $media_title = "<h2>" . $entity->title . ", " . $date . "</h2>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['media_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hnw_media_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_media_image',
        1 => 'field_media_link',
        2 => 'download_as_pdf_link',
      ),
      'right' => array(
        3 => 'media_title',
        4 => 'body',
        5 => 'media_back_button',
      ),
    ),
    'fields' => array(
      'field_media_image' => 'left',
      'field_media_link' => 'left',
      'download_as_pdf_link' => 'left',
      'media_title' => 'right',
      'body' => 'right',
      'media_back_button' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'grid-4' => 'grid-4',
        'alpha' => 'alpha',
      ),
      'right' => array(
        'grid-8' => 'grid-8',
        'alpha' => 'alpha',
        'omega' => 'omega',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|media_item|default'] = $ds_layout;

  return $export;
}
