//**********************************************************************************
/*
Project 11.3_2_Wifi_Multi_Function
*/
#include<music.h>

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel rgb_display_A3 = Adafruit_NeoPixel(4,A3,NEO_GRB + NEO_KHZ800);
#include <Servo.h>
Servo lgservo;
Servo u_servo;
#include <ks_Matrix.h>
uint8_t  LEDArray[8];
uint8_t matrix_smile[8]={0x42, 0xa5, 0xa5, 0x00, 0x00, 0x24, 0x18, 0x00};
uint8_t matrix_front[8]={0x18, 0x3c, 0x5a, 0x99, 0x18, 0x18, 0x18, 0x18};
uint8_t matrix_back[8]={0x18, 0x18, 0x18, 0x18, 0x99, 0x5a, 0x3c, 0x18};
uint8_t matrix_left[8]={0x08, 0x04, 0x02, 0xff, 0xff, 0x02, 0x04, 0x08};
uint8_t matrix_right[8]={0x10, 0x20, 0x40, 0xff, 0xff, 0x40, 0x20, 0x10};
uint8_t matrix_stop[8]={0xff, 0x81, 0xbd, 0xa5, 0xa5, 0xbd, 0x81, 0xff};
uint8_t matrix_tsundere[8]={0x00, 0xf7, 0x00, 0x08, 0x14, 0x20, 0x00, 0x00};
uint8_t matrix_squinting[8]={0x00, 0x41, 0x22, 0x14, 0x22, 0x41, 0x1c, 0x00};
uint8_t matrix_despise1[8]={0x00, 0x11, 0x77, 0x00, 0x1c, 0x00, 0x00, 0x00};
uint8_t matrix_speechless[8]={0x00, 0x77, 0x00, 0x1c, 0x14, 0x1c, 0x00, 0x00};
uint8_t matrix_heart[8]={0x00, 0x66, 0x99, 0x81, 0x81, 0x42, 0x24, 0x18};
uint8_t matrix_clear[8]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

#define ML 4
#define ML_PWM 6
#define MR 2
#define MR_PWM 5
#define buz 3
#define Echo 7
#define Trig 8
#define servo1 9
#define trackL 11
#define trackR 10
#define ir 12
#define neo A3
#define servo2 A0

char val;
char wifiData;
int ip_flag = 1;
int neo_flag=0;

music Music(buz);

Matrix myMatrix(A4,A5);
int matrix_flag;
boolean face1_flag = 0;
boolean face2_flag = 0;
int face_count=0;

boolean neo_state = 0;
String left_str,right_str;
int left_val=255;
int right_val=255;

void setup() {
  Serial.begin(9600);
  pinMode(ML, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  pinMode(buz, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(Trig, OUTPUT);
  pinMode(trackL, INPUT);
  pinMode(trackR, INPUT);
  pinMode(ir, INPUT);

  rgb_display_A3.begin();
  lgservo.attach(A0);
  lgservo.write(180);
  u_servo.attach(9);
  u_servo.write(90);
  delay(300);

  myMatrix.begin(112);
  myMatrix.clear();
  matrix_display(matrix_smile);
  delay(100);
}

void loop() {
  if(Serial.available() > 0)
  {
    val = Serial.read();
    Serial.print(val);
    if(val == 'u')
    {
      Serial.println("left speed : ");
      left_str = Serial.readStringUntil('#');
      left_val = String(left_str).toInt();
      Serial.println(left_val);
    }
    if(val == 'v')
    {
      Serial.println("right speed : ");
      right_str = Serial.readStringUntil('#');
      right_val = String(right_str).toInt();
      Serial.println(right_val);
    }
  }
  switch(val)
  {
    case 'F': car_forward(); break;
    case 'B': car_back(); break;
    case 'L': car_left(); break;
    case 'R': car_right(); break;
    case 'S': car_stop(); break;
    case 'a': tone(buz, 294); delay(200); break;
    case 'b': noTone(buz); break;
    case 'c': Music.birthday(); break;
    case 'd': noTone(buz); break;
    case 'e': func_neo1(); break;
    case 'f': neo_stop(); break;
    case 'g': func_neo2(); break;
    case 'z': neo_state = 0; break;
    case 'i': face1(); break;
    case 'j': face_stop(); break;
    case 'k': face2(); break;
    case 'y': face1_flag=0; break;
    case 'l': tracking(); break;
    case 'm': avoid(); break;
    case 'n': followLightCar(); break;
    case 'o': followCar(); break;
  }
}


void followLightCar()
{
  int lightL = analogRead(A6);
  int lightR = analogRead(A7);
  Serial.print(lightL);
  Serial.print("  ");
  Serial.println(lightR);
  if((lightL > 500) && (lightR > 500))
  {
    digitalWrite(ML,LOW);
    analogWrite(ML_PWM,150);
    digitalWrite(MR,LOW);
    analogWrite(MR_PWM,150);
  }
  else if((lightL > 500) && (lightR <= 500))
  {
    car_left();
  }
  else if((lightL <= 500) && (lightR > 500))
  {
    car_right();
  }
  else
  {
    car_stop();
  }
}

void followCar()
{
  int distance = checkdistance();
  Serial.print("distance = ");
  Serial.println(distance);
  if((distance > 10) && (distance < 35))
  {
    digitalWrite(ML,LOW);
    analogWrite(ML_PWM,150);
    digitalWrite(MR,LOW);
    analogWrite(MR_PWM,150);
  }
  else if((distance > 6) && (distance <= 10))
  {
    car_stop();
  }
  else if(distance <= 6)
  {
    digitalWrite(ML,HIGH);
    analogWrite(ML_PWM,100);
    digitalWrite(MR,HIGH);
    analogWrite(MR_PWM,100);
  }
  else
  {
    car_stop();
  }
  
}

void avoid()
{
  int distance = checkdistance();
  Serial.print("distance = ");
  Serial.println(distance);
  if(distance <= 8)
  {
    car_stop();
    delay(300);
    u_servo.write(180);
    delay(500);
    int distanceL = checkdistance();
    delay(50);
    u_servo.write(0);
    delay(600);
    int distanceR = checkdistance();
    delay(50);
    if(distanceL > distanceR)
    {
      car_left();
      u_servo.write(90);
      delay(400);
    }
    else
    {
      car_right();
      u_servo.write(90);
      delay(400);
    }
  }
  else
  {
    digitalWrite(ML,LOW);
    analogWrite(ML_PWM,150);
    digitalWrite(MR,LOW);
    analogWrite(MR_PWM,150);
  }
}

float checkdistance() {
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  float distance = pulseIn(Echo, HIGH) / 58.00;
  delay(10);
  return distance;
}

void tracking()
{
  boolean trackL_val = digitalRead(trackL);
  boolean trackR_val = digitalRead(trackR);
  Serial.print(trackL_val);
  Serial.print("  ");
  Serial.println(trackR_val);
  if((trackL_val == 1) && (trackR_val == 1))
  {
    digitalWrite(ML,LOW);
    analogWrite(ML_PWM,120);
    digitalWrite(MR,LOW);
    analogWrite(MR_PWM,120);
  }
  else if((trackL_val == 1) && (trackR_val == 0))
  {
    digitalWrite(ML,HIGH);
    analogWrite(ML_PWM,150);
    digitalWrite(MR,LOW);
    analogWrite(MR_PWM,150);
  }
  else if((trackL_val == 0) && (trackR_val == 1))
  {
    digitalWrite(ML,LOW);
    analogWrite(ML_PWM,150);
    digitalWrite(MR,HIGH);
    analogWrite(MR_PWM,150);
  }
  else
  {
    car_stop();
  }
}

void face1()
{
  if(face1_flag==0){
    matrix_flag = 1;
  }
  if(matrix_flag == 1)
  {
    face_count++;
    if(face_count == 6)
    {
      face_count = 6;
    }
    matrix_flag = 0;
    face1_flag = 1;
  }
  switch(face_count)
  {
    case 1: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_smile); break;
    case 2: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_tsundere); break;
    case 3: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_squinting); break;
    case 4: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_despise1); break;
    case 5: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_speechless); break;
    case 6: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_heart); break;
  }
}

void face_stop()
{
  myMatrix.clear();myMatrix.writeDisplay();
}

void face2()
{
  if(face1_flag==0){
    matrix_flag = 1;
  }
  if(matrix_flag == 1)
  {
    face_count--;
    if(face_count == 1)
    {
      face_count = 1;
    }
    matrix_flag = 0;
    face1_flag = 1;
  }
  switch(face_count)
  {
    case 1: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_smile); break;
    case 2: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_tsundere); break;
    case 3: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_squinting); break;
    case 4: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_despise1); break;
    case 5: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_speechless); break;
    case 6: myMatrix.clear();myMatrix.writeDisplay();matrix_display(matrix_heart); break;
  }
}

int matrix_display(uint8_t led_array[8]){
  for(int i=0; i<8; i++)
  {
    LEDArray[i]=led_array[i];
    for(int j=7; j>=0; j--)
    {
      if((LEDArray[i]&0x01)>0)
      myMatrix.drawPixel(j, i,1);
      LEDArray[i] = LEDArray[i]>>1;
    }
  }
  myMatrix.writeDisplay();  // dot matrix shows
}


void func_neo1()
{
  if(neo_state == 0)
  {
    neo_flag++;
    neo_state = 1;
  }
  if(neo_flag >= 6)
  {
    neo_flag = 6;
  }
  switch(neo_flag)
  {
    case 1: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((100 & 0xffffff) << 16) | ((0 & 0xffffff) << 8) | 0));rgb_display_A3.show();
    }
    break;
    case 2: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((0 & 0xffffff) << 16) | ((100 & 0xffffff) << 8) | 0));rgb_display_A3.show();
    }
    break;
    case 3: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((0 & 0xffffff) << 16) | ((0 & 0xffffff) << 8) | 100));rgb_display_A3.show();
    }
    break;
    case 4: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((100 & 0xffffff) << 16) | ((100 & 0xffffff) << 8) | 0));rgb_display_A3.show();
    }
    break;
    case 5: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((0 & 0xffffff) << 16) | ((100 & 0xffffff) << 8) | 100));rgb_display_A3.show();
    }
    break;
    case 6: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((100 & 0xffffff) << 16) | ((100 & 0xffffff) << 8) | 100));rgb_display_A3.show();
    }
    break;
  }
  
}

void func_neo2()
{
  if(neo_state == 0)
  {
    neo_flag--;
    neo_state = 1;
  }
  if(neo_flag <= 1)
  {
    neo_flag = 1;
  }
  switch(neo_flag)
  {
    case 1: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((100 & 0xffffff) << 16) | ((0 & 0xffffff) << 8) | 0));rgb_display_A3.show();
    }
    break;
    case 2: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((0 & 0xffffff) << 16) | ((100 & 0xffffff) << 8) | 0)); rgb_display_A3.show();
    }
    break;
    case 3: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((0 & 0xffffff) << 16) | ((0 & 0xffffff) << 8) | 100)); rgb_display_A3.show();
    }
    break;
    case 4: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((100 & 0xffffff) << 16) | ((100 & 0xffffff) << 8) | 0));rgb_display_A3.show();
    }
    break;
    case 5: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((0 & 0xffffff) << 16) | ((100 & 0xffffff) << 8) | 100)); rgb_display_A3.show();
    }
    break;
    case 6: for (int i = 1; i <= 4; i = i + (1)) {
      rgb_display_A3.setPixelColor(i-1, (((100 & 0xffffff) << 16) | ((100 & 0xffffff) << 8) | 100));rgb_display_A3.show();
    }
    break;
  }
  
}

void neo_stop()
{
  neo_state = 0;
  for (int i = 1; i <= 4; i = i + (1)) {
    rgb_display_A3.setPixelColor((i)-1, (((0 & 0xffffff) << 16) | ((0 & 0xffffff) << 8) | 0));rgb_display_A3.show();
  }
}

void car_forward()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,left_val);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,right_val);
}

void car_back()
{
  digitalWrite(ML,HIGH);
  analogWrite(ML_PWM,(255-left_val));
  digitalWrite(MR,HIGH);
  analogWrite(MR_PWM,(255-right_val));
}

void car_left()
{
  digitalWrite(ML,HIGH);
  analogWrite(ML_PWM,127);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,127);
}

void car_right()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,127);
  digitalWrite(MR,HIGH);
  analogWrite(MR_PWM,127);
}

void car_stop()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,0);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,0);
}
//**********************************************************************************
