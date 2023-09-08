#include <Arduino.h>
#include <rxtx_rcv.h>

image_board board;

void setup() {
    Serial.begin(9600);
}

void loop() {
    if(Serial.available()) board = receive_board();
}
