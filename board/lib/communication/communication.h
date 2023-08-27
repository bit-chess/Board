#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <WiFi.h>
#include <WiFiClient.h>

const char *ssid = "ESP32_P2P";
const char *password = "password";

WiFiServer server(12345);

void buildCommunication(void);

#endif