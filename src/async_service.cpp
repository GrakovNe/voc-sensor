#include <lib/MsTimer2/MsTimer2.h>
#include "async_service.h"
#include "application_state.h"
#include "tvoc_measurement_service.h"
#include "screen.h"

void on_reccurence() {
    update_measurements();
}

void init_async() {
    MsTimer2::set(1000, on_reccurence);
    MsTimer2::start();
}