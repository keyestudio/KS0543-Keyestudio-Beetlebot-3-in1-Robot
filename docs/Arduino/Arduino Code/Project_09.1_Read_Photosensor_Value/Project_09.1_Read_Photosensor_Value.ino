//*************************************************************************************
/*
Project 09.1:Read Photosensor Value
*/
int sensorPin = A6;    // select the input pin for the photocell
int sensorValue = 0;  // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600);
}
void loop() {
sensorValue = analogRead(sensorPin);  // read the value from the sensor:
Serial.println(sensorValue);  //Serial port prints the value of photoresistor
delay(500);
}
//*************************************************************************************
