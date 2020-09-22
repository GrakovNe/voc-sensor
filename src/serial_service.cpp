#include <HardwareSerial.h>
#include "application_state.h"

char buffer[32];

void push_serial() {
    sprintf(buffer, "TVOC: %d ppb\n", tvoc_value);
    Serial.write(buffer);
    Serial.flush();
}


void push_calibration() {
    sprintf(buffer, "Calibration...\n");
    Serial.write(buffer);
    Serial.flush();
}

void init_serial() {
    Serial.begin(9600);
}