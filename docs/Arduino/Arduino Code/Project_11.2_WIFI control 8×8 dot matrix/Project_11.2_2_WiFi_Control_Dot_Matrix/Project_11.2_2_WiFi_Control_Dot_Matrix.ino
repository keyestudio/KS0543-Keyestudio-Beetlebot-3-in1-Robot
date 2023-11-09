//**********************************************************************************
/*
Project 11.2_2 WiFi control dot matrix
*/
#include <ks_Matrix.h>
Matrix myMatrix(A4,A5);//Define the dot matrix pins in A4,A5
//Array, used to store the data of the pattern, can be calculated yourself 
//or retrieved from the touch tool
uint8_t matrix_smile[8]={0x00,0x66,0x00,0x00,0x18,0x42,0x3c,0x00};
uint8_t matrix_heart[8]={0x0e,0x11,0x21,0x42,0x21,0x11,0x0e,0x00};
uint8_t matrix_ten[8]={0x08,0x08,0x08,0x08,0xff,0x08,0x08,0x08};
uint8_t LEDArray[8];
char wifiData;

void setup() {
  Serial.begin(9600);
  myMatrix.begin(112);
  myMatrix.clear();
  myMatrix.writeDisplay();
}

void loop() {
  if(Serial.available() > 0)
  {
    wifiData = Serial.read();
    Serial.print(wifiData);
    if(wifiData == '#')
    {
      Serial.println("");
    }
    delay(100);
    
    if(wifiData == 'i')
    {
      myMatrix.writeDisplay();
      matrix_display(matrix_smile); 
    }
    else if(wifiData == 'k')
    {
      myMatrix.writeDisplay();
      matrix_display(matrix_heart);
    }
    else if(wifiData == 'j')
    {
      myMatrix.writeDisplay();
      matrix_display(matrix_ten);
    }
    else if(wifiData == 'y')
    {
      myMatrix.clear();
    }
  }
}

//Dot matrix display pattern function
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
//**********************************************************************************
 
