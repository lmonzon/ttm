(function ($) {
  Drupal.behaviors.puntos_comprar_page = {
    attach: function(context, settings) {
      jQuery('#puntos-comprar-page').once('form-comprar-puntos', function() {
        jQuery('#edit-puntos').bind('change', function() {
          if ($(this).val() > 0) {
            importe_unitario = parseFloat(jQuery('#importe_unitario').val());

            if (!isNaN(importe_unitario)) {
              jQuery('#edit-importe').val($(this).val() * importe_unitario);
              jQuery('#edit-saldo-final').val(parseInt($(this).val()) + parseInt(jQuery('#edit-saldo-inicial').val()));
            } else {
              jQuery('#edit-puntos').val(0);
              jQuery('#edit-importe').val(0);
              jQuery('#edit-saldo-final').val(jQuery('#edit-saldo-inicial').val());
            }
          } else {
            jQuery('#edit-puntos').val(0);
            jQuery('#edit-importe').val(0);
            jQuery('#edit-saldo-final').val(jQuery('#edit-saldo-inicial').val());
          }
        })
        .change();
      });
    }
  };
})(jQuery);
