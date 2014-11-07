<?php
/**
 * @file
 * doc2.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function doc2_taxonomy_default_vocabularies() {
  return array(
    'ebo_categories' => array(
      'name' => 'eBO Categories',
      'machine_name' => 'ebo_categories',
      'description' => 'For documentation and videos',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product' => array(
      'name' => 'Product',
      'machine_name' => 'product',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_10' => array(
      'name' => 'eCW Version',
      'machine_name' => 'vocabulary_10',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_11' => array(
      'name' => 'Departments',
      'machine_name' => 'vocabulary_11',
      'description' => 'A way to organize information specific to a department.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_17' => array(
      'name' => 'Tags',
      'machine_name' => 'vocabulary_17',
      'description' => 'Free Tagging',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
