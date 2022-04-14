#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

#define WIFI_SSID "JioFiber"
#define WIFI_PASS "thereisnopassword"

// The led is opposite the HIGH/LOW status, LOW is when the LED turns on


ESP8266WebServer webserver(80);

void handle_root() {
  webserver.send(200, "text/plain", "WeMos D1 R2 | ESP8266, Visit /on and /off");
}

void turn_on() {
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print("ON");
  webserver.send(200, "text/plain", "Status: ON");
}

void turn_off() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("OFF");
  webserver.send(200, "text/plain", "Status: OFF");
}

void not_found() {
  Serial.print("NOT FOUND");
  webserver.send(404, "text/plain", "404: function not found");
}

void setup() {
  // Setup serial port
  Serial.begin(115200);
  Serial.println();
 
  // Begin WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASS);
 
  // Connecting to WiFi...
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);
  // Loop continuously while WiFi is not connected
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print(".");
  }
 
  // Connected to WiFi
  Serial.println();
  Serial.print("Connected! IP address: ");
  Serial.println(WiFi.localIP());

  pinMode(LED_BUILTIN, OUTPUT);

  webserver.on("/", handle_root);
  webserver.on("/on", turn_on);
  webserver.on("/off", turn_off);
  webserver.onNotFound(not_found);
  digitalWrite(LED_BUILTIN, HIGH);

  webserver.begin();
}

 
void loop() {
  // put your main code here, to run repeatedly:
 webserver.handleClient();
}
