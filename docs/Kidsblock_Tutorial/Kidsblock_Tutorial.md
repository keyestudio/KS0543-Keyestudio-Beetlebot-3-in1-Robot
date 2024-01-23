# **Kidsblock tutorial**

## 1. Getting started with Kidsblock software

### 1. Instruction:

The Kidsblock, based on the Scratch graphical programming software, integrates multiple mainstream mainboards, sensors as well as modules. It can be programmed by dragging graphical blocks and using the C/C++ programming language, making programming easy and interesting for children to learn.

### 2. Download and install KidsBlock software

**[Windows system](https://www.kidsblock.cn/Down/KidsBlock.exe)**

**[MACOS system](https://www.kidsblock.cn/Down/KidsBlock-MACOS.dmg)**


**Install Development Board Driver**

**[How to install development board driver](https://kidsblocksite.readthedocs.io/en/latest/driver/)**

**Start your first program**
**[Quick Start](https://kidsblocksite.readthedocs.io/en/latest/function/)**

### 3. Interface Setting：

After the KidsBlock is installed，open KidsBlock to click![](media/bfbf7c471ede03845519b11961a13837.png)\<“**Beetlebot**”\<“**Connect**”，

Then the **Beetlebot** is connected. Click “**Go to Editor**” to return the code editor.

![](media/bfbf7c471ede03845519b11961a13837.png)will change into![](media/6a8530eb0230355b4c7d216f3e1faeaf.png)and![](media/db0135c23e5313dac75a33d7d2faa529.png)into![](media/0f64e7bcfda60830752545e973795914.png).

This means the **Beetlebot** is connected to the COM port.

![](media/da9cf688336d2fd12385d7d14a3b2ba6.png)

![](media/f54d6ae3d30827f2694cbcfc2e1dd5d4.png)

![](media/cb9e5ff39c1e677c7dc066a5f0c2fec8.png)

![](media/ccb3f4bb8dae899f306fc3f12da1abdb.png)

![](media/e65f6f63c02286805ce543f08a363fc9.png)


If the **Beetlebot** is connected, but![](media/db0135c23e5313dac75a33d7d2faa529.png)doesn’t change into![](media/0f64e7bcfda60830752545e973795914.png).

Just click![](media/db0135c23e5313dac75a33d7d2faa529.png)to connect the COM port.Click![](media/db0135c23e5313dac75a33d7d2faa529.png)，then click“**Connect**”，after a while, if the“**Connected**”page pops up，the com port will be connected.

![](media/1946dc6b0b97e579e091f1b12ca37860.png)

![](media/648120fca2df1b7e801da575aacb582d.png)

![](media/654710845e66f87cf4417c26195955b2.png)

![](media/e65f6f63c02286805ce543f08a363fc9.png)

Then click ![](media/770292e2b4d7555030eaf7951cf58aec.png)to switch the mode, the mode![](media/770292e2b4d7555030eaf7951cf58aec.png)will switch to![](media/6647392e2b1488904406ad656f6e08b4.png)

![](media/d9adac4ca2b5382fbe9cb0851f9531b6.png)

![](media/13e56432e2c2e1c0294f84a64f141b77.png)


## 2. Assemble Beetlebot Robot

![image-20231109081455305](media/image-20231109081455305.png)

**Step 1**

![image-20231109081548087](media/image-20231109081548087.png)

![image-20231109081559770](media/image-20231109081559770.png)

![image-20231109081605706](media/image-20231109081605706.png)

**Step 2**

![image-20231109081633085](media/image-20231109081633085.png)

![image-20231109081641389](media/image-20231109081641389.png)

![image-20231109081648062](media/image-20231109081648062.png)

**Step 3**

![image-20231109081713631](media/image-20231109081713631.png)

![image-20231109081718719](media/image-20231109081718719.png)

![image-20231109081724338](media/image-20231109081724338.png)


**Step 4**

![image-20231109081743756](media/image-20231109081743756.png)

![image-20231109081751258](media/image-20231109081751258.png)

![image-20231109081757200](media/image-20231109081757200.png)

**Step 5**


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

**Step 6**

![image-20231109082131437](media/image-20231109082131437.png)

![image-20231109082137002](media/image-20231109082137002.png)

![image-20231109082142266](media/image-20231109082142266.png)

**Step 7**

![image-20231109082201946](media/image-20231109082201946.png)

![image-20231109082206440](media/image-20231109082206440.png)

![image-20231109082212181](media/image-20231109082212181.png)

**Step 8**

![image-20231109082230786](media/image-20231109082230786.png)

![image-20231109082235787](media/image-20231109082235787.png)

![image-20231109082241920](media/image-20231109082241920.png)

**Step 9**

![image-20231109082301533](media/image-20231109082301533.png)

Adjust the angle of the servo to 90 degree. 

| Servo       | PCB      |
| ----------- | -------- |
| Brown line  | G        |
| Red line    | 5V       |
| Orange line | S1（D9） |

Writing the following code in kidsBlock software and upload it to the motherboard, or just open the code provided by us and upload it to the motherboard.

![Img](./media/img-20240112143711.png)

Keep the ultrasonic sensor parallel to the board

![image-20231109082631125](media/image-20231109082631125.png)

![image-20231109083811276](media/image-20231109083811276.png)

**Step 10**

![image-20231109083843412](media/image-20231109083843412.png)

![image-20231109083856738](media/image-20231109083856738.png)

![image-20231109083905287](media/image-20231109083905287.png)


**Step 11**

![image-20231109084036651](media/image-20231109084036651.png)

![image-20231109084040895](media/image-20231109084040895.png)

![image-20231109084052842](media/image-20231109084052842.png)

**Step 12**

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

------

<span style="color: rgb(255, 76, 65);">**We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**</span>

![Img](./media/img-20240119163340.jpg)

------

## 3. Projects：

### Project 1: LED Blinking

#### **(1)Description：**

There is an onboard LED (L) on our Arduino Nano board connected to D13. In this experiment, we WILL make this LED blink.

LED blinking is the most basic experimental project for Arduino enthusiasts. Let’s get started.

#### **(2)Components Required：**

![Img](./media/img-1234.png)

#### **(3)Knowledge：**

**On-board LED：**

LED, the abbreviation of light emitting diodes, consists of Ga, As, P, N chemical compounds and so on. It is easy to control through the IO port(D13) of the Arduino Nano board.

![IMG_256](media/9ee7eb2f9d8ffb58bf75e9771331ac60.png)

#### **(4)Test Code**

![](media/3b2b2a7eccd6f160bbd781a157127353.png)

#### **(5)Test Result：**

Upload the test code to the Arduino Nano board and power up with a USB cable. Then the on-board LED will flash.

![Img](./media/img-20240117111723.png)

### Project 2: 6812 RGB

#### **(1)Description：**

There are 4 RGB LEDs can be widely used in the decoration of buildings, bridges, roads, gardens, courtyards and so on by colors adjustment.

In this experiment, we will demonstrate different lighting effects with them.

#### **(2)Components Required：**

![Img](./media/img-1234.png)

#### **(3)Component Knowledge**

**SK6812RGB:**

From the schematic diagram, we can see that these four pixel lighting beads are all connected in series. In fact, no matter how many they are, we can use a pin to control a light and let it display any color. The pixel point contains a data latch signal shaping amplifier drive circuit, a high-precision internal oscillator and a 12V high-voltage programmable constant current control part,
which effectively ensures the color of the pixel point light is highly consistent.

The data protocol adopts a single-wire zero-code communication method. After the pixel is powered up and reset, the S terminal receives the data transmitted from the controller. The first 24bit data sent is extracted by the first pixel and sent to the data latch of the pixel.

![](media/86e292d0666046b72a1e0e68adfb17e8.png)

#### **(4)Test Code：**

The SK6812RGB on the PCB board is controlled by the IO port (A3).

![](media/030e367aa7d690a3ff54273d7e3d6a3b.png)

#### **(5)Test Result：**

Upload the test code to the Arduino Nano board and power up by a USB cable. Then the four RGB lights on the PCB demonstrate multi-color light effect.

![Img](./media/img-20240117111742.png)

### Project 3: Play Music

#### **(1)Description：**

There is a power amplifier component on the expansion board, which is often used to play music and serve as an external amplifying device for music playback devices.

In this experiment, we use the speaker amplifier component to play music.

#### **(2)Components Required：**

![Img](./media/img-1234.png)

#### **(3)Knowledge：**

Power amplifier modules(equivalent to a passive buzzer) don’t have internal oscillation circuits.

The power amplifier module can chime sounds with different frequency when power it up.

#### **(4)Test Code：**

The speaker component on the PCB board is controlled by the D3 of the Arduino Nano board.

![](media/60e70fe16a405dc595912abfd62a19bb.png)

#### **(5)Test Result：**

Upload the test code to the Arduino Nano board and power up with a USB cable. Then the power amplifier component will play music.

![Img](./media/img-20240117111802.png)


### Project 4: 8\*8 Dot Matrix

#### **(1)Description：**

Composed of LED emitting tube diodes, the 8\*8 LED dot matrix are applied widely to public information display like advertisement screen and bulletin board, by controlling LED to show words, pictures and videos, etc.

#### **(2)Components Required：**

![Img](./media/img-1234.png)

#### **(3)Knowledge：**

There are different types of matrices, including 4×4, 8×8 and 16×16 and etc. It contains 64 LEDs.

The inner structure of 8×8 dot matrix is shown below.

![图片4](media/df08c3a7c84497e429ce6fde7253d9b3.jpeg)

Every LED is installed on the cross point of row line and column line. When the voltage on a row line increases, and the voltage on the column line reduces, the LED on the cross point will light up. 8×8 dot matrix has 16 pins. Put the silk-screened side down and the numbers are 1, 8, 9 and 16 in anticlockwise order as marked below.

![IMG_258](media/6576aff8e8a7fb35335629c2f60de29b.jpeg)

The definition inner pins are shown below:

![图片3](media/4b98c449bae6648d7719a58d9ab2efa7.jpeg)

For instance, to light up the LED on row 1 and column 1, you should increase the voltage of pin 9 and reduce the voltage of pin 13.

**HT16K33 8X8 Dot Matrix**

The HT16K33 is a memory mapping and multi-purpose LED controller driver. The max. Display segment numbers in the device is 128 patterns (16 segments and 8 commons) with a 13\*3 (MAX.) matrix key scan circuit. The software configuration features of the HT16K33 makes it suitable for multiple LED applications including LED modules and display subsystems. The HT16K33 is compatible with most microcontrollers and communicates via a two-line bidirectional I2C-bus.

The picture below is the working schematic of HT16K33 chip:

![](media/fa5b7bd0d5ce98dbd4cb392dfb0b95e7.png)

We design the drive module of 8\*8 dot matrix based on the above principle. We could control the dot matrix by I2C communication and two pins of microcontroller, according to the above diagram.

**Specification:**

-   Input voltage: 5V

-   Rated input frequency: 400KHZ

-   Input power: 2.5W

-   Input current: 500mA

Introduction for Modulus Tool

The online version of dot matrix modulus tool:[http://dotmatrixtool.com/\#](http://dotmatrixtool.com/)

①Open the link to enter the following page.

![](media/354693b5679a2615c62e99b7025d6355.png)

②The dot matrix is 8\*8 in this project. So set the height to 8, width to 8; as shown below.

![](media/501ba516e4be9c8ec4ca6f37e2b6915f.png)

③Click **Byte order** to select **Row major**.

![](media/5e29353965bbe864662cf4a93bd06268.png)

④ Generate hexadecimal data from the pattern.

As shown below, the left button of the mouse is for selection while the right is for canceling. Thus you could use them to draw the pattern you want, then click **Generate** to yield the hexadecimal data needed.

![](media/32e674da893cc93cd1330a9da73269cb.png)

The generated hexadecimal code（0x00, 0x66, 0x00, 0x00, 0x18, 0x42, 0x3c, 0x00) is what will be displayed, so you need to save it for next procedure.

#### **(4)Wiring up：**

| 8\*8 Dot matrix display | PCB Board |
|-------------------------|-----------|
| G                       | G         |
| 5V                      | 5V        |
| SDA                     | SDA       |
| SCL                     | SCL       |

#### **(5)Test Code：**

The 8\*8 dot matrix is controlled by A4（SDA）and A5（SCL）of the Arduino Nano board.

![](media/14c97457618176c0eb9c4e399bbb461e.png)


#### **(6)Test Result：**

Upload the test code to the Arduino Nano board and power up by a USB cable, the 8\*8 dot matrix display will show show patterns.

![Img](./media/img-20240117111818.png)

### Project 5: Servo Rotation

#### **(1)Description：**

There are two servos on the car. We take the servo connected to pin D9 as an example.

The servo is a motor that can rotate very accurately. It has been widely applied to toy cars, remote control helicopters, airplanes, robots and other fields. In this project, we will use the Nano motherboard to control the servo to spin.

#### **(2)Components Required：**

![Img](./media/img-1234.png)

#### **(3)Knowledge：**

![](media/99830768916233a9c5900ac399006c17.png)

Servo motor is a position control rotary actuator. It mainly consists of a housing, a circuit board, a core-less motor, a gear and a position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and
obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0°--180 °.

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms(50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motors, the same signal may have different rotation angles.

![图片1(17)](media/708316fde05c62113a3024e0efb0c237.jpeg)

In general, servo has three lines in brown, red and orange. The brown wire is grounded, the red one is a positive pole line and the orange one is a signal line.

**![](media/35084ae289a08e35bdb8c89ceb134ba4.png)**

#### **(4)Wire up：**

| Servo  | PCB Board |
|--------|-----------|
| Brown  | G         |
| Red    | 5V        |
| Orange | S1（D9）  |

#### **(5)Test Code：**

The servo for controlling the ultrasonic sensor is controlled by the D9 of the Arduino Nano board.

![](media/9217373979c0294c8235f32a86744c8e.png)

#### **(6)Test Result：**

Upload the test code to the Arduino Nano board, and power up with a USB cable. Then the arm of the servo will rotate to 0°, 45°, 90°, 135° and 180°.

![Img](./media/img-20240117111835.png)

### Project 6: Motor Driving and Speed Control

#### **(1)Description：**

There are many ways to drive motors. This car uses the most commonly used DRV8833 motor driver chip, which provides a dual-channel bridge electric driver for toys, printers and other motor integration applications.

In this experiment, we use the DRV8833 motor driver chip on the expansion board to drive the two DC motors, and demonstrate the effect of forward, backward, left-turning, and right-turning.

#### **(2)Components Required：**

![Img](./media/img-1234.png)

#### **(3)Knowledge：**

DRV8833 motor driver chip: Dual H-bridge motor driver with current control function, can drive two DC motors, one bipolar stepper motor, solenoid valve or other inductive loads. Each H-bridge includes circuitry to regulate or limit winding current.

An internal shutdown function with a fault output pin is used for over-current and short circuit protection, under-voltage lockout and over-temperature. A low-power sleep mode is also added. Let's take a look at the schematic diagram of the DRV8833 motor driver chip driving two DC motors:

![IMG_256](media/bc839fa0f37fdc3003485b0398dd6d1f.png)

![](media/9cb8b7c00f814e367040f2ed4a3c9f4a.png)

If you want to get insight to it, you can check the specification of this chip. Just browse it in the“Attachments”folder.

![](media/fd127538d99fbdce1a8956365cccaf7c.png)

#### **(4)Specification：**

Input voltage of logic part: DC 5V

Input voltage of driving part : DC 5V

Working current of logic part: \<30mA

Operating current of driving part: \<2A

Maximum power dissipation: 10W (T=80℃)

Motor speed: 5V 200 rpm / min

Motor drive form: dual H-bridge drive

Control signal input level: high level 2.3V\<Vin\<5V, low level -0.3V\<Vin\<1.5V

Working temperature: -25\~130℃

#### **(5)Drive the car to move**

From the above diagram, the direction pin of the left motor is D4; the speed pin is D6; D2 is the direction pin of the right motor; and D5 is speed pin.

PWM drives the robot car. The PWM value is in the range of 0-255. The more the PWM value is set, the faster the rotation of the motor.

| Function   | D4   | D6（PWM） | Left motor    | D2   | D5（PWM） | Right motor   |
|------------|------|-----------|---------------|------|-----------|---------------|
| forward    | LOW  | 200       | clockwise     | LOW  | 200       | clockwise     |
| Go back    | HIGH | 50        | anticlockwise | HIGH | 50        | anticlockwise |
| Turn left  | HIGH | 200       | anticlockwise | LOW  | 200       | clockwise     |
| Turn right | LOW  | 200       | clockwise     | HIGH | 200       | anticlockwise |
| Stop       | LOW  | 0         | stop          | LOW  | 0         | stop          |

#### **(6)Test Code：**

![](media/22523147b647bc04f926683b1631c6f2.png)

#### **(7)Test Result：**

Upload the test code to the Arduino Nano board, install batteries, turn the power switch to ON end and power up. The car moves forward for 2s, back for 2s, turn left for 2s, right for 2s and stops for 2s.

### Project 7: Ultrasonic Sensor

There is an ultrasonic sensor on the car. It is a very affordable distance-measuring sensor.

The ultrasonic sensor sends a high-frequency ultrasonic signal that human hearing can’t hear. When encountering obstacles, these signals will be reflected back immediately. After receiving the returned information, the distance between the sensor and the obstacle will be calculated by judging the time difference between the transmitted signal and the received signal. It is mainly used for object avoidance and ranging in various robotics projects.

#### Project 7.1: Ultrasonic Ranging

##### **(1)Description：**

In this experiment, we use an ultrasonic sensor to measure distance and print the data on a serial monitor.

##### **(2)Components Required：**

![Img](./media/img-1234.png)

##### **(3)Knowledge：**

The HC-SR04 ultrasonic sensor uses sonar to determine distance to an object like what bats do. It offers excellent non-contact range detection with high accuracy and stable readings in an easy-to-use package. It comes complete with ultrasonic
transmitter and receiver modules.

The HC-SR04 or the ultrasonic sensor is being used in a wide range of electronics projects for creating obstacle detection and distance measuring application as well as various other applications. Here we have brought the simple method to measure the distance with Arduino and ultrasonic sensor and how to use ultrasonic sensor with Arduino.

![](media/e6f6037071e434febf7090b56ac35802.png)

**Use method and timing chart of ultrasonic module:**

1.  Setting the delay time of Trig pin of SR04 to 10μs at least, which can trigger it to detect distance.
    
2.  After triggering, the module will automatically send eight 40KHz ultrasonic pulses and detect whether there is a signal return. This step will be completed automatically by the module.
    
3.  If the signal returns, the Echo pin will output a high level, and the duration of the high level is the time from the transmission of the ultrasonic wave to the return.

![](media/4114885ac4b6214953e3224d8c1d52c4.png)

Time=Echo pulse width, unit: us

Distance（cm）=time/ 58

Distance(inch)=time/ 148

![](media/db430baa07e2e4d9ac9efca1950b953a.jpeg)

The HC-SR04 ultrasonic sensor has four pins: Vcc, Trig, Echo and GND.

The Vcc pin provides power generating ultrasonic pulses and is connected to Vcc/+5V. The GND pin is grounded/GND.

The Trig pin is where the Arduino sends a signal to start the ultrasonic pulse. The Echo pin is where the ultrasonic sensor sends information about the duration of the ultrasonic pulse stroke to the Arduino control board.

##### **(4)Wiring Up**

| Ultrasonic Sensor | PCB Board |
|-------------------|-----------|
|  Vcc              | 5V        |
| Trig              | S2（D8）  |
| Echo              | S1（D7）  |
| Gnd               | G         |

##### **(5)Test Code：**

The pin Trig and Echo of the ultrasonic sensor are controlled by the D8 and D7 of the Arduino Nano.

![](media/5f7ef28d334cc80c62f372d999666bd8.png)

##### **(6)Test Result：**

Upload the test code to the Arduino Nano board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and set baud rate to 9600.

When you move an object in front of the ultrasonic sensor, it will detect the distance and the serial monitor will show the distance value.

![Img](./media/img-20240117111855.png)


![](media/f4f0ae02706b92e180a58788ed28698d.png)

#### Project 7.2: Ultrasonic Following

##### **(1)Description：**

In the above experiments, we have learned about the 8\*8 dot matrix, motor drivers and speed regulation, ultrasonic sensors, servos and other hardware. In this experiment, we will combine them to create a follow car with the ultrasonic sensor. The can can follow an object to move through measuring distance.

##### **(2)Components Required：**

![Img](./media/img-1234.png)

##### **(3)Working Principle：**

| Detection   | Detect the front distance    Distance（unit：cm） |
| ----------- | ------------------------------------------------- |
| Condition 1 | Distance＜8                                       |
| State       | Go back（set PWM to 100）                         |
| Condition 2 | 8≤distance\<13                                    |
| State       | stop                                              |
| Condition 3 | 13≤distance\<35                                   |
| State       | Go forward（set PWM to 100）                      |
| Condition 4 | distance≥35                                       |
| State       | stop                                              |

##### **(4)Flow Chart：**

![QQ图片20220119081423-2](media/e1ded45b4454e64b7ff419bad285cb3a.png)

##### **(5)Test Code：**

![](media/e0e3097c312539f3d7c4bd1696ec1772.png)

##### **(6)Test Result：**

Upload the code to the Arduino Nano board, install batteries and turn the switch to the ON end and power up. Then the car will follow the obstacle to move.

![Img](./media/img-20240117112024.png)


#### Project 7.3: Dodge obstacles

##### **(1)Description：**

In this project, we will take advantage of the ultrasonic sensor to detect the distance away from the obstacle so as to avoid them.

##### **(2)Components Required：**

![Img](./media/img-1234.png)

##### **(3)Working Principle：**

![](media/image-20231008132805325.png)

![](media/image-20231008132855579.png)

##### **(4)Flow Chart：**

![QQ图片20220119081418-2](media/62cafb9417859896368e046396c58495.png)

##### **(5)Test Code：**

![](media/5f367293f388702a7c69c37cff2f3b86.png)

##### **(6)Test Result：**

Upload the test code to the Arduino Nano board, put batteries in the battery holder, turn the power switch to the ON end and power up. Then the car can automatically dodge obstacles.

![Img](./media/img-20240117112039.png)


### Project 8: Line Tracking Sensor

There are two IR line tracking sensors on the car. They are actually two pairs of ST188L3 infrared tubes and used to detect black and white lines. In this project, we will make a line tracking car.

#### Project 8.1: Reading Values

##### **(1)Description：**

In this experiment, we use ST188L3 infrared tubes to detect black and white lines, then print the data on the serial monitor.

##### **(2)Components Required：**

![Img](./media/img-1234.png)

##### **(3)Knowledge：**

**Infrared line tracking:**

The IR line tracking sensor boasts a pair of ST188L3 infrared tubes. ST188L3 tubes has an infrared emitting diode and a receiver tube. When the emitting diode emits an infrared signal then received by the receiving tube after being reflected by the white object. Once the receiving tube receives the signal, the output terminal will output a low level (0); when the infrared emitting diode emits an infrared signal, and the infrared signal is absorbed by the black object, a high level (1) will be output, thus realizing the function of detecting signals through infrared rays.

Warning: Reflective optical sensors (including IR line tracking sensors) shouldn’t be applied under sunlight as there is a lot of invisible light such as infrared and ultraviolet.

Values detected by the line tracking sensor are shown in the table.

The value will be 1 if detecting black or no objects and the value 0 will appear if detecting white objects.

The detected black object or no object represents 1, and the detected white object represents 0.

| Left | Right | Value（Binary ） |
|------|-------|------------------|
| 0    | 0     | 00               |
| 0    | 1     | 01               |
| 1    | 0     | 10               |
| 1    | 1     | 11               |

##### **(4)Test Code：**

The line tracking sensors of the PCB board are controlled by D11 and D10 of the Arduino Nano baord.

![](media/8cbb491e030fc116dc692921b2565b6f.png)

##### **(5)Test Result：**

Upload the test code to the Arduino Nano board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and
set baud rate to 9600.

Put a black thing under the line tracking sensor of the car and move it, you will see different indicators light up, and at the same time you will see the value on the serial monitor.

The sensitivity can be adjusted by rotating the potentiometer. When the indicator light is adjusted to the critical point of on and off state, the sensitivity is the highest.

![](media/33c79ed9bc64c690b762c57eaa99e0c2.png)

#### Project 8.2: Line Tracking

##### **(1)Description：**

We’ve introduced the knowledge of motor drivers, speed regulation, and infrared line tracking. In this experiment, the car will perform different actions according to the values transmitted by the infrared tracking.

##### **(2)Components Required：**

![Img](./media/img-1234.png)

##### **(3)Working Principle：**

| Left | Right | Value（Binary ） | State        |
|------|-------|------------------|--------------|
| 0    | 0     | 00               | Stop         |
| 0    | 1     | 01               | Turn right   |
| 1    | 0     | 10               | Turn left    |
| 1    | 1     | 11               | Move forward |

##### **(4)Flow Chart：**

![IMG_256](media/c6a0ace5faa949e4fb24fc511d179e08.png)

##### **(5)Test Code：**

![](media/5cc84225269f46413103c9f87c096a52.png)

##### **(6)Test Result：**

Upload the test code to the Arduino Nano board, turn the power switch to the ON end, power up and put the car on a map we provide. Then it will perform different functions via values sent by line tracking sensors.

### Project 9: Light Following

There are two photoresistors on the car. They can vary with the light intensity and send information to the Nano board to control the car.

Photoresistors can determine and conduct the car to move by detecting light.

#### Project 9.1: Read Values

##### **(1)Description：**

In this experiment, we will learn the working principle of the photoresistor.

##### **(2)Components Required：**

![Img](./media/img-1234.png)

##### **(3)Knowledge：**

**Photoresistor:**

It mainly uses a photosensitive resistance element whose resistance varies from the light intensity. The signal terminal of the sensor is connected to the analog port of the microcontroller. When the light is stronger, the analog value at the analog port will increase; on the contrary, when the light intensity is weaker, the analog value of the microcontroller will reduce. In this way, the corresponding analog value can reflect the ambient light intensity.

##### **(4)Wire up：**

Through the wiring-up diagram, signal pins of two photoresistors are connected to A6 and A7 of the Nano board.

For the following experiment, we use the photoresistor connected to A6 to finish experiments. First, let’s read analog values.

| Left photoresistor | PCB board |
|--------------------|-----------|
| G                  | G         |
| V                  | V         |
| S                  | S（A6）   |

![Img](./media/img-20240122140348.png)

##### **(5)Test Code：**

The left photoresistor is controlled by the A6 of the Arduino Nano board.

![](media/d71c17943bd6043e9367541dad730441.png)

##### **(6)Test Result：**

Upload the test code to the Arduino Nano board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and
set baud to 9600.

When the light intensifies, the analog value will get increased; on the contrary, the analog value will get reduced.

![](media/2bcaf5712edfb3cd71ca331ef128da70.png)

#### Project 9.2: Light Following Car

##### **(1)Description：**

We have learned the working principle of photoresistor, motor and speed regulation. In this experiment, we will use a photoresistor to detect the intensity of light as as to achieve the light following effect.

##### **(2)Components Required：**

![Img](./media/img-1234.png)

##### **(3)Working Principle：**

| Analog value of the left sensor | Analog value of the right sensor | Function      |
|---------------------------------|----------------------------------|---------------|
| \>500                           | \>500                            | Move forward  |
| \>500                           | ≤500                             | Move to left  |
| ≤500                            | \>500                            | Move to right |
| \<500                           | \<500                            | Stop          |

##### **(4)Wiring up：**

| Left Photoresistor | PCB Board |   | Right photoresistor | PCB Board |
|--------------------|-----------|---|---------------------|-----------|
| G                  | G         |   | G                   | G         |
| V                  | V         |   | V                   | V         |
| S                  | S（A6）   |   | S                   | S（A7）   |

![Img](./media/img-20240122141207.png)

##### **(5)Flow Chart：**

![QQ图片20220119081408-2](media/d30fcd3007f0d8e6c995bc456679172e.png)

##### **(6)Test Code：**

The left and right photoresistors are controlled by A6 and A7 of the Arduino Nano board.

![](media/ba6d00fd3c4015f5d00058643966ffdb.png)

##### **(7)Test Result：**

Upload the test code to the Arduino Nano board, put batteries in the battery holder, turn the power switch to the ON end and power up. Then the car will follow the light to move.

![Img](./media/img-20240117112106.png)


### Project 10: IR Remote Control

Infrared remote controls are everywhere in daily life. It is used to control various home appliances, such as TV, speakers, video recorders and satellite signal receivers.

The remote control is composed of an IR emitter, an IR receiver and a decoding MCU. In this project, we will make a IR remote control car.

#### Project 10.1: IR Remote and Reception

##### **(1)Description：**

In this experiment, we will combine the IR receiver and the IR remote control to read key values and show them on the serial monitor.

##### **(2)Components Required：**

![Img](./media/img-20240122121011.png)

##### **(3)Knowledge：**

**IR Remote Control：**

It is a device with buttons. When the key is pressed, IR signals will be sent.

Infrared remote control technology is widely used, such as TVs, air conditioners and so on. And it can control air conditioners and TVs.

The infrared remote control adopts NEC coding, and the signal period is 110ms.

The remote control is shown below:

![遥控器-3](media/3c9d76cb0d24d9861811ce2cb0bb6ae4.png)

Infrared (IR) receiver:

It can receive infrared light and be used to detect the infrared signal emitted by the infrared remote control.

It can demodulate the received infrared light signal and convert it back to binary, and then transmit the information to the microcontroller.

![Arduino-IR-Remote-Receiver-Tutorial-IR-Signal-Modulation-1024x276](media/3da1969e509f53706643c77d0534eb73.png)

**NEC Infrared communication protocol：**

**NEC Protocol**

To my knowledge the protocol I describe here was developed by NEC (Now Renesas). I've seen very similar protocol descriptions on the internet, and there the protocol is called Japanese Format.

I do admit that I don't know exactly who developed it. What I do know is that it was used in my late VCR produced by Sanyo and was marketed under the name of Fisher. NEC manufactured the remote control IC.

This description was taken from my VCR's service manual. Those were the days, when service manuals were filled with useful information!

**Features**

-   8 bit address and 8 bit command length.

-   Extended mode available, doubling the address size.

-   Address and command are transmitted twice for reliability.

-   Pulse distance modulation.

-   Carrier frequency of 38kHz.

-   Bit time of 1.125ms or 2.25ms.

**Modulation**

![NEC Modulation](media/da33571c6f0afb94b1ec1d91caba3edb.png)

The NEC protocol uses pulse distance encoding of the bits. Each pulse is a 560µs long 38kHz carrier burst (about 21 cycles). A logical "1" takes 2.25ms to transmit, while a logical "0" is only half of that, being 1.125ms. The recommended carrier duty-cycle is 1/4 or 1/3 .

**Protocol**

![NEC Pulse Train](media/f970404e7bbfb5711fea5c776f689f3a.png)

The picture above shows a typical pulse train of the NEC protocol. With this protocol the LSB is transmitted first. In this case Address \$59 and Command $16 is transmitted. A message is started by a 9ms AGC burst, which was used to set the gain of the earlier IR receivers. This AGC burst is then followed by a 4.5ms space, which is then followed by the Address and Command. Address and Command are transmitted twice. The second time all bits are inverted and can be used for verification of the received message. The total transmission time is constant because every bit is repeated with its inverted length. If you're not
interested in this reliability you can ignore the inverted values, or you can expand the Address and Command to 16 bits each!

Keep in mind that one extra 560µs burst has to follow at the end of the message in order to be able to determine the value of the last bit.

![NEC Repeat](media/63364daf21e5522c64eb8dfa82f2cef2.png)

A command is transmitted only once, even when the key on the remote control remains pressed. Every 110ms a repeat code is transmitted for as long as the key remains down. This repeat code is simply a 9ms AGC pulse followed by a 2.25ms space and a 560µs burst.

![NEC Sequence](media/afea92a3b5cc1aa2457d2b118b157c84.png)

**Extended NEC protocol**

The NEC protocol is so widely used that soon all possible addresses were used up. By sacrificing the address redundancy the address range was extended from 256 possible values to approximately 65000 different values. This way the address range was extended from 8 bits to 16 bits without changing any other property of the protocol.

By extending the address range this way the total message time is no longer constant. It now depends on the total number of 1's and 0's in the message. If you want to keep the total message time constant you'll have to make sure the number 1's in the address field is 8 (it automatically means that the number of 0's is also 8). This will reduce the maximum number of different addresses to just about 13000.

The command redundancy is still preserved. Therefore each address can still handle 256 different commands.

![Extended NEC protocol](media/2f78d1ce7f001926f6b90ad966796e91.png)

Keep in mind that 256 address values of the extended protocol are invalid because they are in fact normal NEC protocol addresses. Whenever the low byte is the exact inverse of the high byte it is not a valid extended address.

##### **(4)Test Code：**

The IR receiver on the PCB board is controlled by IO port(D12) of the Arduino Nano board.

![](media/acf02ec222bc0f2812d150cfabc01be8.png)

##### **(5)Test Result：**

Upload the test code to the Arduino Nano board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and
set to 9600.

Press a key on the IR remote control, you will view a code on the serial monitor. If FFFFFFFF shows up, just ignore it.

![](media/0380c7eb48d788203d5cc2f353701ef0.png)

Code of each key.

![图形1](media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)

#### Project 10.2: IR Remote Control Car

##### **(1)Description：**

In the above experiment, we have learned about the knowledge of the 8\*8 dot matrix display, the motor driver and speed regulation, the infrared receiver and the infrared remote control. In this experiment, we will use the infrared remote
control and the infrared receiver to control the car.

##### **(2)Components Required：**

![Img](./media/img-20240122121011.png)

##### **(3)Working Principle：**

| Keys                                            | Keys Code | Functions                                 |
| ----------------------------------------------- | --------- | ----------------------------------------- |
| ![](media/e471ee4e3fd5a9daafc9d97460124119.png) | FF629D    | Go forward<br>Display “forward”pattern    |
| ![](media/ace76021618d9ae6107a0f9b69dc47fc.png) | FFA857    | Go back<br>Display “back”pattern          |
| ![](media/813f77055aefe6ee0fce22e14fbf093c.png) | FF22DD    | Turn left<br/>Show“left” pattern          |
| ![](media/9eb9042aace52c96a86379dbac70ee2d.png) | FFC23D    | Turn right<br/>Show“right turning”pattern |
| ![](media/68cbb08d230ef50b2f69c66c685414f6.png) | FF02FD    | stop<br/>show“stop”pattern                |

##### **(4)Flow Chart：**

![QQ图片20220119081349-2](media/b8ecdfd8dbc04c43021b09bd2c6a48f0.png)

##### **(5)Test Code**

![](media/116950e70caf1c7009916b81a7d159a6.png)

##### **(6)Test Result：**

Upload the test code to the Arduino Nano motherboard, install batteries, turn the power switch to the ON end, power up and press a key of the IR remote control. Then the car will make the corresponding movement.

![Img](./media/img-20240117112130.png)


### Project 11: WIFI Control

In this lesson, we control the car through app. The Beetlebot APP sends commanders to the WIFI ESP-01 module then transfers to it to the microcontroller. By doing this, the car can perform different functions.

#### Project 11.1: WIFI Test

##### **(1)Description：**

The ESP8266 serial WiFi ESP-01 module is an ultra-low-power UART-WiFi transparent transmission module and designed for mobile devices and IoT applications.

It can achieve networking functions by connecting devices to Wifi internet.

##### **(2)Components Required：**

![Img](./media/img-20240122131811.png)

##### **(3)Knowledge：**

![KS0388 Keyestudio USB转ESP-01S WIFI模块串口测试扩展板_0002_图层
1](media/54668bc6799d314c47c7ffd29dcaa013.jpeg)

**USB to ESP-01S WiFi module serial shield:**

It is suitable for the ESP-01S WiFi module. Turn the DIP switch on the USB to ESP-01S WiFi module serial Expansion Boardto Flash Boot, and plug into computer’s USB port. You can use serial debugging tool to test the AT command.

Turn the DIP switch on the USB to ESP-01S WiFi module serial expansion board to the UartDownload, ESP-01 module is at download mode. You can download the firmware to ESP-01 module using AT firmware.

![](media/408f9f823aab6078768f08462eda209b.png)

**ESP8266 serial WIFI ESP-01：**

ESP8266 serial WiFi ESP-01 is an ultra-low-power UART-WiFi transparent transmission module. It can be widely used in smart grids, intelligent transportation, smart furniture, handheld devices, industrial control and other fields.

**Features**

-   Support wireless 802.11 b/g/n standards

-   Support STA/AP/STA+AP three modes of operation

-   Built-in TCP/IP protocol stack to support multi-channel TCP Client connections
    
-   Supports many Socket AT commands

-   Supports UART / GPIO data communication interface

-   Supports Smart Link smart networking function

-   Supports remote firmware upgrades(OTA)

-   Built-in 32-bit MCU, can also be used as an application processor

-   Ultra-low-power and highly integrated Wi-Fi chip for battery-powered applications
    
-   Working temperature range: -40℃ to + 125℃

-   3.3V single power supply

##### **(4)Functions**

**A. Main functions**

The main functions that can be achieved by ESP8266 include: serial port transparent transmission , PWM regulation, GPIO control.

※Serial port transparent transmission: The transmission is reliable with a maximum transmission rate of 460800bps.

※PWM regulation: Adjusting lights and tricolor LED, motor speed control, etc.

※GPIO control: Control switch, relay, etc.

**Working modes**

The ESP8266 module supports three operating modes, STA/AP/STA+AP.

❊STA mode: The ESP8266 module can access to the Internet through a router, so the mobile phone or computer can remotely control the device through the Internet.

![](media/25e67f5385362b2cd1e9717aac85ab76.png)

❊AP mode: ESP8266 module, as a hotspot, allows the direct communication with the module and cellphones/computers, achieving wireless control of the local area network (LAN).

❊STA+AP mode: two modes coexist, that is, the Internet can achieve free switch.

![](media/eacfe5516a10eabe5f3451fb8a70ff5d.png)

##### **(5)Applications**

Serial CH340 to Wi-Fi

Industrial transparent transmission DTU

Wi-Fi remote monitoring/control

Toy industry

Color LED control

Integrated management of fire protection and security intelligence.

Smart card terminals, wireless POS machines, Wi-Fi cameras, handheld devices,etc.

##### **(6)Insert the Wifi serial port expansion board into the USB port of your PC**

Insert the ESP8266 serial WIFI ESP-01 module into the USB to ESP-01S WIFI expansion board.

![](media/a819a91a024eacd8fb5ffd368b7ccad2.png)

Turn the DIP switch of the USB to ESP-01S WIF expansion board to UartDownload end and plug it to the USB port of your computer.

**![\_DSC6532(1)](media/88aeb7b568eee84038260ae898070e60.jpeg)**

##### **(7)APP:**

**For Android system：**

(1)\. Turn on the location services of the mobile phone and connect the wifi of yourself.

![Img](./media/img-20240112115053.png)

![Img](./media/img-20240112115106.png)

(2)\. Search <span style="color: rgb(0, 209, 0);"></span>**Beetlebot** in Google Play, or open the following link to download and install the app.

[https://play.google.com/store/apps/details?id=com.keyestudio.beetlecar](https://play.google.com/store/apps/details?id=com.keyestudio.beetlecar)

![Img](./media/img-20240112115631.png)

![Img](./media/img-20240112115808.png)

![Img](./media/img-20240112115923.png)

(3)\. Click <span style="color: rgb(0, 209, 0);">**Open**</span> button and enter interface of the app. 

![Img](./media/img-20240112120045.png)

![Img](./media/img-20240112120654.png)

(4)\. Input the detected Wifi IP address(<span style="color: rgb(255, 76, 65);">for example, the IP address in the serial monitor is 192.168.1.134</span>), and Slide the button ![Img](./media/img-20240112141700.png) to the right to connect Wifi. At same time, the IP address will be shown at the left box, which means that Wifi is connected well.

![IMG_256](media/f6ca3d69a32556445bc1b9bd8b047cf6.jpg)

![Img](./media/img-20240112152249.png)

<span style="color: rgb(255, 76, 65);">Note:</span> Click buttons on the APP, the blue indicator on the ESP8266 serial WIFI ESP-01 module will flash, indicating that the APP has been connected to WIFI.

<br>
<br>

**For IOS system**

(1)\. Turn on the location services of the mobile phone and connect the wifi of yourself.

![Img](./media/img-20240112115053.png)

![Img](./media/img-20240112115106.png)

(2)\. Open App Store

![](media/27924fdb3d67692df7c63d8d0fb72287.png)

(3). Search <span style="color: rgb(0, 209, 0);">**Beetlebot**</span> in App Store，click“![](media/962a57f92b78eea1f0e3e81463497a9c.png)”to download Beetlebot APP.

![Img](./media/img-20240112132652.png)

(4)\. Click <span style="color: rgb(0, 209, 0);">**Open**</span> button and enter interface of the app. 

![Img](./media/img-20240112133409.png)

(5)\. Input the detected Wifi IP address(<span style="color: rgb(255, 76, 65);">for example, the IP address in the serial monitor is 192.168.1.134</span>), and Slide the button ![Img](./media/img-20240112141700.png) to the right to connect Wifi. At same time, the IP address will be shown at the left box, which means that Wifi is connected well.

![IMG_256](media/f6ca3d69a32556445bc1b9bd8b047cf6.jpg)

![Img](./media/img-20240112152249.png)

<span style="color: rgb(255, 76, 65);">Note:</span> Click buttons on the APP, the blue indicator on the ESP8266 serial WIFI ESP-01 module will flash, indicating that the APP has been connected to WIFI.


##### **(8)Add the ESP8266 control board：**

Click ![](media/bfbf7c471ede03845519b11961a13837.png) to enter the main page, select the control board needed. In this project, we select the Plus board and click **Connect.**

Then it is connected, Click **Go to Editor** to return the code editor. Icon ![](media/bfbf7c471ede03845519b11961a13837.png) will change into ![](media/a11afdfbae9262d4514c139ec83dbf0c.png) and ![](media/db0135c23e5313dac75a33d7d2faa529.png)will change into ![](media/4f8778ff131729b181ea6ec292614a3c.png). This means the Plus board is connected to the COM port.

![](media/01504a61ce3a92d3f880a38afb8faaaa.png)

![](media/63cae3085c75e1e18ffc17265feaf9ae.png)

![](media/b375b57da6ba83d9ff9de789bced92d1.png)

![](media/870fed3cfdc8181a222451c071d03980.png)

![](media/c4fd4822bf7fded4e61818df50d7bca4.png)

If the ESP8266 board is connected , but icon ![](media/db0135c23e5313dac75a33d7d2faa529.png)doesn’t change into ![](media/aca76cd83bad893addee50433a0c6ebd.png). You need to click ![](media/db0135c23e5313dac75a33d7d2faa529.png)to connect the COM port. Click ![](media/db0135c23e5313dac75a33d7d2faa529.png) and **Connect.**

Then you will find a page pop up, showing **Connected**.

![](media/7e69f6563799595370035331a6c3ce2a.png)

![](media/faaf0a961ec1ccffdd0994fbee94e8fb.png)

![](media/037ac74efda1a1e8f3096dd932b735ce.png)

![](media/9505bf08cbdb4a150de1cc74ef05d7fd.png)

##### **(9)Add the Beetlebot wifi module：**

Click![](media/7e55669852230e653cc1fc90dabb681a.png)to enter sensor/module expansion interface and click“Beetlebot wifi”, “Not loaded”will switch into“loaded”. Then the Beetlebot wifi module will be added.

Click![](media/a8cb2d7005fca8f4419bb557b73f10e9.png)to return the code editor, then you will view the Beetlebot wifi module.

![](media/3e9501ad7386e8c80fc8fcb69a3e4a9b.png)

![](media/e13d77234dbc67480c1080e1f6f259d8.png)

![](media/44b8278d19f134d1e9b453b830e20f2d.png)

![](media/dec7529aea7f10461b651280e1897425.png)

![](media/4f15aaaf6aff1296fcb8bd2a6ddae551.png)

##### **(10)ESP8266 Code：**

If there is no wifi in your home, just enable your shared wifi on the phone.

![](media/6f0bb5b55c9da4326375e2dcad11518b.png)

<span style="color: rgb(255, 76, 65);">Note：You need to change the wifi name and password into yours.</span>

![](media/34cd34dee3809a12be4962ce741de1c5.png)

After the Wifi name and Wifi password are changed, plug the USB to ESP-01S WIFI expansion board to the USB port of the computer, turn its DIP switch to the "**Uart Download**" end and click “**Upload**” .

Upload the ESP8266 code to the ESP8266 to WIFI ESP-01 module.

<span style="color: rgb(255, 76, 65);">Note:</span> if the code is uploaded successfully, reboot the ESP-01S WIFI expansion board.

<br>
<br>

![](media/d4965a79c810807b4623563f7820f2db.png)

After the code is uploaded. Unplug the USB to ESP-01S WIFI expansion board and ESP8266 serial WIFI ESP-01 module.

##### **(11)Interface the Arduino Nano board**

![](media/2ae0682a5f579c0e2c54127f6a7d6edf.png)

##### **(12)Set the interface of Beetlebot:**

Open KidsBlock to click![](media/bfbf7c471ede03845519b11961a13837.png)to enter the main page. Select **Beetlebot**，and click **Connect**，then the **Beetlebot** is connected.

Click“**Go to Editor**” to return code editor, ![](media/bfbf7c471ede03845519b11961a13837.png)will change into![](media/6a8530eb0230355b4c7d216f3e1faeaf.png)，and ![](media/db0135c23e5313dac75a33d7d2faa529.png)into![](media/0f64e7bcfda60830752545e973795914.png); this indicates the device is connected to the port.

![](media/da9cf688336d2fd12385d7d14a3b2ba6.png)

![](media/f54d6ae3d30827f2694cbcfc2e1dd5d4.png)

![](media/cb9e5ff39c1e677c7dc066a5f0c2fec8.png)

![](media/ccb3f4bb8dae899f306fc3f12da1abdb.png)

![](media/e65f6f63c02286805ce543f08a363fc9.png)

Then click ![](media/770292e2b4d7555030eaf7951cf58aec.png)to switch mode. The ![](media/770292e2b4d7555030eaf7951cf58aec.png) will change into![](media/6647392e2b1488904406ad656f6e08b4.png)

![](media/d9adac4ca2b5382fbe9cb0851f9531b6.png)

![](media/13e56432e2c2e1c0294f84a64f141b77.png)

##### **(13)Arduino Nano Test Code：**

![](media/55fec33dcf267148c0007dc78214cc1e.png)

##### **(14)Test Result：**

Click **Upload** to upload the test code to the Arduino Nano board.

Then insert the ESP8266 serial WIFI ESP-01module into the WiFi port of the PCB board.

(<span style="color: rgb(255, 76, 65);">Note：</span>keep the USB cable connected.)

![](media/2ae0682a5f579c0e2c54127f6a7d6edf.png)

![](media/2a76a644f824f829fed68809b170e028.png)

Click ![](media/45ffad9ff1f6dc38d12a6e1d7a065176.png) and set baud rate to 9600. Then the serial monitor will show your IP address of Wifi.

The IP address of Wifi sometimes changes. If the original doesn’t change, check the IP address of Wifi again.

![QQ图片20220104160110-2](media/357a8df7af2bf56de68c01002418929f.png)

Input the detected Wifi IP address(<span style="color: rgb(255, 76, 65);">for example, the IP address in the serial monitor is 192.168.1.134</span>), and Slide the button ![Img](./media/img-20240112141700.png) to the right to connect Wifi. At same time, the IP address will be shown at the left box, which means that Wifi is connected well.

![IMG_256](media/f6ca3d69a32556445bc1b9bd8b047cf6.jpg)

![Img](./media/img-20240112152249.png)

<span style="color: rgb(255, 76, 65);">Note:</span> Click buttons on the APP, the blue indicator on the ESP8266 serial WIFI ESP-01 module will flash, indicating that the APP has been connected to WIFI.
<br>
<br>

After the APP has connected to the WIFI, start the following operations:

Click buttons on the app, the serial monitor will print some control characters, as shown below.

![QQ图片20220104160110-3](media/88d497c4efb32ae684fed518b8bbb919.png)

**Interface of App**

![APP界面功能英文介绍](media/49dce218d3a238aa8b90f763409cf7b7.png)

![Img](./media/img-20240117112226.png)

Click![](media/db52b661d5b22528618e9c14aefa367e.png)，a“smile”pattern will be displayed；click ![](media/6abdf809090a56fb251e9ee4d44c70f4.png),“十”will be shown；click![](media/aca24e8c4a86a9a2702160be4a4d9970.png),“❤”will be shown.

#### Project 11.2: Multi-purpose Car

##### **(1)Description：**

In this project we will demonstrate multiple functions of the Beetlebot car through app.

##### **(2)Components Required：**

![Img](./media/img-20240122131811.png)

##### **(3)Test Code：**

The code of ESP8266wifi module is not changed, then change the wifi password of the code into yours.


![](media/7573a90c49333b0939c5a4948fde8ec9.png)

##### **(4)APP operation, as shown below:**

![](media/49dce218d3a238aa8b90f763409cf7b7.png)

<span style="color: rgb(255, 76, 65);">Note: See the previous lesson of Project 11.1 for how to connect your app to WiFi。</span>

<br>
<br>

Click![](media/a6c79cf21ce5acefae141133f65bbb6b.png)to control the car to move in different directions ;
click  ![](media/03c021648ea2713c0b4bf880b763e416.png) to control the SK6812RGB to show different colors；
click  ![](media/3bc4ea5237aa177b8ecd8aad1f926df3.png) to control the 8\*8 dot matrix display show different patterns.

![Img](./media/img-20240117112232.png)

