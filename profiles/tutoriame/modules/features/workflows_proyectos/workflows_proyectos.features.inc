<?php
/**
 * @file
 * workflows_proyectos.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function workflows_proyectos_default_Workflow() {
  $workflows = array();

  // Exported workflow: '01_flujo_de_proyecto'
  $workflows['01_flujo_de_proyecto'] = entity_import('Workflow', '{
    "name" : "01_flujo_de_proyecto",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-49","sysid":"0","state":"Abierto","status":"1","name":"abierto"},
      "3" : {"sid":"3","wid":"1","weight":"-48","sysid":"0","state":"En curso","status":"1","name":"en_curso"},
      "4" : {"sid":"4","wid":"1","weight":"-47","sysid":"0","state":"Finalizado","status":"1","name":"finalizado"},
      "9" : {"sid":"9","wid":"1","weight":"-46","sysid":"0","state":"Vencido","status":"1","name":"vencido"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"1","target_sid":"2","roles":{"-1":-1},"wid":"1","name":"1_2","label":""},
      "2" : {"tid":"2","sid":"2","target_sid":"2","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"1","name":"2_2","label":""},
      "3" : {"tid":"3","sid":"2","target_sid":"3","roles":{"4":4},"wid":"1","name":"2_3","label":""},
      "4" : {"tid":"4","sid":"2","target_sid":"9","roles":{"-1":-1},"wid":"1","name":"2_9","label":""},
      "5" : {"tid":"5","sid":"3","target_sid":"3","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"1","name":"3_3","label":""},
      "6" : {"tid":"6","sid":"3","target_sid":"4","roles":{"-1":-1},"wid":"1","name":"3_4","label":""},
      "7" : {"tid":"7","sid":"4","target_sid":"4","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"1","name":"4_4","label":""},
      "8" : {"tid":"8","sid":"9","target_sid":"9","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"1","name":"9_9","label":""}
    },
    "label" : "Flujo de proyecto",
    "typeMap" : [],
    "wid_original" : "1",
    "system_roles" : {
      "-1" : "(autor)",
      "8" : "Editor",
      "3" : "Emprendedor",
      "4" : "Tutor",
      "5" : "Aspirante Emprendedor",
      "6" : "Aspirante Tutor",
      "7" : "Institucion",
      "2" : "usuario autenticado",
      "1" : "usuario an\\u00f3nimo"
    }
  }');

  // Exported workflow: '02_flujo_de_contrato'
  $workflows['02_flujo_de_contrato'] = entity_import('Workflow', '{
    "name" : "02_flujo_de_contrato",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "5" : {"sid":"5","wid":"2","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "6" : {"sid":"6","wid":"2","weight":"-49","sysid":"0","state":"Pendiente","status":"1","name":"pendiente"},
      "7" : {"sid":"7","wid":"2","weight":"-48","sysid":"0","state":"Aceptado","status":"1","name":"aceptado"},
      "8" : {"sid":"8","wid":"2","weight":"-47","sysid":"0","state":"Rechazado","status":"1","name":"rechazado"}
    },
    "transitions" : {
      "9" : {"tid":"9","sid":"5","target_sid":"6","roles":{"-1":-1},"wid":"2","name":"5_6","label":""},
      "10" : {"tid":"10","sid":"6","target_sid":"6","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"2","name":"6_6","label":""},
      "11" : {"tid":"11","sid":"6","target_sid":"7","roles":{"4":4},"wid":"2","name":"6_7","label":""},
      "12" : {"tid":"12","sid":"6","target_sid":"8","roles":{"4":4},"wid":"2","name":"6_8","label":""},
      "13" : {"tid":"13","sid":"7","target_sid":"7","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"2","name":"7_7","label":""},
      "14" : {"tid":"14","sid":"8","target_sid":"8","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"2","name":"8_8","label":""}
    },
    "label" : "Flujo de contrato",
    "typeMap" : [],
    "wid_original" : "2",
    "system_roles" : {
      "-1" : "(autor)",
      "8" : "Editor",
      "3" : "Emprendedor",
      "4" : "Tutor",
      "5" : "Aspirante Emprendedor",
      "6" : "Aspirante Tutor",
      "7" : "Institucion",
      "2" : "usuario autenticado",
      "1" : "usuario an\\u00f3nimo"
    }
  }');

  // Exported workflow: '03_flujo_administrativo_de_proyecto'
  $workflows['03_flujo_administrativo_de_proyecto'] = entity_import('Workflow', '{
    "name" : "03_flujo_administrativo_de_proyecto",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "10" : {"sid":"10","wid":"3","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "14" : {"sid":"14","wid":"3","weight":"-19","sysid":"0","state":"Sin movimientos","status":"1","name":"sin_movimientos"},
      "15" : {"sid":"15","wid":"3","weight":"-18","sysid":"0","state":"Pendiente de calificaci\\u00f3n","status":"1","name":"pendiente_de_calificaci_n"},
      "11" : {"sid":"11","wid":"3","weight":"-17","sysid":"0","state":"Calificado","status":"1","name":"calificado"},
      "12" : {"sid":"12","wid":"3","weight":"-16","sysid":"0","state":"Facturado","status":"1","name":"facturado"},
      "13" : {"sid":"13","wid":"3","weight":"-15","sysid":"0","state":"Pagado","status":"1","name":"pagado"}
    },
    "transitions" : {
      "21" : {"tid":"21","sid":"10","target_sid":"14","roles":{"-1":-1},"wid":"3","name":"10_14","label":""},
      "22" : {"tid":"22","sid":"14","target_sid":"14","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"3","name":"14_14","label":""},
      "24" : {"tid":"24","sid":"14","target_sid":"15","roles":{"-1":-1},"wid":"3","name":"14_15","label":""},
      "25" : {"tid":"25","sid":"15","target_sid":"15","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"3","name":"15_15","label":""},
      "26" : {"tid":"26","sid":"15","target_sid":"11","roles":{"3":3,"4":4},"wid":"3","name":"15_11","label":""},
      "16" : {"tid":"16","sid":"11","target_sid":"11","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"3","name":"11_11","label":""},
      "17" : {"tid":"17","sid":"11","target_sid":"12","roles":{"8":8},"wid":"3","name":"11_12","label":""},
      "18" : {"tid":"18","sid":"12","target_sid":"12","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"3","name":"12_12","label":""},
      "19" : {"tid":"19","sid":"12","target_sid":"13","roles":{"8":8},"wid":"3","name":"12_13","label":""},
      "20" : {"tid":"20","sid":"13","target_sid":"13","roles":{"-1":-1,"8":8,"3":3,"4":4},"wid":"3","name":"13_13","label":""}
    },
    "label" : "Flujo Administrativo de Proyecto",
    "typeMap" : [],
    "wid_original" : "3",
    "system_roles" : {
      "-1" : "(autor)",
      "8" : "Editor",
      "3" : "Emprendedor",
      "4" : "Tutor",
      "5" : "Aspirante Emprendedor",
      "6" : "Aspirante Tutor",
      "7" : "Institucion",
      "2" : "usuario autenticado",
      "1" : "usuario an\\u00f3nimo"
    }
  }');

  return $workflows;
}
