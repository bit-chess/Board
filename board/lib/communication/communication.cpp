#include <communication.h>
#include <WiFi.h>
#include <WiFiClient.h>

WiFiServer server(12345);

void buildCommunication(void){
    WiFi.softAP(ssid, password);
    server.begin();
}