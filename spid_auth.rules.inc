<?php

/**
 * @file
 * Integration with Rules module.
 */

/**
 * Implementation of hook_rules_event_info().
 * @ingroup rules
 */
function spid_auth_rules_event_info() {
  $defaults = array(
    'group' => t('User'),
    'module' => 'spid_auth',
  );
 
  return array(
    'spid_auth_rules_event_register' => $defaults + array(
      'label' => t('Dopo aver registrato un nuovo utente via SPID'),
      'group' => t('User'),
      'variables' => array(
        'user' => array('type' => 'user', 'label' => t('Utente autenticato')),
      ),
    ),
    'spid_auth_rules_event_login' => $defaults + array(
      'label' => t('Un utente si è autenticato con SPID'),
      'group' => t('User'),
      'variables' => array(
        'user' => array('type' => 'user', 'label' => t('User')),
      ),
    ),
  );
}