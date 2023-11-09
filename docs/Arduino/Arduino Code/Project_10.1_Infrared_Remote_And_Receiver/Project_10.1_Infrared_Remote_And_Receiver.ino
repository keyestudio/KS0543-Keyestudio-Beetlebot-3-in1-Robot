//**********************************************************************************
/*
Project 10.1:Infrared remote and receiver
*/
#include <IRremote.h>
int RECV_PIN = 12;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // start receiving signals
}
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // receive the next value
  }
  delay(100);
}
//**********************************************************************************
