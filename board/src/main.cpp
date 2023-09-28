#include <Arduino.h>
#include <mux.h>
#include <piece.h>
#include <image_board.h>
#include <rxtx_sender.h>

void setup() {
  Serial.begin(115200);
  buildSystem();
  pinMode(13, OUTPUT);
  pinMode(7, INPUT_PULLUP); //switch for which high level system
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  if(!digitalRead(7)) send_board_to_c(updateImageBoard(2));
  else send_board_to_java(updateImageBoard(2));
}
