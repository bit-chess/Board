#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <mux.h>

const char *ssid_ = "ESP32_P2P";
const char *password_ = "password";
WiFiServer server(12345);

void setup(void) {
  Serial.begin(11520);
  buildSystem();

  WiFi.softAP(ssid_, password_);
  server.begin();
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
