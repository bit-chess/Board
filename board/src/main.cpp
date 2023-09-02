#include <Arduino.h>
#include <mux.h>
#include <piece.h>
#include <image_board.h>

void setup(void) {
  Serial.begin(115200);
  buildSystem();
}

void loop(void) {
  Serial.println(returnPiece(0));
  delay(100);
}
