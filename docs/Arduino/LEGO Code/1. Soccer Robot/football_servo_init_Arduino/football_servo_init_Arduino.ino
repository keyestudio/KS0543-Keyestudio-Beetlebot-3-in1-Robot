#include <Servo.h>
Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(A0);  // attaches the servo on pin A0 to the servo object
}

void loop() {
  myservo.write(180);  // tell servo to go to position
}
