#include <Arduino.h>
#include "application_state.h"
#include "screen.h"
#include "tvoc_measurement_service.h"
#include "serial_service.h"

void setup(void) {
    init_serial();
    init_screen();
    init_measurements();

    draw_calibration();
    push_calibration();
}

void loop(void) {
    update_measurements();
    draw_tvoc(tvoc_value);
    push_serial();
}
