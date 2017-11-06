<?php

function tutoriame_plantillas_admin_settings() {
  $form = array();

  $form['settings'] = array(
    '#type' => 'vertical_tabs',
  );

  $configs = array(
    'pm_email_notify' => array(
      'function' => 'pm_email_notify_form_privatemsg_admin_settings_alter',
      'form_alter' => true,
      'options' => array(
        'pm_email_notify' => array(
          'exclude' => array(
            'privatemsg_setting_email_notify_level',
            'privatemsg_setting_email_notify_only_user',
            'pm_email_notify_from',
            'privatemsg_setting_show_sender_mail',
          ),
        ),
      ),
    ),
    'tutoriame_privatemsg' => array(
      'file' => 'tutoriame_privatemsg.admin',
      'function' => 'tutoriame_privatemsg_admin_settings',
      'options' => array(
        'cron:reminders' => array(
          'exclude' => array(
            'tutoriame_privatemsg_reminders',
            'tutoriame_privatemsg_reminders_interval',
          ),
        ),
      ),
    ),
    'user' => array(
      'file' => 'user.admin',
      'function' => 'user_admin_settings',
      'options' => array(
        'email_admin_created' => array(
          'exclude' => array(),
        ),
        'email_pending_approval' => array(
          'exclude' => array(),
        ),
        'email_no_approval_required' => array(
          'exclude' => array(),
        ),
        'email_password_reset' => array(
          'exclude' => array(),
        ),
        'email_activated' => array(
          'exclude' => array(
            'user_mail_status_activated_notify',
          ),
        ),
        'email_blocked' => array(
          'exclude' => array(
            'user_mail_status_blocked_notify',
          ),
        ),
        'email_cancel_confirm' => array(
          'exclude' => array(),
        ),
        'email_canceled' => array(
          'exclude' => array(
            'user_mail_status_canceled_notify',
          ),
        ),
      ),
    ),
    'ttm_rules' => array(
      'file' => 'ttm_rules.admin',
      'function' => 'ttm_rules_admin_settings',
      'options' => array(
        'proyecto_creado' => array(
          'exclude' => array(),
        ),
        'declaracion_interes' => array(
          'exclude' => array(),
        ),
        'contratacion' => array(
          'exclude' => array(),
        ),
        'aceptacion_contrato' => array(
          'exclude' => array(),
        ),
        'rechazo_contrato' => array(
          'exclude' => array(),
        ),
        'calificacion_creada' => array(
          'exclude' => array(),
        ),
        'compra_puntos' => array(
          'exclude' => array(),
        ),
      ),
    ),
  );

  $use_tokens = false;
  $weight = 0;
  foreach ($configs as $module => $config) {
    if (!empty($config['file'])) {
      module_load_include('inc', $module, $config['file']);
    }

    if (
      (!empty($config['function'])) &&
      (function_exists($config['function']))
    ) {
      if (!empty($config['form_alter'])) {
        $module_form = $module_form_state = array();
        $module_form_id = '';
        call_user_func_array($config['function'], array(&$module_form, &$module_form_state, $module_form_id));
      } else {
        $module_form = call_user_func($config['function']);
      }

      if (
        (!empty($module_form)) &&
        (!empty($config['options'])) &&
        (is_array($config['options']))
      ) {
        foreach ($config['options'] as $options => $fields) {
          $module_options = explode(':', $options);

          $module_options_form = $module_form;
          foreach ($module_options as $option) {
            if (isset($module_options_form[$option])) {
              $module_options_form = $module_options_form[$option];
            }
          }

          if (!empty($fields['exclude'])) {
            foreach ($fields['exclude'] as $field) {
              unset($module_options_form[$field]);
            }
          }

          if (array_key_exists('token', $module_options_form)) {
            unset($module_options_form['token']);
            $use_tokens = true;
          }

          $module_options_form['#group'] = 'settings';
          $module_options_form['#weight'] = $weight;

          $form[$module . '_' . $options] = $module_options_form;

          $weight++;
        }
      }
    }
  }

  if (
    ($use_tokens) &&
    (module_exists('token'))
  ) {
    $form['token'] = array(
      '#type' => 'fieldset',
      '#title' => t('Token browser'),
    );
    $form['token']['browser'] = array(
      '#theme' => 'token_tree',
      '#token_types' => array(
        'privatemsg_message',
        'ttm_rules',
        'uc_order',
      ),
    );
  }

  $form['#submit'][] = 'tutoriame_plantillas_admin_settings_submit';

  return system_settings_form($form);
}

function tutoriame_plantillas_admin_settings_submit() {
  drupal_theme_rebuild();
}

