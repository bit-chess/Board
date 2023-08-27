#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <mux.h>
#include <communication.h>

void setup(void) {
  Serial.begin(11520);
  buildSystem();
}

void loop(void) {
  
  WiFiClient client = server.available();

  if(client) {
      
    Serial.println("Conexão estabelecida com o Desktop");
    
    while (client.connected()) {
      if (client.available()) {
        String message = client.readStringUntil('\n'); // movimento na notação do xadrez
        Serial.println("Received: " + message);

        // Process the message as needed

        // envia
        client.print("Message received: " + message);
        client.flush();
      }
    }
    
    Serial.println("Conexão perdida");
    
  }

}
