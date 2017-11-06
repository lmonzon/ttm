<?php

class fivestar_views_handler_filter_in_operator extends views_handler_filter_in_operator {
  // Get the possible options (the number of stars)
  function get_value_options() {
    if (isset($this->value_options)) {
      return;
    }
    // Get field info
    $field_name = $this->definition['field_name'];
    $field_info = field_info_field($field_name);
    $bundles = reset($field_info['bundles']);
    $entity_type = key($field_info['bundles']);
    $bundle_name = $bundles[0];
    $field_instance = field_info_instance($entity_type, $field_name, $bundle_name);
    // Create options list.
    $max_stars = !empty($field_instance['settings']['stars']) ? $field_instance['settings']['stars'] : 5;
    $options = array(0 => t('No stars'));
    for($i = 1; $i <= $max_stars; $i++) {
      $percentage = ceil($i * 100 / $max_stars);
      $options[$percentage] = format_plural($i, '1 star', '@count stars');
    }
    $this->value_options = $options;
  }

  function op_simple() {
    if (empty($this->value)) {
      return;
    }
    $this->ensure_my_table();

    // Single value selected in filter with operator set to 'in'
    if ($this->operator == 'in' && count($this->value) == 1) {
      // Deal with No Stars filter value.
      if (in_array(0, $this->value)) {
        $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", NULL, 'IS NULL');
      } else {
        $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", array_values($this->value), $this->operator);
      } 
    }

    // Single value selected in filter with operator set to 'not in'
    if ($this->operator == 'not in' && count($this->value) == 1) {
      // Deal with No Stars filter value.
      if (in_array(0, $this->value)) {
        $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", NULL, 'IS NOT NULL');
      } else {
        // Even though No Stars isn't selected, since this is looking for
        // nodes that DON'T include the selected rating, we want to look for
        // nodes rated No Stars, too.
        $this->query->add_where(
          $this->options['group'],
          db_or()
          ->condition("$this->table_alias.$this->real_field", NULL, 'IS NULL')
          ->condition("$this->table_alias.$this->real_field", array_values($this->value), $this->operator)
        );
      }
    }

    // Multiple values selected in filter with operator set to 'in'
    if (count($this->value) > 1 && $this->operator == 'in') {
      // Deal with No Stars filter value.
      if (in_array(0, $this->value)) {
        $this->query->add_where(
          $this->options['group'],
          db_or()
          ->condition("$this->table_alias.$this->real_field", NULL, 'IS NULL')
          ->condition("$this->table_alias.$this->real_field", array_values($this->value), $this->operator)
        );
      } else {
        $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", array_values($this->value), $this->operator);
      }
    }

    // Multiple values selected in filter with operator set to 'not in'
    if (count($this->value) > 1 && $this->operator == 'not in') {
      // Deal with No Stars filter value.
      if (in_array(0, $this->value)) {
        $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", array_values($this->value), $this->operator); 
      } else {
        $this->query->add_where(
          $this->options['group'],
          db_or()
          ->condition("$this->table_alias.$this->real_field", NULL, 'IS NULL')
          ->condition("$this->table_alias.$this->real_field", array_values($this->value), $this->operator)
        );
      }
    }
  }
}
