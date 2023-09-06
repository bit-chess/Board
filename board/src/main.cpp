#include <Arduino.h>
#include <mux.h>
#include <piece.h>
#include <image_board.h>

void setup(void) {
  Serial.begin(115200);
  buildSystem();
}

void loop(void) {
  //digitalWrite(25, HIGH);

  Serial.println("\n---------First MUX-----------");
  Serial.print("\nS0: ");
  Serial.println(digitalRead(seletor[0][0]));
  Serial.print("S1: ");
  Serial.println(digitalRead(seletor[1][0]));
  Serial.print("S2: ");
  Serial.println(digitalRead(seletor[2][0]));
  Serial.print("S3: ");
  Serial.println(digitalRead(seletor[3][0]));
  Serial.print("Enable pin: ");
  Serial.println(digitalRead(which_mux[0]));
  Serial.print("Piece's analog value: ");
  Serial.println(returnPiece(5));
  Serial.println("----------------------------\n");
  delay(100);
}
