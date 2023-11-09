//*************************************************************************************
/*
Project 10.2:Infrared remote control car
*/ 
#include <ks_Matrix.h>
Matrix myMatrix(A4,A5);//定义点阵的引脚在A4,A5
//数组，用于储存图案的数据，可以自己算也可以从取摸工具中得到
uint8_t matrix_front[8]={0x18,0x24,0x42,0x99,0x24,0x42,0x81,0x00};
uint8_t matrix_back[8]={0x00,0x81,0x42,0x24,0x99,0x42,0x24,0x18};
uint8_t matrix_left[8]={0x12,0x24,0x48,0x90,0x90,0x48,0x24,0x12};
uint8_t matrix_right[8]={0x48,0x24,0x12,0x09,0x09,0x12,0x24,0x48};
uint8_t matrix_stop[8]={0x18,0x18,0x18,0x18,0x18,0x00,0x18,0x18};
uint8_t  LEDArray[8];
const int left_ctrl = 4;//定义左电机方向控制引脚D4
const int left_pwm = 6;//定义左电机速度控制引脚D6
const int right_ctrl = 2;//定义右电机方向控制引脚D2
const int right_pwm = 5;//定义右电机速度控制引脚D5
#include <IRremote.h>//红外遥控函数库
int RECV_PIN = 12;//定义红外接收的脚位在D12
IRrecv irrecv(RECV_PIN);
long irr_val;
decode_results results;
const int servopin = 9;//定义舵机的脚位在D9
int myangle;
int pulsewidth;

void setup()
{
  Serial.begin(9600);//打开串口，波特率9600
  pinMode(left_ctrl,OUTPUT);//设置左电机方向控制引脚为输出
  pinMode(left_pwm,OUTPUT);//设置左电机pwm控制速度引脚为输出
  pinMode(right_ctrl,OUTPUT);//设置右电机方向控制引脚为输出
  pinMode(right_pwm,OUTPUT);//设置右电机pwm控制速度引脚为输出
  pinMode(RECV_PIN,INPUT);//设置红外接收器引脚为输入
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // 开始接收信号
  Serial.println("Enabled IRin");
  myMatrix.begin(112);
  myMatrix.clear();
  myMatrix.writeDisplay();
  servopulse(servopin,90);//设置舵机初始角度为90
  delay(300);
}

void loop()
 {
  if (irrecv.decode(&results)) 
 {
    irr_val = results.value;
    Serial.println(irr_val, HEX);//串口打印读取的红外遥控信号
    switch(irr_val)
    {
      case 0xFF629D : 
      car_front(); 
      myMatrix.clear();
      myMatrix.writeDisplay();
      matrix_display(matrix_front);  
      break;
      case 0xFFA857 : 
      car_back(); 
      myMatrix.clear();
      myMatrix.writeDisplay();
      matrix_display(matrix_back); 
      break;
      case 0xFF22DD : 
      car_left(); 
      myMatrix.clear();
      myMatrix.writeDisplay();
      matrix_display(matrix_left); 
      break; 
      case 0xFFC23D : 
      car_right();
      myMatrix.clear();
      myMatrix.writeDisplay();
      matrix_display(matrix_right); 
      break;
      case 0xFF02FD : 
      car_Stop();
      myMatrix.clear();
      myMatrix.writeDisplay();
      matrix_display(matrix_stop); 
      break;
    }
        irrecv.resume(); // 接收下一个值
  }
}

void servopulse(int servopin,int myangle)//舵机运行角度
{
  for(int i=0; i<20; i++)
  {
    pulsewidth = (myangle*11)+500;
    digitalWrite(servopin,HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(servopin,LOW);
    delay(20-pulsewidth/1000);
  }  
}

void car_front()//定义前进的状态
{
  digitalWrite(left_ctrl,LOW); //左电机方向控制引脚低电平
  analogWrite(left_pwm,200); //左电机PWM控制速度200
  digitalWrite(right_ctrl,LOW); //右电机方向控制引脚低电平
  analogWrite(right_pwm,200); //右电机PWM控制速度200
}
void car_back()//定义后退的状态
{
  digitalWrite(left_ctrl,HIGH); //左电机方向控制引脚高电平
  analogWrite(left_pwm,50); //左电机PWM控制速度50
  digitalWrite(right_ctrl,HIGH); //右电机方向控制引脚高电平
  analogWrite(right_pwm,50); //右电机PWM控制速度50
}
void car_left()//定义左转的状态
{
  digitalWrite(left_ctrl,HIGH); //左电机方向控制引脚高电平
  analogWrite(left_pwm,200); //左电机PWM控制速度200
  digitalWrite(right_ctrl,LOW); //右电机方向控制引脚低电平
  analogWrite(right_pwm,200); //右电机PWM控制速度200
}
void car_right()//定义右转的状态
{
  digitalWrite(left_ctrl,LOW); //左电机方向控制引脚低电平
  analogWrite(left_pwm,200); //左电机PWM控制速度200
  digitalWrite(right_ctrl,HIGH); //右电机方向控制引脚高电平
  analogWrite(right_pwm,200); //右电机PWM控制速度200
}
void car_Stop()//定义停止的状态
{
  digitalWrite(left_ctrl,LOW);//左电机方向控制引脚低电平
  analogWrite(left_pwm,0);//左电机PWM控制速度0
  digitalWrite(right_ctrl,LOW);//右电机方向控制引脚低电平
  analogWrite(right_pwm,0);//右电机PWM控制速度0
}

//点阵显示图案的函数
void matrix_display(unsigned char matrix_value[])
{
  for(int i=0; i<8; i++)
    {
      LEDArray[i]=matrix_value[i];
      for(int j=7; j>=0; j--)
      {
        if((LEDArray[i]&0x01)>0)
        myMatrix.drawPixel(j, i,1);
        LEDArray[i] = LEDArray[i]>>1;
      }
    } 
    myMatrix.writeDisplay();
}
//*************************************************************************************
