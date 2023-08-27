#include <communication.h>
#include <WiFi.h>
#include <WiFiClient.h>

void buildCommunication(void){
    WiFi.softAP(ssid, password);
    server.begin();
}