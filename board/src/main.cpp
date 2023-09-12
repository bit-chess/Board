#include <Arduino.h>
#include <mux.h>
#include <piece.h>
#include <image_board.h>
#include <rxtx_sender.h>

void setup() {
  Serial.begin(115200);
  buildSystem();
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  send_board(updateImageBoard(1));
}
