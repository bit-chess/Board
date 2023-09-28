#include <Arduino.h>
#include <mux.h>
#include <piece.h>
#include <image_board.h>
#include <rxtx_sender.h>

void setup() {
  Serial.begin(115200);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  delay(50);

  Serial.print("Read data C0 from MUX: ");
  Serial.println(analogRead(A5));
}
