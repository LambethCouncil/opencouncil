<?php
/**
 * @file
 * feature_points_of_interest_views_and_context.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_points_of_interest_views_and_context_taxonomy_default_vocabularies() {
  return array(
    'points_of_interest' => array(
      'name' => 'Points of Interest',
      'machine_name' => 'points_of_interest',
      'description' => '',
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
