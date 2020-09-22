#include "tvoc_measurement_service.h"
#include "application_state.h"
#include <lib/FaBoGas_CCS811/FaBoGas_CCS811.h>

FaBoGas faboGas;

void init_measurements() {
    faboGas.begin();
}

void update_measurements() {
    faboGas.setDriveMode(CCS811_MEAS_DRIVE_MODE_1);
    delay(10000);
    tvoc_value = faboGas.getTVOC();
    faboGas.setDriveMode(CCS811_MEAS_DRIVE_MODE_0);
}