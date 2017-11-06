<?php
/**
 * @file
 * usuarios.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function usuarios_default_rules_configuration() {
  $items = array();
  $items['rules_aspirante_a_tutor_deshabilitar'] = entity_import('rules_config', '{ "rules_aspirante_a_tutor_deshabilitar" : {
      "LABEL" : "Aspirante a Tutor - Deshabilitar",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "logintoboggan_rules" ],
      "ON" : { "logintoboggan_validated" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [
        { "user_block" : { "account" : [ "account" ] } },
        { "drupal_message" : { "message" : "Tu cuenta debe ser habilitada por un administrador." } },
        { "redirect" : { "url" : "\\u003Cfront\\u003E" } }
      ]
    }
  }');
  $items['rules_rol_emprendedor'] = entity_import('rules_config', '{ "rules_rol_emprendedor" : {
      "LABEL" : "Rol Emprendedor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "ttm_rules" ],
      "ON" : { "ttm_rules_perfil_creado" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "perfil:type:type" ], "value" : "emprendedor" } },
        { "AND" : [
            { "user_has_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "5" : "5" } } } }
          ]
        }
      ],
      "DO" : [
        { "user_remove_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "5" : "5" } } } },
        { "user_add_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "3" : "3" } } } }
      ]
    }
  }');
  $items['rules_rol_tutor_activo'] = entity_import('rules_config', '{ "rules_rol_tutor_activo" : {
      "LABEL" : "Rol Tutor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "ttm_rules" ],
      "ON" : { "ttm_rules_perfil_creado" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "perfil:type:type" ], "value" : "tutor" } },
        { "AND" : [
            { "user_has_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "6" : "6" } } } }
          ]
        }
      ],
      "DO" : [
        { "user_remove_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "6" : "6" } } } },
        { "user_add_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  $items['rules_roles_registro'] = entity_import('rules_config', '{ "rules_roles_registro" : {
      "LABEL" : "aspirante emprendedor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "ttm_rules" ],
      "ON" : { "ttm_rules_perfil_creado" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "perfil:type:type" ], "value" : "main" } },
        { "AND" : [
            { "data_is" : {
                "data" : [ "rol-en-tutoriame:uuid" ],
                "value" : "f0c175d8-6619-4ac5-931b-1cae6fcb093d"
              }
            }
          ]
        },
        { "AND" : [
            { "NOT user_has_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "7" : "7" } } } }
          ]
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  $items['rules_roles_registro_tutor'] = entity_import('rules_config', '{ "rules_roles_registro_tutor" : {
      "LABEL" : "aspirante tutor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "ttm_rules" ],
      "ON" : { "ttm_rules_perfil_creado" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "perfil:type:type" ], "value" : "main" } },
        { "AND" : [
            { "data_is" : {
                "data" : [ "rol-en-tutoriame:uuid" ],
                "value" : "50508538-f697-4d5e-b7a6-27bdc1b2b2e2"
              }
            }
          ]
        },
        { "AND" : [
            { "NOT user_has_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "7" : "7" } } } }
          ]
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  return $items;
}
