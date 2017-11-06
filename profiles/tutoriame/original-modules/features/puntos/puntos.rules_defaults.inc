<?php
/**
 * @file
 * puntos.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function puntos_default_rules_configuration() {
  $items = array();
  $items['rules_actualizar_estado_del_pedido_al_pago_completo_cloned_'] = entity_import('rules_config', '{ "rules_actualizar_estado_del_pedido_al_pago_completo_cloned_" : {
      "LABEL" : "Actualizar estado del pedido al pago completo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "uc_payment", "uc_order" ],
      "ON" : { "uc_payment_entered" : [] },
      "IF" : [
        { "uc_payment_condition_order_balance" : { "order" : [ "order" ], "balance_comparison" : "less_equal" } },
        { "OR" : [
            { "uc_order_condition_order_state" : { "order" : [ "order" ], "order_state" : "in_checkout" } },
            { "uc_order_condition_order_state" : { "order" : [ "order" ], "order_state" : "post_checkout" } }
          ]
        }
      ],
      "DO" : [
        { "uc_order_update_status" : { "order" : [ "order" ], "order_status" : "completed" } }
      ]
    }
  }');
  return $items;
}
