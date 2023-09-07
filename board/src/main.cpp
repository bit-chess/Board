#include <Arduino.h>
#include <mux.h>
#include <piece.h>
#include <image_board.h>

void setup() {
  Serial.begin(9600);
  buildSystem();
}

void loop() {
  char **board = updateImageBoard();
}
