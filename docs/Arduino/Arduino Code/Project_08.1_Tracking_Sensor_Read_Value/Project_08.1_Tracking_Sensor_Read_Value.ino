//*************************************************************************************
/*
Project 08.1: Tracking sensor read value
*/ 
int tracking_left = 11; //定义左红外循迹引脚D11
int tracking_right = 10; //定义右红外循迹引脚D10
int L_val,R_val; //定义左,右红外循迹两个变量

void setup() {
 Serial.begin(9600); //设置波特率为9600
 pinMode(tracking_left, INPUT); //设置左红外循迹引脚为输入
 pinMode(tracking_right, INPUT); //设置右红外循迹引脚为输入
}

void loop() {
 L_val = digitalRead(tracking_left); //读取左红外循迹的值
 R_val = digitalRead(tracking_right); //读取右红外循迹的值
 Serial.print("L_val: "); //串口打印字符串L_val
 Serial.print(L_val); //串口打印L_val值
 Serial.print("    "); //串口打印空格
 Serial.print("R_val: "); //串口打印字符串R_val
 Serial.println(R_val); //串口打印R_val值
 delay(300); //延时0.3秒
}
//*************************************************************************************
