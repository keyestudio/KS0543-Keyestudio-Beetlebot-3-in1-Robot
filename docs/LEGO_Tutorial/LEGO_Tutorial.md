# **Soccer tutorial**

![Img](./media/img-20240116102405.png)

## 1. Description：

Can you imagine that a robot can play soccer? This idea has became realistic. As we know, the RoboCup championship is generally held each year. In this part, we will create a soccer robot to play soccer.

## 2. How to install the soccer robot:

**Step 1:** 

Remove two photoresistors first

![ 3_1.png 3_1](media/5e64e86f88135f370916439bbabb2d5a.png)

**Step 2:** 

![ 3_3.png 3_3](media/52bddcd05b409305adfbb39a9af55ee6.png)

![ 3_4.png 3_4](media/9b295f5c6b71340264eb54fd701296d6.png) 

![ 3_5.png 3_5](media/448e4708895f49afd985391c8ac0cd04.png)

**Step 3:** 

![ 5](media/b7ca00b9d07fc08780f5e6e39595d974.png)

![ 5_1](media/d124cb9095a9cecb1eea4c9b565da3dd.png)  

![ 5_2](media/ef1331144242e5bc24bc426842d98573.png) 

**Step 4:**

![ 6](media/2520ee435d034c60b66058e4bacfadb6.png)

![ 6_1](media/1d88fd0c5f6b4aff89c3900b3df5533d.png) 

![ 6_2](media/d05ab09c6662e3fb4d62be4f355a91be.png)

**Step 5:**

![ 7](media/82c5dd6fbe0818dbdbaf33ee0b019215.png)

![ 7_1](media/5964ab1fd800a0522923960dd32be299.png)  

![ 7_2](media/29abea2f58433515043942fd37af34e7.png)

**Step 6:**

![ 7_3](media/91e35080c03e1ca03b2a58b71da76e43.png)

![ 7_4](media/a643659079fdbf1433bb40658a590675.png)  

![ 7_5](media/9ec78ee08c51b297ccaa34b13fa8ae8d.png)

**Step 7:**

![ 7_6.png 7_6](media/d3ae331c69d05147a98b9d8353496a9f.png)

Note the installation direction of the part marked by the red circle 

![Img](./media/img-20240112172434.png)
   
![ 7_8.png 7_8](media/f939d187c78455662d9c3fd3bc77d8b7.png)

**Step 8:**

![ 7_9.png 7_9](media/f2a0fea032c9ca807196bae481054b82.png)

![ 7_10.png 7_10](media/e9fb139ce5954ee5d0cc32028b15d1a4.png) 

![ 7_11.png 7_11](media/dc849d125d6cf7748725d369ca39b6f2.png)

**Step 9:**

![ 8.png 8](media/f45d4a0edb9caf49703f6a14061d3356.png) 

Adjust the angle of the claw. Then make it close and face front. 

![ 8_1.png 8_1](media/d65a5580f2fc3292ad22005e1b480a3c.png) 

![ 8_2.png 8_2](media/54d2787ec549a6d651753475ca760f6b.png)

**Step 10:**

Set the angle of the servo to 180 degree

![ 8_3.png 8_3](media/f410d612e4ea08f789b5f8c2fe625947.png)

![Img](./media/img-20240112172525.png)

Upload the code of the servo to the main board of the Beetlebot car, as shown below

```c
#include <Servo.h>
Servo myservo;  // create servo object to control a servo

void setup() {
   myservo.attach(A0);  // attaches the servo on pin A0 to the servo object
}

void loop() {
  myservo.write(180);  // tell servo to go to position
}

```

You can also initialize the angle of the servo through the following code

![](media/00f77a1d94aaae5bc1b8b68e6bc6fa60.png)


Keep the claw close and face front before installing the gear

![](media/e7d79896568d0f97ad08aeee6a69aec1.png)

![ 8_5.png 8_5](media/ad193ecc917138ddb44328e10ef19654.png)

**Step 11:**

Required Parts

![ 3_6.png 3_6](media/90986cacd92570cdd76b437df5e1b916.png)

![ 3_7.png 3_7](media/228346c56280be9b2516abd39c9fa7c7.png)

![ 3_8.png 3_8](media/3b9a3a2fce95bcf48fc833aed69fe4b6.png)

**Step 12:**

Required Parts

![ 3_9.png 3_9](media/68d76c258157e550ea345fecc3d97342.png)

![ 3_10.png 3_10](media/31805e285ab9d3c8b487fe769c97574b.png)

![ 3_11.png 3_11](media/4a59747ea4ecc8e8eb328935007684b4.png)

![ 3_12.png 3_12](media/40ced3c517b76bdca41bb867388291cc.png)

**Step 13:**

![IMG_256](media/4a7b89134d7aa5897733fa0ab411872c.jpeg)


------

<span style="color: rgb(255, 76, 65);">**We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**</span>

![Img](./media/img-20240119163340.jpg)

------

## 3. Install a soccer goal

**Step 1:**

![ 2.png 2](media/0fc16ff134aa3503319d4101362338d8.png)

![ 2_1.png 2_1](media/1bd86df44aba070fea465a1da26df9e9.png)  

![ 2_2.png 2_2](media/f3749804b3ac033cfdd7b4423ddea660.png)

**Step 2:**

![ 2_3.png 2_3](media/8d3f4c81812931c8cb3140c5fc33aa1a.png)

![ 2_4.png 2_4](media/dcc81f3f50258615595745676921b34c.png)  

![ 2_5.png 2_5](media/567e873c86303e9e7ef0f6c919ae8fac.png)

**Step 3:**

![ 2_6.png 2_6](media/99d485c0ce81fe195bd9d4282403b8f1.png)

![ 2_4.png 2_4](media/dcc81f3f50258615595745676921b34c.png)  

![ 2_5.png 2_5](media/567e873c86303e9e7ef0f6c919ae8fac.png)


## 4. Codes:

### (1)Arduino Code：
```c
#include <Servo.h>
Servo lgservo;
#define ML 4
#define ML_PWM 6
#define MR 2
#define MR_PWM 5
#define servo2 A0

char val;
char wifiData;

void setup() {
  Serial.begin(9600);
  pinMode(ML, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  
  lgservo.attach(A0);
  lgservo.write(180);
  delay(1000);
  lgservo.write(160);
}

void loop() {
  if(Serial.available() > 0)
  {
    val = Serial.read();
    Serial.print(val);
  }
  switch(val)
  {
    case 'F': car_forward(); break;
    case 'B': car_back(); break;
    case 'L': car_left(); break;
    case 'R': car_right(); break;
    case 'S': car_stop(); break;
    case 'p': lgservo.write(180); break;
    case 'x': lgservo.write(160); break;
  }
}


void car_forward()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,127);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,127);
}

void car_back()
{
  digitalWrite(ML,HIGH);
  analogWrite(ML_PWM,127);
  digitalWrite(MR,HIGH);
  analogWrite(MR_PWM,127);
}

void car_left()
{
  digitalWrite(ML,HIGH);
  analogWrite(ML_PWM,150);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,105);
}

void car_right()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,105);
  digitalWrite(MR,HIGH);
  analogWrite(MR_PWM,150);
}

void car_stop()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,0);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,0);
}
```

### (2)Kidsblock Code：

![](media/football.png)

## 5. Test Result：

<span style="color: rgb(255, 76, 65);">Note:</span> Please refer to the Project 11.2 of the Arduino tutorial for downloading and operating the APP.
<br>
<br>

Build up the soccer goal with building blocks and place it at fixed location, connect the robot car through Wifi.

Put a small soccer in the middle of the claw of the robot car, press and hold down the button ![](media/c6d6fb5f7473c0aabcdeddb580b740ed.png)to enable the claw to hold the soccer, then press buttons ![](media/5f365b2083f264b4ecfc5e68d07df287.png)to adjust the car’s movement direction so as to put the soccer close to the soccer goal. At last, release the button ![](media/c6d6fb5f7473c0aabcdeddb580b740ed.png)to allow the soccer to drop on the floor and roll to the soccer goal. If not, repeat the above step to shoot the goal.

If your friend owns this kind of soccer robot, you guys can hold a soccer match. It sounds amazing, right?


# **Catapul tutorial**

![Img](./media/img-20240116102333.png)

## **1. Description：**

A catapult is a ballistic device used to launch a projectile a great distance without the aid of gunpowder or other propellants – particularly various types of ancient and medieval siege engines. ... We will make a catapult with LEGO building blocks. Equipped with servos and gears, the car has LEGO tower used to carry projectiles.

As the servo rotates to a proper angle then push the long arm backward a projectile will be launched.

## **2. How to build up a catapult**

**Step 1:**

![ 3.png 3](media/ef12c46a8dc6e5f5c7f7ee6fc3c3dc55.png)   

![ 3_1.png 3_1](media/85116f87b7e67a5ab0de47507da771aa.png) 

![ 3_2.png 3_2](media/bb5d2d9bc07a9cfdc997f798c6c56eca.png)

**Step 2:**

![ 3_3.png 3_3](media/d827f9196a2aed7686c9d767e64b7f66.png) 

![ 3_4.png 3_4](media/7e4fed5d035aac6b58ee79afd3aca1a1.png)

![ 3_5.png 3_5](media/088c8c481e0b48b3625f465a4ceed269.png) 

**Step 3:**

![ 3_6.png 3_6](media/52da40da0bbeae39083c81a57c1117e6.png)  

![ 3_7.png 3_7](media/42004639ab3aaca47c5121bf7ac18a2d.png)   

![ 3_8.png 3_8](media/08f91fa357f53479f8a121bd2b6d8883.png) 

**Step 4:**

![ 3_9.png 3_9](media/1678f2dcaaed186ba12fbcbc9a6d34c2.png)    

![ 3_10.png 3_10](media/8b54d0c59f13bbbc54fafefec90bbb24.png)   

![ 3_11.png 3_11](media/b2900c9594fb64b10ee734e2a533cfbf.png) 

**Step 5:**

![ 3_12.png 3_12](media/9975825da874d5431f9e672ca9a4479e.png)  

![ 3_13.png 3_13](media/5c41a82613abc2c43016fb25edc5c68c.png) 

![ 3_14.png 3_14](media/08ebb224d83a88b37ebd8b5cb80bb3ad.png)

**Step 6:**

![ 3_15.png 3_15](media/9c247eddce7a872899c34e013e12db31.png) 

![ 3_16.png 3_16](media/3a2946b85862bf346ffab23458553bb3.png)  
 
![ 3_17.png 3_17](media/531619d92526f175188479be5fe9c403.png) 

**Step 7:**

![ 3_18.png 3_18](media/76541a6311535fd572743b0ad47f1254.png)   

![ 3_19.png 3_19](media/a75726411d9f0bcccda1600a3f3b3cdc.png)   

![ 3_20.png 3_20](media/216440c8133bb1fa5f9670d084815ee6.png)

**Step 8:**

![ 3_21.png 3_21](media/7e7a7032c111bbfc5e4a6605abb84dd7.png)   
 
![ 3_22.png 3_22](media/b933ff3a1efee59f590e3d511c1d2864.png)   

![ 3_23.png 3_23](media/be75847ab4f10c2750868daf02cad97d.png)

**Step 9:**

![ 4.png 4](media/8a0a23b5a1a7a332209e87d032815609.png)

![ 4_1.png 4_1](media/5887d93dd221b4c3aeb7dcfe2a466846.png)

![ 4_2.png 4_2](media/dae339a4baed35100a3580384bf228db.png)

**Step 10:**

![ 4_3.png 4_3](media/a376478c51daef7b169d65b91257cff1.png) 

![ 4_4.png 4_4](media/ea08ecc209960e32eee4c930201c6112.png)

![ 4_5.png 4_5](media/03394d1ec20bdfec33c01fcbaca3272a.png)

**Step 11:**

![ 4_6.png 4_6](media/ccbf96f8a832f1b7429dd84c5d4345c8.png)

![ 4_7.png 4_7](media/e4eeea6acd26fc704b516a4eed86d280.png)

![ 4_8.png 4_8](media/275b434c0be9b0b29b0414c86f8016dd.png)

**Step 12:**

![ 4_9.png 4_9](media/b7dcfd9502c3fd7b10667b6c8e02d9c2.png) 

![ 4_10.png 4_10](media/0805a74bbabfd014c772223f269034e6.png) 
 
![ 4_11.png 4_11](media/997424695d7920037017741fdbba2fac.png)

**Step 13:**

![ 4_12.png 4_12](media/6348991aedca79b2dd8d672bf92a11d5.png)   

![ 4_13.png 4_13](media/a6b15b1c9cf2b4c57eb99613f3b101c4.png)   

![ 4_14.png 4_14](media/dc88133e92982bd31fecefee7ad8a7c1.png)

**Step 14:**

![ 4_15.png 4_15](media/4647a2f97a30479a02a9166625ff8691.png) 

![ 4_16.png 4_16](media/cca8268d5c1cea871a6724f38440bf44.png)  

![ 4_17.png 4_17](media/ff899bedee462220afed7d6b57e5c4fb.png)

**Step 15:**

![ 4_18.png 4_18](media/2ff9dd7a9593ae1d87ee1ef78f5ec79c.png)   

![ 4_19.png 4_19](media/2c0b652b42d4695eaeaf57802f7d0ab7.png)   

![ 4_20.png 4_20](media/7e28f9049c1d8081f7bb24b07c75471f.png)

**Step 16:**

![ 4_21.png 4_21](media/f62f9d4b93b1b0ac66738baa034e710d.png)   

![ 4_22.png 4_22](media/3f1f8d3bfd3dd6c810d55ffceefe6ca3.png)   

![ 4_23.png 4_23](media/857bff0ba903623bc8d3a44d6410d828.png)

**Step 17:**

Set the angle of the servo to 0 degree

![ 4_24](media/4d37a7993b087fe97734443ddb940941.png)

![Img](./media/img-20240112161954.png)


Upload the code of the servo to the main board of the Beetlebot car, as shown below

```c
#include <Servo.h>
Servo myservo;  // create servo object to control a servo

void setup() {
   myservo.attach(A0);  // attaches the servo on pin A0 to the servo object
}

void loop() {
   myservo.write(0);  // tell servo to go to position
}
```

You can also initialize the angle of the servo through the following code

![](media/c6dd9ef0c039e74d07c4b41c0b0d1969.png)

Check the Scratch-KidsBlock code as follows，then upload the code to the main board of the Beetlebot car


![ 4_25](media/9f5a242786bc3789adf9cf5e18b8ba51.png)

![ 4_26](media/ac803fd31a550ed4dd380b0684019011.png)

**Step 18:**

![ 4_27](media/b3f95a18ac4bc0caa38a2247766520cf.png)

![ 4_28](media/9cce844758b800937ca64b05aff685d8.png)

![ 4_29](media/35a51fcf6c258efb5b657d54bb3de756.png)


**Step 19:** Wire up

Interface the servo

![1ce70f3a2988e646798cadfc6fc8995](media/6f46689ed976aa6a590c683928ba0675.jpeg)

------

<span style="color: rgb(255, 76, 65);">**We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**</span>

![Img](./media/img-20240119163340.jpg)

------

## 3. Code:

### (1) Arduino Code：

```c
#include <Servo.h>
Servo lgservo;
#define ML 4
#define ML_PWM 6
#define MR 2
#define MR_PWM 5
#define servo2 A0

char val;
char wifiData;
boolean servo_flag = 1;

void setup() {
  Serial.begin(9600);
  pinMode(ML, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  
  lgservo.attach(A0);
  lgservo.write(0);
}

void loop() {
  if(Serial.available() > 0)
  {
    val = Serial.read();
    Serial.print(val);
  }
  switch(val)
  {
    case 'F': car_forward(); break;
    case 'B': car_back(); break;
    case 'L': car_left(); break;
    case 'R': car_right(); break;
    case 'S': car_stop(); break;
    case 'p': lgservo.write(55);servo_flag = 1; break;
    case 'x': servo_down(); break;
  }
}

void servo_down()
{
  while( servo_flag == 1)
  {
    for(int i=55; i>0; i--)
    {
      lgservo.write(i);
      delay(2);
    }
    servo_flag = 0;
  }
  
}


void car_forward()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,255);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,255);
}

void car_back()
{
  digitalWrite(ML,HIGH);
  analogWrite(ML_PWM,0);
  digitalWrite(MR,HIGH);
  analogWrite(MR_PWM,0);
}

void car_left()
{
  digitalWrite(ML,HIGH);
  analogWrite(ML_PWM,150);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,105);
}

void car_right()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,105);
  digitalWrite(MR,HIGH);
  analogWrite(MR_PWM,150);
}

void car_stop()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,0);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,0);
}

```

### (2) Kidsblock Code：

![](media/catapult.png)

## 4. Test Result：

<span style="color: rgb(255, 76, 65);">Note:</span> Please refer to the Project 11.2 of the Arduino tutorial for downloading and operating the APP.
<br>
<br>

Build up a few target objects with building blocks(object A, B, C, D, E) and keep them in a certain distance away the catapult and connect Wifi.

Click ![](media/5f365b2083f264b4ecfc5e68d07df287.png) to make the car to face the object A, hold down the button ![](media/0e62c323c0018af1a2824a120d447bda.png)to drive the catapult to launch a building block.

Then release the button ![](media/0e62c323c0018af1a2824a120d447bda.png)to make the long arm return to the original state. Next, let’s check if the object A is hit by the launched block

You can repeat above steps to hit the object B, C and D.


# **Handling tutorial**

![Img](./media/img-20240116102251.png)


## 1. Description：

Among many industrial robots, handling robots are undoubtedly effective, applied in industrial manufacturing, warehousing and logistics, tobacco, medicine, food, chemical and other industries, or in post offices, libraries, ports and parking lots. In this experiment, we will use LEGO blocks to build a handling robot to carry things.

## 2. How to build up a handling robot:

**Step 1:**

Dismantle the ultrasonic sensor

![](media/f05a58fdd61093240a78a884d2484bab.png)

**Step 2:**

![](media/1f8438657adee5ee0931a2e0db8c8d79.png)

![](media/b9cb95a5c53ab96b85b41d648c19534f.png)   

![](media/502348fe825fa6e57cd61d1700c93c0f.png)

**Step 3:**

![](media/ca7778dd2175c92f92c86611b9fc64d3.png)

![](media/d33b93e264a8c2833ce2b3d4dcd91517.png) 

![](media/c9a151d3856720e100dabe436d62d230.png)

**Step 4:**

![](media/a2b2a96f444801e2da559161cc5b2b65.png)

![](media/077d7de8e6260998b60e008593bff7e5.png)  

![](media/a9a493a264445b0feab48159837fe725.png)

**Step 5:**

![](media/4570e1fc0c6b67a1012291d22a4882a9.png)

![](media/0f804e35e2f7dc6e2a028d21f21e392e.png) 

![](media/4a759b55f056a6cd9dfdee0cece5dfd1.png)

**Step 6:**

![](media/064acf2eab1416e7699f3478f1859536.png)

![](media/ce5e3e8e4548aba8fad60910214bcca6.png) 

![](media/9b2185eaf2f66f35b57754d5476b1ddd.png)

**Step 7:**

![](media/ac98e23dc24258097c9738102ea3a43a.png) 

![](media/7164d7dd08e97a62bc77ae08aadf1526.png) 

![](media/1cccaf2a536170c11bbc4cdf7683484a.png) 

**Step 8:**

![](media/7d3e50e74ae36545217c4fa15a53d04e.png)

![](media/7d32a51858167fd8aee486b72f287ae3.png)   

![](media/83dbaa2175018608dc84f4dda726fa96.png)

**Step 9:**

![ 6_23.png 6_23](media/6e73265906657a00ca17c5323f65dcec.png)

![ 6_24.png 6_24](media/f60d276bb389be3c440b15adea292adf.png)   

![ 6_25.png 6_25](media/86f43f7d15cfb6c4ac807423b2510de0.png)

**Step 10:**

Set the angle of the servo to 180 degree

![ 6_26.png 6_26](media/df4b2ab9b8ad767b948de6f783a0cf42.png)

![Img](./media/img-20240112170641.png)

Upload the code of the servo to the main board of the Beetlebot car, as shown below

```c
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
    myservo.attach(A0);  // attaches the servo on pin A0 to the servo object
}

void loop() {
    myservo.write(180);  // tell servo to go to position
}
```

You can also initialize the angle of the servo through the following code

![](media/ee57efd34b347b82bd6e28ca4933484d.png)

![ 6_27.png 6_27](media/014d0f844d18f7bbd2a80b7f1679fca1.png)

![ 6_28.png 6_28](media/e66813dd3c1884b0c1f65bdf3f5b8c48.png)

**Step 11:**


![ 6_29](media/13c2436b53b5dab5f508e902bcb6b0cf.png)

![ 6_30](media/20149b66db795ce32fcb060a0823bab0.png)

 

![ 3](media/b97e180d74ce41e7293acfe85a0b1bd7.png)

![ 3_1](media/b1d1dd5fe42bc14bbf773e9e10cdcab9.png)

![ 6_31](media/87076fbdd533d91c88fa7ae5cd5df32e.png)

![ 6_32](media/89d2a853cf95635fae60b5ec48482d54.png)

**Step 12:** Wire up servo

![](media/d21937e59f71e552c4deb19e1a91b6d3.jpeg)

------

<span style="color: rgb(255, 76, 65);">**We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**</span>

![Img](./media/img-20240119163340.jpg)

------

## 3. Code:

### (1)Arduino Code：

```c
#include <Servo.h>
Servo lgservo;
#define ML 4
#define ML_PWM 6
#define MR 2
#define MR_PWM 5
#define servo2 A0

char val;
char wifiData;

void setup() {
  Serial.begin(9600);
  pinMode(ML, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  
  lgservo.attach(A0);
  lgservo.write(180);
}

void loop() {
  if(Serial.available() > 0)
  {
    val = Serial.read();
    Serial.print(val);
  }
  switch(val)
  {
    case 'F': car_forward(); break;
    case 'B': car_back(); break;
    case 'L': car_left(); break;
    case 'R': car_right(); break;
    case 'S': car_stop(); break;
    case 'p': lgservo.write(130); break;
    case 'x': lgservo.write(180); break;
  }
}


void car_forward()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,127);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,127);
}

void car_back()
{
  digitalWrite(ML,HIGH);
  analogWrite(ML_PWM,127);
  digitalWrite(MR,HIGH);
  analogWrite(MR_PWM,127);
}

void car_left()
{
  digitalWrite(ML,HIGH);
  analogWrite(ML_PWM,150);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,105);
}

void car_right()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,105);
  digitalWrite(MR,HIGH);
  analogWrite(MR_PWM,150);
}

void car_stop()
{
  digitalWrite(ML,LOW);
  analogWrite(ML_PWM,0);
  digitalWrite(MR,LOW);
  analogWrite(MR_PWM,0);
}
```

### (3)Kidsblock Code：**

![](media/handing.png)

## 4. Test Result：

<span style="color: rgb(255, 76, 65);">Note:</span> Please refer to the Project 11.2 of the Arduino tutorial for downloading and operating the APP.
<br>
<br>

Connect Wifi, click buttons![](media/5f365b2083f264b4ecfc5e68d07df287.png) to make the car to move toward building blocks and put some building blocks on the robot.

Then press ![](media/5f365b2083f264b4ecfc5e68d07df287.png)to drive the robot to move.

Hold down the button ![](media/0e62c323c0018af1a2824a120d447bda.png)to drive the robot to drop building blocks, then building blocks can be conveyed









