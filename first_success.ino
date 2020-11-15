#include <SoftwareSerial.h>

void setup() {
  Serial.begin(9600);         // Setting the Bode rate for the 0(RX), 1(TX) ports
  Serial1.begin(9600);        // Setting the Bode rate for the 19(RX), 18(TX) ports
}

void loop() {
  if (Serial1.available()) {              // if something is happening on the 19, 18 pins
    Serial.write(Serial1.read());         // read 19, 18 pin and write it on the 0, 1 pins
  } 
}
