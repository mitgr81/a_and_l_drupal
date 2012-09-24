<?php
/**
 * @file
 * ald_alphabetter.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ald_alphabetter_taxonomy_default_vocabularies() {
  return array(
    'letter_type' => array(
      'name' => 'Letter Type',
      'machine_name' => 'letter_type',
      'description' => 'Category of the alphabet to which this letter belongs.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
