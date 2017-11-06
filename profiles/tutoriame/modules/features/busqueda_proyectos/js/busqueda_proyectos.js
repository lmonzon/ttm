(function ($) {
  /**
   * Separa el campo de orden del resto de los filtros en la búsqueda de proyectos.
   */
  Drupal.behaviors.busquedaProyectos = {
    attach: function(context, settings) {
      var order_by = $('#views-exposed-form-buscar-proyectos-page-1').cloneOrder();
      $('#buscar-proyectos-listado').prependOrder(order_by);
    }
  };
})(jQuery);
