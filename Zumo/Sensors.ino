


void initsensors(){
  reflectanceSensors.init(pins, 6);
  Serial.println("Sensors initialized");
}

void readsensors(){
  reflectanceSensors.read(sensorValues);
  
  for (byte i = 0; i < NUM_SENSORS; i++)
  {
    Serial.print(sensorValues[i]);
    Serial.print(' ');
  }  Serial.println();
  delay(250);
}
