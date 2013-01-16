<?php

/**
 * @file
 * Rules integration for feedback.
 *
 * @addtogroup rules
 * @{
 */

/**
 * Implementation of hook_rules_event_info().
 */
function feedback_rules_event_info() {
  $defaults = array(
    'group' => t('feedback'),
    'module' => 'feedback',
    'access callback' => 'feedback_rules_integration_access',
  );
  return array(
    'feedback_insert' => $defaults + array(
      'label' => t('After saving new feedback'),
      'variables' => array(
        'feedback' => array('type' => 'feedback', 'label' => t('created feedback')),
      ),
    ),
  );
}

/**
 * Comment integration access callback.
 */
function feedback_rules_integration_access($type, $name) {
  if ($type == 'event' || $type == 'condition') {
    return entity_access('view', 'feedback');
  }
}

/**
 * @}
 */
