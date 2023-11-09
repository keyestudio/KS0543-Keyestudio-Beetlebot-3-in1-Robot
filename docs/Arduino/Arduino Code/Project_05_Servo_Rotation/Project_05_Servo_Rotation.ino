//*********************************************************************************
/*
Project 05 Servo Rotation
the plastic arm of the servo will rotate at an angle of 0°, 45°, 90°, 135°, and 180°,repeatly.
*/
#include <Servo.h>
Servo myservo;// define the name of the servo
void setup()
{
myservo.attach(9);// select the pin of the servo(9)
}
void loop()
{
myservo.write(0);// set the rotation angle of the motor
delay(500);
myservo.write(45);// set the rotation angle of the motor
delay(500);
myservo.write(90);// set the rotation angle of the motor
delay(500);
myservo.write(135);// set the rotation angle of the motor
delay(500);
myservo.write(180);// set the rotation angle of the motor
delay(500);
}
//*********************************************************************************
