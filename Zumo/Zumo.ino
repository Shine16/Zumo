#include <Wire.h>
#include <ZumoShield.h>
#include <Protractor.h>

//Sensors
#include "Sensors.h"

Protractor myProtractor;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

  Wire.begin();
  myProtractor.begin(Wire,69); 

  
initsensors();
initmotors();

beeper(50,500);
beeper(120,1000);
/*
beeperon();
delay(1000);
beeperoff();
delay(500);
beeperon();
delay(1000);
beeperoff();
delay(500);
*/

  delay(500);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);        // turn on LED to indicate we are in calibration mode

  

}

void loop() {
 //readsensors();
 
}
