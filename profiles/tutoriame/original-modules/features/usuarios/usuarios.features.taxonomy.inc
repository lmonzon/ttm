<?php
/**
 * @file
 * usuarios.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function usuarios_taxonomy_default_vocabularies() {
  return array(
    'banco' => array(
      'name' => 'Banco',
      'machine_name' => 'banco',
      'description' => 'Vocabulario con opciones para campo Banco en perfiles',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'dotaci_n_de_la_empresa' => array(
      'name' => 'Dotación de la empresa',
      'machine_name' => 'dotaci_n_de_la_empresa',
      'description' => 'Vocabulario con opciones para campo Dotación de la emprensa en perfil emprendedor',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'formacion_institucion' => array(
      'name' => 'Formación Institución',
      'machine_name' => 'formacion_institucion',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'forums' => array(
      'name' => 'Foros',
      'machine_name' => 'forums',
      'description' => 'Vocabulario de navegación de foro',
      'hierarchy' => 1,
      'module' => 'forum',
      'weight' => -10,
    ),
    'habilidades' => array(
      'name' => 'Habilidades',
      'machine_name' => 'habilidades',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'medio_conoci_tutoriame' => array(
      'name' => 'Medio conoció  Experto Online',
      'machine_name' => 'medio_conoci_tutoriame',
      'description' => 'Vocabulario con opciones para campo Medio a través del cual conoció  Experto Online emprendedor',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ramo_o_actividad' => array(
      'name' => 'Ramo o actividad',
      'machine_name' => 'ramo_o_actividad',
      'description' => 'Vocabulario con opciones para campo Ramo o actividad en perfil emprendedor',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'responsabilidad_ante_el_iva' => array(
      'name' => 'Responsabilidad ante el IVA',
      'machine_name' => 'responsabilidad_ante_el_iva',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'rol_en_tutoriame' => array(
      'name' => 'Rol en  Experto Online',
      'machine_name' => 'rol_en_tutoriame',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tipo_de_cuenta' => array(
      'name' => 'Tipo de cuenta',
      'machine_name' => 'tipo_de_cuenta',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tipo_de_documento' => array(
      'name' => 'Tipo de documento',
      'machine_name' => 'tipo_de_documento',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tutorias_categorias' => array(
      'name' => 'Tutorías Categorías',
      'machine_name' => 'tutorias_categorias',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
