#pragma once

#include <QtWidgets/QWidget>

// This include is autogenerated by the .ui file in the same folder
// The generated version will be names 'ui_<filename>.h'
#include "software/robot_diagnostics/ui/ui_main_widget.h"

/**
 * Sets up slider and line edit linkage and modifies the value as input changes
 * Implements input checking and clamping behaviour
 *
 * @param line_edit QLineEdit to read and modify
 * @param slider QSlider to read and modify
 * @param value_changed_callback callback to call with new values
 * @param min min value for value
 * @param max max value for value
 * @param slider_step_size how much the line_edit value should be scaled up to display on
 * slider
 */
void setupSliderLineEdit(QLineEdit *line_edit, QSlider *slider,
                         std::function<void(double)> value_changed_callback, double min,
                         double max, double slider_step_size);