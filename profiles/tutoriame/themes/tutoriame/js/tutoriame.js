(function($){
  /**
   * Inicializa selectyze en los campos select.
   */
  Drupal.behaviors.selectyze = {
    attach: function(context, settings) {
      jQuery('.formulario, .formulario-expuesto')
        .not('.node-calificacion-form')
        .once('filtros-listados', function() {
          /**
           * Sólo ejecuto Selectyze si el elemento no tiene un padre que también lo ejecutará
           */
          if ($(this).parents('.formulario, .formulario-expuesto').length == 0) {
            jQuery('select', this)
              .not('.shs-enabled')
              .not('.shs-select')
              .Selectyze({
                theme: 'skype'
              });
          }
        })
    }
  };
})(jQuery);
