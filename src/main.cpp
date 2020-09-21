#include <Arduino.h>
#include "application_state.h"
#include "screen.h"
#include "tvoc_measurement_service.h"
#include "async_service.h"
#include "serial_service.h"

void setup(void) {
    init_screen();
    init_serial();
    init_async();
}

void loop(void) {
    static int previous_tvoc_value;

    if (previous_tvoc_value != tvoc_value) {
        draw_tvoc(tvoc_value);
        push_serial();
    }

    previous_tvoc_value = tvoc_value;
    delay(5000);
}
