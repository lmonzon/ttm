(function ($) {
  /**
   * Separa el campo de orden del resto de los filtros en la búsqueda de tutores.
   */
  Drupal.behaviors.busquedaTutores = {
    attach: function(context, settings) {
      var order_by = $('#views-exposed-form-buscar-tutores-page-1').cloneOrder();
      $('#buscar-tutores-listado').prependOrder(order_by);
    }
  };
})(jQuery);
