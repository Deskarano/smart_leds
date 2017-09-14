#ifndef SMART_LEDS_LED_PATTERNS_AMBIENT_H
#define SMART_LEDS_LED_PATTERNS_AMBIENT_H

#include "core.h"

void *new_led_update_ambient_normal_data_t();
void *new_led_update_ambient_gradient_data_t();

void led_update_ambient_normal(led_update_function_data_t *data);
void led_update_ambient_gradient(led_update_function_data_t *data);

#endif //SMART_LEDS_LED_PATTERNS_AMBIENT_H