#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>


#define WIFI_SSID "JioFiber"
#define WIFI_PASS "thereisnopassword"

#define TRIG_PIN D6
#define ECHO_PIN D7

#define SERVO_PIN D9

long duration;
float distance;

bool current_status = false;

// The led is opposite the HIGH/LOW status, LOW is when the LED turns on

ESP8266WebServer webserver(80);

void handle_root()
{
  webserver.send(200, "text/plain", "WeMos D1 R2 | ESP8266, Visit /on and /off");
}

void turn_on()
{
  digitalWrite(LED_BUILTIN, LOW);
  current_status = false;
  webserver.send(200, "text/plain", "Status: ON");
}

void turn_off()
{
  digitalWrite(LED_BUILTIN, HIGH);
  webserver.send(200, "text/plain", "Status: OFF");
}

void not_found()
{
  Serial.print("NOT FOUND");
  webserver.send(404, "text/plain", "404: function not found");
}

float _get_distance()
{
  // Clears the trigger pin
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin high for 10 microseconds
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  // Reads the echo pin, returns the sound wave travel time in microseconds
  duration = pulseIn(ECHO_PIN, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // cm
  return distance;
}

void distance_handler()
{
  webserver.send(200, "text/plain", String(_get_distance()));
}

void setup()
{
  // Setup serial port
  Serial.begin(115200);
  Serial.println();
  delay(1000);
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
  webserver.on("/distance", distance_handler);
  webserver.onNotFound(not_found);
//  Turn off the led
  digitalWrite(LED_BUILTIN, HIGH);

  // Start the server
  webserver.enableCORS(true);
  webserver.begin();

  // Setup the pins for the sensor
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

}

void loop()
{
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    String incomingString = Serial.readStringUntil('\n');
    if (incomingString == "ON")
    {
      turn_on();
      Serial.println("Status: ON");
    }
    else if (incomingString == "OFF")
    {
      turn_off();
      Serial.println("Status: OFF");
    }
    else if (incomingString == "DIST")
    {
      float _dist = _get_distance();
      Serial.print(_dist);
      Serial.println("cm");
    }
    else
    {
      Serial.print("Recieved Command: ");
      Serial.println(incomingString);
      Serial.println("ERR: Command Not Found");
    }
    
  }
  webserver.handleClient();
  
}
