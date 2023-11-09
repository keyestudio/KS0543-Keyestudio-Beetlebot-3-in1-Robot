## How to assemble the beetlebot car

![image-20231109081455305](media/image-20231109081455305.png)

Step 1

Required Parts

![image-20231109081548087](media/image-20231109081548087.png)

![image-20231109081559770](media/image-20231109081559770.png)

![image-20231109081605706](media/image-20231109081605706.png)

Step 2

Required Parts

![image-20231109081633085](media/image-20231109081633085.png)

![image-20231109081641389](media/image-20231109081641389.png)

![image-20231109081648062](media/image-20231109081648062.png)

Step 3

Required Parts

![image-20231109081713631](media/image-20231109081713631.png)

![image-20231109081718719](media/image-20231109081718719.png)

![image-20231109081724338](media/image-20231109081724338.png)

Step 4

Required Parts

![image-20231109081743756](media/image-20231109081743756.png)

![image-20231109081751258](media/image-20231109081751258.png)

![image-20231109081757200](media/image-20231109081757200.png)

Step 5

Required Parts

![image-20231109081820827](media/image-20231109081820827.png)

| Left Motor | Right Motor |
| ---------- | ----------- |
| L          | R           |

![image-20231109081920304](media/image-20231109081920304.png)

| 8*8 Dot Matrix Display | PCB  |
| ---------------------- | ---- |
| G                      | G    |
| 5V                     | 5V   |
| SDA                    | SDA  |
| SCL                    | SCL  |

![image-20231109081940369](media/image-20231109081940369.png)

![image-20231109081945541](media/image-20231109081945541.png)

![image-20231109081951910](media/image-20231109081951910.png)

Step 6

Required Parts

![image-20231109082131437](media/image-20231109082131437.png)

![image-20231109082137002](media/image-20231109082137002.png)

![image-20231109082142266](media/image-20231109082142266.png)

Step 7

Required Parts

![image-20231109082201946](media/image-20231109082201946.png)

![image-20231109082206440](media/image-20231109082206440.png)

![image-20231109082212181](media/image-20231109082212181.png)

Step 8

Required Parts

![image-20231109082230786](media/image-20231109082230786.png)

![image-20231109082235787](media/image-20231109082235787.png)

![image-20231109082241920](media/image-20231109082241920.png)

Step 9

Required Parts

![image-20231109082301533](media/image-20231109082301533.png)

Adjust the angle of the servo to 90 degree. 

| Servo       | PCB      |
| ----------- | -------- |
| Brown line  | G        |
| Red line    | 5V       |
| Orange line | S1（D9） |

```c++
int servoPin = 9; //Define the pins of the steering gear
void setup() {
  pinMode(servoPin, OUTPUT); //steering pin is set to output
  servopulse(servoPin, 90); //Turn it to 90 degrees
  delay(300); //delay 0.3S
}
void loop(){
}
void servopulse(int pin, int myangle) { //Impulse function
  int pulsewidth = map(myangle, 0, 180, 500, 2500); //Map Angle to pulse width
  for (int i = 0; i < 5; i++) { //Output a few more pulses
    digitalWrite(pin, HIGH);//Set the steering gear interface level to high
    delayMicroseconds(pulsewidth);//Number of microseconds of delayed pulse width value
    digitalWrite(pin, LOW);//Lower the level of steering gear interface
    delay(20 - pulsewidth / 1000);
  }
}    digitalWrite(pin, LOW);//Lower the level of steering gear interface
    delay(20 - pulsewidth / 1000);
  }
}
```

**before installing the car**

Copy the above code to the main board of the Beetlebot car.You also can adjust the initial angle of the servo via Scratch-KidsBlock code.

![image-20231109082532222](media/image-20231109082532222.png)

![image-20231109082631125](media/image-20231109082631125.png)

![image-20231109083811276](media/image-20231109083811276.png)

Step 10

Required Parts

![image-20231109083843412](media/image-20231109083843412.png)

![image-20231109083856738](media/image-20231109083856738.png)

![image-20231109083905287](media/image-20231109083905287.png)

Step 11

Required Parts

![image-20231109084036651](media/image-20231109084036651.png)

![image-20231109084040895](media/image-20231109084040895.png)

![image-20231109084052842](media/image-20231109084052842.png)

Step 12

Required Parts

![image-20231109084229603](media/image-20231109084229603.png)

![image-20231109084234565](media/image-20231109084234565.png)

![image-20231109084239693](media/image-20231109084239693.png)

![image-20231109084245217](media/image-20231109084245217.png)

**Wire up the ultrasonic sensor**

| Ultrasonic Sensor | PCB      |
| ----------------- | -------- |
| Vcc               | 5V       |
| Trig              | S2（D8） |
| Echo              | S1（D7） |
| Gnd               | G        |

![image-20231109084309896](media/image-20231109084309896.png)

**Wire up the servo**

| Servo       | PCB      |
| ----------- | -------- |
| Brown line  | G        |
| Red line    | 5V       |
| Orange line | S1（D9） |

![image-20231109085143201](media/image-20231109085143201.png)

**Wire up the left photoresistor**

| Left photoresistor | PCB     |
| ------------------ | ------- |
| G                  | G       |
| V                  | V       |
| S                  | S（A6） |

![image-20231109085203296](media/image-20231109085203296.png)

**Wire up the right photoresistor**

| Right photoresistor | PCB     |
| ------------------- | ------- |
| G                   | G       |
| V                   | V       |
| S                   | S（A7） |

![image-20231109085313102](media/image-20231109085313102.png)

**Beetle Robot Car**

![image-20231109085329684](media/image-20231109085329684.png)
