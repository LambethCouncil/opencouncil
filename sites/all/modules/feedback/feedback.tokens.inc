<?php

/**
 * @file
 * Builds placeholder replacement tokens for feedback-related data.
 */

/**
 * Implements hook_token_info().
 */
function feedback_token_info() {
  $type = array(
    'name' => t('Feedback'),
    'description' => t('Tokens for feedback posted on the site.'),
    'needs-data' => 'feedback',
  );

  $feedback['location_masked'] = array(
    'name' => t("Location"),
    'description' => t("The location where feedback was submitted."),
  );
  $feedback['url'] = array(
    'name' => t("URL"),
    'description' => t("The URL where feedback was submitted."),
  );
  $feedback['useragent'] = array(
    'name' => t("User agent"),
    'description' => t("The user agent string."),
  );
  $feedback['message'] = array(
    'name' => t("Message"),
    'description' => t("The message submitted."),
  );
  
  return array(
    'types' => array('feedback' => $type),
    'tokens' => array(
      'feedback' => $feedback,
    ),
  );
}

/**
 * Implements hook_tokens().
 */
function feedback_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }
  $sanitize = !empty($options['sanitize']);

  $replacements = array();

  if ($type == 'feedback' && !empty($data['feedback'])) {
    $feedback = $data['feedback'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'uid':
          $replacements[$original] = $feedback->uid;
          break;

        case 'url':
          $replacements[$original] = $feedback->url;
          break;

        case 'location_masked':
          $replacements[$original] = $feedback->location_masked;
          break;

        case 'useragent':
          $replacements[$original] = $feedback->useragent;
          break;

        case 'message':
          $replacements[$original] = $feedback->message;
          break;
      }
    }
  } 
  
  return $replacements;
}
