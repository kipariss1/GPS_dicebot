#include <SoftwareSerial.h>

SoftwareSerial ss(19, 18);

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  } 
}
