(function($){
  /**
   * Devuelve un clon del campo de orden del formulario sobre el que se llama.
   */
  $.fn.cloneOrder = function() {
    var form = $(this);
    var order_field = $('#edit-sort-by', form);
    var order_by = $('<select>');
    $('option', order_field).each(function() {
      order_by.append($(this).clone());
    });
    order_by.change(function() {
      order_field.val($(this).val());
      $(form).submit();
    });
    return order_by;
  }

  /**
   * Adjunta el campo de orden order_by arriba del elemento sobre el que se llama.
   */
  $.fn.prependOrder = function(order_by) {
    $('<form>')
      .addClass('formulario')
      .addClass('formulario-orden')
      .append(order_by)
      .prependTo(this);
  }
})(jQuery);
