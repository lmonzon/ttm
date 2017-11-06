<?php

/**
 * @file
 * Funciones para obtener los ids correctos de los estados de workflow.
 */

/**
 * Devuelve los workflows a reinsertar en la base para mantener los ids.
 */
function workflows_proyectos_tutoriame_get_workflows() {
  $workflows = array();

  module_load_include('inc', 'workflows_proyectos', 'workflows_proyectos.features');

  $workflowsFeature = workflows_proyectos_default_Workflow();
  if ($workflowsFeature) {
    foreach ($workflowsFeature as $workflowFeature) {
      $workflows[$workflowFeature->wid_original] = array(
        'wid' => $workflowFeature->wid_original,
        'name' => $workflowFeature->name,
        'label' => $workflowFeature->label,
        'status' => 2,
        'module' => '',
        'tab_roles' => serialize($workflowFeature->tab_roles),
        'options' => serialize($workflowFeature->options),
      );
    }
  }
  ksort($workflows);

  return $workflows;
}


/**
 * Devuelve los estados a reinsertar en la base para mantener los ids.
 */
function workflows_proyectos_tutoriame_get_estados() {
  $estados = array();

  module_load_include('inc', 'workflows_proyectos', 'workflows_proyectos.features');

  $workflowsFeature = workflows_proyectos_default_Workflow();
  if ($workflowsFeature) {
    foreach ($workflowsFeature as $workflowFeature) {
      if (
        (!empty($workflowFeature->states)) &&
        (is_array($workflowFeature->states))
      ) {
        foreach ($workflowFeature->states as $stateFeature) {
          $estados[$stateFeature['sid']] = array(
            'sid' => $stateFeature['sid'],
            'wid' => $stateFeature['wid'],
            'name' => $stateFeature['name'],
            'state' => $stateFeature['state'],
            'weight' => $stateFeature['weight'],
            'sysid' => $stateFeature['sysid'],
            'status' => $stateFeature['status'],
          );
        }
      }
    }
  }
  ksort($estados);

  return $estados;
}

/**
 * Devuelve las transiciones a reinsertar en la base para mantener los ids.
 */
function workflows_proyectos_tutoriame_get_transitions() {
  $transitions = array();

  module_load_include('inc', 'workflows_proyectos', 'workflows_proyectos.features');

  $workflowsFeature = workflows_proyectos_default_Workflow();
  if ($workflowsFeature) {
    foreach ($workflowsFeature as $workflowFeature) {
      if (
        (!empty($workflowFeature->transitions)) &&
        (is_array($workflowFeature->transitions))
      ) {
        foreach ($workflowFeature->transitions as $transitionFeature) {
          $transitions[$transitionFeature['tid']] = array(
            'tid' => $transitionFeature['tid'],
            'name' => $transitionFeature['name'],
            'label' => $transitionFeature['label'],
            'sid' => $transitionFeature['sid'],
            'target_sid' => $transitionFeature['target_sid'],
            'roles' => serialize($transitionFeature['roles']),
          );
        }
      }
    }
  }
  ksort($transitions);

  return $transitions;
}

