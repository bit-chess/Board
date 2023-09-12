#include <Arduino.h>
#include <mux.h>
#include <piece.h>
#include <image_board.h>

void setup() {
  Serial.begin(115200);
  buildSystem();
}

void loop() {
  char **board = updateImageBoard(1);
}
