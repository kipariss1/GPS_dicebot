#include <TinyGPS++.h>

int SerialBaud = 9600;

TinyGPSPlus gps;          // TinyGPS++ object

void setup() {
  Serial.begin(SerialBaud);         // Setting the Bode rate for the 0(RX), 1(TX) ports
  Serial1.begin(SerialBaud);        // Setting the Bode rate for the 19(RX), 18(TX) ports
}

void loop() {
  if (Serial1.available()){                       // Checking if there is something on 19, 18 pins 
    gps.encode(Serial1.read());                   // Encoding raw gps data with gps object 
    if (gps.location.isUpdated()){                // Checking if location is updated 
      Serial.print("Latitude = ");                
      Serial.println(gps.location.lat(), 6);      // Printing the lattitude 
      Serial.print("Longtitude = ");
      Serial.println(gps.location.lng(), 6);      // Printing the longtitude 
    }
  } 
}
