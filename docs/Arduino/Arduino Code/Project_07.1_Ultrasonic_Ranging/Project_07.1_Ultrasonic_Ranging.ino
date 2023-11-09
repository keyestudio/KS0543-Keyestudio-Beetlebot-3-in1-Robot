//**********************************************************************************
/*
Project 07.1 Ultrasonic Ranging
Ultrasonic detection of distance from objects
*/
const int trig = 8;  //Define trig pin to D8
const int echo = 7;  //Define echo pin to D7
int duration = 0;   
int distance = 0; //Define a variable to receive distance
void setup() 
{
  pinMode(trig , OUTPUT); // Define the trig pin as the output mode 
  pinMode(echo , INPUT); // Define the echo pin as the input mode
  Serial.begin(9600); // Set baud rate to 9600
}
void loop()
{
  digitalWrite(trig , HIGH);//the sensor is triggered by a high pulse of 1000 microseconds or more
  delayMicroseconds(1000);
  digitalWrite(trig , LOW); // Give a short low level in advance to ensure a clean high pulse
  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ; //Convert to distance
  Serial.print(distance); // Print the distance in centimeters
  Serial.println("cm");
}
//**********************************************************************************
