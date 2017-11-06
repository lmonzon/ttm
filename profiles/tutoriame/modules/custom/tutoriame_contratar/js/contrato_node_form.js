(function ($) {
  Drupal.behaviors.tutoriame_contratar_contrato_node_form = {
    attach: function(context, settings) {
      jQuery('#contrato-node-form').once('form-contrato', function() {
        jQuery('#edit-field-proyecto-und').bind('change', function() {
          if (jQuery('#edit-field-tutor-und').is('select')) {
            if (jQuery(this).val() > 0) {
              textoOpcion = Drupal.t('Selecciona un tutor');
            } else {
              textoOpcion = Drupal.t('Selecciona un proyecto');
            }
            jQuery('option', '#edit-field-tutor-und').remove();
            jQuery('#edit-field-tutor-und')
              .append(
                jQuery('<option />')
                  .val('_none')
                  .html(textoOpcion)
              );

            $proyectos = Drupal.settings.tutoriame_contratar.proyectos;
            if (typeof($proyectos[jQuery(this).val()]) != 'undefined') {
              jQuery.each($proyectos[jQuery(this).val()].tutores, function(index, idTutor) {
                $tutores = Drupal.settings.tutoriame_contratar.tutores;

                if (typeof($tutores[idTutor]) != 'undefined') {
                  jQuery('#edit-field-tutor-und')
                    .append(
                      jQuery('<option />')
                        .val($tutores[idTutor].uid)
                        .html($tutores[idTutor].name)
                    );
                }
              });
            }
            if (jQuery().Selectyze) {
              $contenedorSelectyze = jQuery('#edit-field-tutor-und')
                                      .siblings('.DivSelectyze');
              if ($contenedorSelectyze.length > 0) {
                $contenedorSelectyze
                  .remove();
              jQuery('#edit-field-tutor-und')
                .Selectyze({
                  theme: 'skype'
                });
              }
            }
          }

          tutoriame_contratar_actualizar_puntos();
        });

        jQuery('#edit-field-tutor-und').bind('change', tutoriame_contratar_actualizar_puntos);
        jQuery('#edit-field-horas-acordadas-und-0-value').bind('keyup', tutoriame_contratar_actualizar_puntos);

        jQuery('#edit-field-proyecto-und').change();
      });
    }
  };
})(jQuery);

function tutoriame_contratar_actualizar_puntos(evento) {
  $proyectos = Drupal.settings.tutoriame_contratar.proyectos;
  $tutores = Drupal.settings.tutoriame_contratar.tutores;

  idProyecto = jQuery('#edit-field-proyecto-und').val();
  idTutor = jQuery('#edit-field-tutor-und').val();
  horas = parseInt(jQuery('#edit-field-horas-acordadas-und-0-value').val());

  presupuesto = puntos = 0;
  if (typeof(evento) != 'undefined') {
    Drupal.remove_message('error');
  }

  if (
    (typeof($proyectos[idProyecto]) != 'undefined') &&
    (typeof($tutores[idTutor]) != 'undefined') &&
    (!isNaN(horas))
  ) {
    presupuesto = parseInt($proyectos[idProyecto].presupuesto);
    tarifa = parseInt($tutores[idTutor].tarifa);

    if (
      (!isNaN(presupuesto)) &&
      (!isNaN(tarifa))
    ) {
      puntos = tarifa * horas;
    }
  }

  jQuery('#edit-field-puntos-und-0-value').val(puntos);
  if (
     (presupuesto > 0) &&
     (presupuesto < puntos)
  ) {
    Drupal.set_message(Drupal.t('Los puntos necesarios para las horas ingresadas superan el presupuesto del proyecto.'), 'error');
  } else {
    Drupal.remove_message('error');
  }
}


Drupal.set_message = function(message, type) {
  var types = ['status', 'warning', 'error'];
  var contenedor = '.pane-pane-messages .pane-content';
  if (Drupal.settings.form_contrato) {
    contenedor = Drupal.settings.form_contrato.msg_container;
  }

  if ((!type) || (jQuery.inArray(type, types) == -1)) {
    type = 'status';
  }

  if (jQuery(contenedor + ' div.alert-block.alert-' + type + ' ul li').length) {
    var $container_messages = jQuery('#top-header div.alert-block.alert-' + type + ' ul');
    var message = jQuery('<li />')
                    .html(message);
  } else {
    var $container_messages = jQuery(contenedor);
    var message = jQuery('<div />')
                    .addClass('alert alert-block alert-' + type)
                    .append(
                      jQuery('<ul />')
                        .append(
                          jQuery('<li />')
                            .html(message)
                        )
                    );
  }

  $container_messages.prepend(message);
}

Drupal.remove_message = function(type) {
  var types = ['status', 'warning', 'error'];
  var contenedor = '.pane-pane-messages .pane-content';
  if (Drupal.settings.form_contrato) {
    contenedor = Drupal.settings.form_contrato.msg_container;
  }

  if ((!type) || (jQuery.inArray(type, types) == -1)) {
    type = 'status';
  }

  jQuery(contenedor + ' div.alert-block.alert-' + type).remove();
}
