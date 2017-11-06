<?php
/**
 * @file
 * avisos_a_los_usuarios.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function avisos_a_los_usuarios_default_rules_configuration() {
  $items = array();
  $items['rules_emprendedor_contrato_aceptado'] = entity_import('rules_config', '{ "rules_emprendedor_contrato_aceptado" : {
      "LABEL" : "Emprendedor - Contrato aceptado",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "ttm_rules" ],
      "ON" : { "ttm_rules_tutor_acepta_contratacion" : [] },
      "DO" : [
        { "ttm_rules_action_mail_aceptacion_contrato" : {
            "tutor" : [ "tutor" ],
            "emprendedor" : [ "emprendedor" ],
            "contrato" : [ "contrato" ],
            "project" : [ "project" ]
          }
        }
      ]
    }
  }');
  $items['rules_emprendedor_contrato_rechazado'] = entity_import('rules_config', '{ "rules_emprendedor_contrato_rechazado" : {
      "LABEL" : "Emprendedor - Contrato rechazado",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "ttm_rules" ],
      "ON" : { "ttm_rules_tutor_rechaza_contratacion" : [] },
      "DO" : [
        { "ttm_rules_action_mail_rechazo_contrato" : {
            "tutor" : [ "tutor" ],
            "emprendedor" : [ "emprendedor" ],
            "contrato" : [ "contrato" ],
            "project" : [ "project" ]
          }
        }
      ]
    }
  }');
  $items['rules_emprendedor_proyecto_creado'] = entity_import('rules_config', '{ "rules_emprendedor_proyecto_creado" : {
      "LABEL" : "Emprendedor - Proyecto creado",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "ttm_rules" ],
      "ON" : { "ttm_rules_proyecto_creado" : [] },
      "DO" : [
        { "ttm_rules_action_mail_proyecto_creado" : { "author" : [ "author" ], "project" : [ "project" ] } }
      ]
    }
  }');
  $items['rules_emprendedor_tutor_declara_inter_s'] = entity_import('rules_config', '{ "rules_emprendedor_tutor_declara_inter_s" : {
      "LABEL" : "Emprendedor - Tutor declara inter\\u00e9s",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "ttm_rules" ],
      "ON" : { "ttm_rules_tutor_declara_interes" : [] },
      "DO" : [
        { "ttm_rules_action_mail_declaracion_interes" : {
            "tutor" : [ "tutor" ],
            "emprendedor" : [ "emprendedor" ],
            "project" : [ "project" ]
          }
        }
      ]
    }
  }');
  $items['rules_proyecto_calificado'] = entity_import('rules_config', '{ "rules_proyecto_calificado" : {
      "LABEL" : "Proyecto Calificado",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "ttm_rules" ],
      "ON" : { "ttm_rules_calificacion_creada" : [] },
      "DO" : [
        { "ttm_rules_action_mail_calificacion_creada" : {
            "tutor" : [ "tutor" ],
            "emprendedor" : [ "emprendedor" ],
            "project" : [ "project" ],
            "calificacion" : [ "calificacion" ]
          }
        }
      ]
    }
  }');
  $items['rules_tutor_nueva_contrataci_n'] = entity_import('rules_config', '{ "rules_tutor_nueva_contrataci_n" : {
      "LABEL" : "Tutor - Nueva contrataci\\u00f3n",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "ttm_rules" ],
      "ON" : { "ttm_rules_contrato_creado" : [] },
      "DO" : [
        { "ttm_rules_action_mail_contratacion" : {
            "tutor" : [ "tutor" ],
            "emprendedor" : [ "emprendedor" ],
            "contrato" : [ "contrato" ],
            "project" : [ "project" ]
          }
        }
      ]
    }
  }');
  $items['uc_cart_emprendedor_compra_de_puntos'] = entity_import('rules_config', '{ "uc_cart_emprendedor_compra_de_puntos" : {
      "LABEL" : "Emprendedor - Compra de puntos",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "ttm_rules", "uc_cart" ],
      "ON" : { "uc_checkout_complete" : [] },
      "DO" : [ { "ttm_rules_action_mail_compra_puntos" : { "order" : [ "order" ] } } ]
    }
  }');
  return $items;
}
