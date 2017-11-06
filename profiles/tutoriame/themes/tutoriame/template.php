<?php

/**
 * Muestra el menú $menu_name en $column_count columnas.
 *
 * Basado en http://stackoverflow.com/a/9006355, puede mejorar mucho.
 */
function tutoriame_menu_columns($menu_name, $column_count) {
  $menu = menu_tree_all_data($menu_name);
  $links = array();

  foreach($menu as $item){
    $link = $item['link'];
    if (!intval($link['hidden'])) {
      $links[] = l($link['link_title'], $link['link_path'], array('attributes' => array('class' => array('level-1'))));
    }
  }

  $count = 0;
  $column = 1;
  $percolumn = ceil(count($links) / $column_count);
  $output = '';

  foreach($links as $link){
    if ($count == 0) {
      $output .= '<div class="span8 footer-column footer-column-'. $column++ .'"><ul>';
    }
    $output .= '<li>' . $link . '</li>';
    $count++;

    if ($count == $percolumn){
      $output .= '</ul></div>';
      $count = 0;
    }
  }
  return $output;
}

/**
 * Implements hook_form_alter(&$form, &$form_state, $form_id).
 */
function tutoriame_form_user_login_alter(&$form, &$form_state, $form_id) {
  $recover_pass_path = 'user/password';

  $form['remember_me']['#suffix'] = l(t('¿Olvidaste tu contraseña?'), $recover_pass_path, array('attributes' => array('class' => 'user-login-forgot-password')));
  # #5389 Desabilitar el autompletado del password
  $form['pass']['#attributes']['autocomplete'] = "off";
}

/**
 * Implements hook_form_alter(&$form, &$form_state, $form_id).
 */
function tutoriame_form_alter(&$form, &$form_state, $form_id) {
  $form['#attributes']['class'][] = 'formulario';

  switch ($form_id) {
    case 'tutoriame_privatemsg_consultar_page':
      $form['#attributes']['class'][] = 'span25';
      break;
    case 'contrato_node_form':
      $form['#attributes']['class'][] = 'span21';
      break;
    case 'calificacion_node_form':
      $form['#attributes']['class'][] = 'span25';
      break;
    case 'puntos_comprar_page':
      $form['#attributes']['class'][] = 'span50';
      break;
  }
}

/**
 * Displays a quantity.
 *
 * @param $variables
 *   An associative array containing:
 *   - qty: The quantity to display.
 *
 * @ingroup themeable
 */
function tutoriame_uc_qty($variables) {
  return $variables['qty'];
}

/**
 * Formats the cart contents table on the checkout page.
 *
 * @param $variables
 *   An associative array containing:
 *   - show_subtotal: TRUE or FALSE indicating if you want a subtotal row
 *     displayed in the table.
 *   - items: An associative array of cart item information containing:
 *     - qty: Quantity in cart.
 *     - title: Item title.
 *     - price: Item price.
 *     - desc: Item description.
 *
 * @return
 *   The HTML output for the cart review table.
 *
 * @ingroup themeable
 */
function tutoriame_uc_cart_review_table($variables) {
  $items = $variables['items'];
  $show_subtotal = $variables['show_subtotal'];

  $subtotal = 0;

  // Set up table header.
  $header = array(
    array('data' => theme('uc_qty_label'), 'class' => array('qty')),
    array('data' => t('Products'), 'class' => array('products')),
    array('data' => t('Price'), 'class' => array('price')),
  );

  // Set up table rows.
  $display_items = uc_order_product_view_multiple($items);
  if (!empty($display_items['uc_order_product'])) {
    foreach (element_children($display_items['uc_order_product']) as $key) {
      $display_item = $display_items['uc_order_product'][$key];
      $display_item['product']['#markup'] = strip_tags($display_item['product']['#markup']);

      $subtotal += $display_item['total']['#price'];
      $rows[] = array(
        array('data' => $display_item['qty'], 'class' => array('qty')),
        array('data' => $display_item['product'], 'class' => array('products')),
        array('data' => $display_item['total'], 'class' => array('price')),
      );
    }
  }

  // Add the subtotal as the final row.
  if ($show_subtotal) {
    $rows[] = array(
      'data' => array(
        // One cell
        array(
          'data' => array(
            '#theme' => 'uc_price',
            '#prefix' => '<span id="subtotal-title">' . t('Subtotal:') . '</span> ',
            '#price' => $subtotal,
          ),
          // Cell attributes
          'colspan' => 3,
          'class' => array('subtotal'),
        ),
      ),
      // Row attributes
      'class' => array('subtotal'),
    );
  }

  return theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('class' => array('cart-review'))));
}

/**
 * Theme the calendar title
 */
function tutoriame_date_nav_title($params) {
  $granularity = $params['granularity'];
  $view = $params['view'];
  $date_info = $view->date_info;
  $link = (!empty($params['link'])) ? ($params['link']) : (false);
  $format = !empty($params['format']) ? $params['format'] : NULL;
  $format_with_year = variable_get('date_views_' . $granularity . '_format_with_year', 'l, F j, Y');
  $format_without_year = variable_get('date_views_' . $granularity . '_format_without_year', 'l, F j');

  switch ($granularity) {
    case 'year':
      $title = $date_info->year;
      $date_arg = $date_info->year;
      break;
    case 'month':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? $format_with_year : $format_without_year);
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year . '-' . date_pad($date_info->month);
      break;
    case 'day':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? $format_with_year : $format_without_year);
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year . '-' . date_pad($date_info->month) . '-' . date_pad($date_info->day);
      break;
    case 'week':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? $format_with_year : $format_without_year);
      $title = t('Week of @date', array('@date' => date_format_date($date_info->min_date, 'custom', $format)));
      $date_arg = $date_info->year . '-W' . date_pad($date_info->week);
      break;
  }

  if (empty($date_info->mini)) {
    if ($link) {
      // Month navigation titles are used as links in the mini view.
      $attributes = array('title' => t('View full page month'));
      $url = date_pager_url($view, $granularity, $date_arg, TRUE);
      return l($title, $url, array('attributes' => $attributes));
    } else {
      return $title;
    }
  } else {
    return $title;
  }
}

/**
 * Returns HTML for status and/or error messages, grouped by type.
 */
function tutoriame_disable_messages_status_messages($variables) {
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
    'info' => t('Informative message'),
  );

  // Map Drupal message types to their corresponding Bootstrap classes.
  // @see http://twitter.github.com/bootstrap/components.html#alerts
  $status_class = array(
    'status' => 'success',
    'error' => 'error',
    'warning' => 'warning',
    // Not supported, but in theory a module could send any type of message.
    // @see drupal_set_message()
    // @see theme_status_messages()
    'info' => 'info',
  );

  foreach ($variables['messages'] as $type => $messages) {
    $class = (isset($status_class[$type])) ? ' alert-' . $status_class[$type] : '';
    $output .= "<div class=\"alert alert-block$class\">\n";
    $output .= "  <a class=\"close\" data-dismiss=\"alert\" href=\"#\">&times;</a>\n";

    if (!empty($status_heading[$type])) {
      $output .= '<h4 class="element-invisible">' . $status_heading[$type] . "</h4>\n";
    }

    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= array_shift($messages);
    }

    $output .= "</div>\n";
  }
  return $output;
}

