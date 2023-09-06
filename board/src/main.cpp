#include <Arduino.h>
#include <mux.h>
#include <piece.h>

void setup() {
  Serial.begin(9600);
  buildSystem();
}

void loop() {
  Serial.println(analogToRepresentationPiece(returnPiece(0)));
}
