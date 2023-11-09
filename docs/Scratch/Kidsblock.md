# **Kidsblock tutorial**

## Getting started with Kidsblock software

**Instruction**

The Kidsblock, based on the Scratch graphical programming software, integrates multiple mainstream mainboards, sensors as well as modules. It can be programmed by dragging graphical blocks and using the C/C++ programming language, making programming easy and interesting for children to learn.

**Download and install KidsBlock software**

**[Windows system](https://www.kidsblock.cn/Down/KidsBlock.exe)**

**[MACOS system](https://www.kidsblock.cn/Down/KidsBlock-MACOS.dmg)**


**Install Development Board Driver**

**[How to install development board driver](https://kidsblocksite.readthedocs.io/en/latest/driver/)**

**Start your first program**
**[Quick Start](https://kidsblocksite.readthedocs.io/en/latest/function/)**

## Interface Setting：

After the KidsBlock is installed，open KidsBlock to click![](media/bfbf7c471ede03845519b11961a13837.png)\<“**Beetlebot**”\<“**Connect**”，

Then the **Beetlebot car is connected.** Click**“Go to Editor”**to return the code editor.

![](media/bfbf7c471ede03845519b11961a13837.png)will change into![](media/6a8530eb0230355b4c7d216f3e1faeaf.png)and![](media/db0135c23e5313dac75a33d7d2faa529.png)into![](media/0f64e7bcfda60830752545e973795914.png).

This means the **Beetlebot car is connected to the COM port**

![](media/da9cf688336d2fd12385d7d14a3b2ba6.png)

![](media/f54d6ae3d30827f2694cbcfc2e1dd5d4.png)

![](media/cb9e5ff39c1e677c7dc066a5f0c2fec8.png)

![](media/ccb3f4bb8dae899f306fc3f12da1abdb.png)

![](media/e65f6f63c02286805ce543f08a363fc9.png)If the car is connected, but![](media/db0135c23e5313dac75a33d7d2faa529.png)doesn’t change into![](media/0f64e7bcfda60830752545e973795914.png).

Just click![](media/db0135c23e5313dac75a33d7d2faa529.png)to connect the COM port.Click![](media/db0135c23e5313dac75a33d7d2faa529.png)，then click“**Connect**”，after a while, if the“**Connected**”page pops up，the com port will be connected.

![](media/1946dc6b0b97e579e091f1b12ca37860.png)

![](media/648120fca2df1b7e801da575aacb582d.png)

![](media/654710845e66f87cf4417c26195955b2.png)

![](media/e65f6f63c02286805ce543f08a363fc9.png)

Then click ![](media/770292e2b4d7555030eaf7951cf58aec.png)to switch the mode, the mode![](media/770292e2b4d7555030eaf7951cf58aec.png)will switch to![](media/6647392e2b1488904406ad656f6e08b4.png)

![](media/d9adac4ca2b5382fbe9cb0851f9531b6.png)

![](media/13e56432e2c2e1c0294f84a64f141b77.png)





## Projects：

### Project 1: LED Blinking

**Description：**

There is an onboard LED (L) on our Arduino Nano board connected to D13. In this experiment, we WILL make this LED blink.

LED blinking is the most basic experimental project for Arduino enthusiasts. Let’s get started.

**Knowledge：**

**On-board LED：**

LED, the abbreviation of light emitting diodes, consists of Ga, As, P, N chemical compounds and so on. It is easy to control through the IO port(D13) of the Arduino Nano board.

![IMG_256](media/9ee7eb2f9d8ffb58bf75e9771331ac60.png)

**Test Code**

![](media/3b2b2a7eccd6f160bbd781a157127353.png)

**Test Result：**

Upload the test code to the Arduino Nano board and power up with a USB cable. Then the on-board LED will flash.

### Project 2: 6812 RGB

**Description：**

There are 4 RGB LEDs can be widely used in the decoration of buildings, bridges, roads, gardens, courtyards and so on by colors adjustment.

In this experiment, we will demonstrate different lighting effects with them.

**Component Knowledge**

**SK6812RGB:**

From the schematic diagram, we can see that these four pixel lighting beads are all connected in series. In fact, no matter how many they are, we can use a pin to control a light and let it display any color. The pixel point contains a data latch signal shaping amplifier drive circuit, a high-precision internal oscillator and a 12V high-voltage programmable constant current control part,
which effectively ensures the color of the pixel point light is highly consistent.

The data protocol adopts a single-wire zero-code communication method. After the pixel is powered up and reset, the S terminal receives the data transmitted from the controller. The first 24bit data sent is extracted by the first pixel and sent to the data latch of the pixel.

![](media/86e292d0666046b72a1e0e68adfb17e8.png)

**Test Code：**

The SK6812RGB on the PCB board is controlled by the IO port (A3).

![](media/030e367aa7d690a3ff54273d7e3d6a3b.png)

![](media/39c62a1b7bb620858b2125f9bb7e4eb9.png)

![](media/e1c02ef2adc9f5fb59d680a2081bbc27.png)

**Test Result：**

Upload the test code to the Arduino Nano board and power up by a USB cable. Then the four RGB lights on the PCB demonstrate multi-color light effect.

### Project 3: Play Music

**Description：**

There is a power amplifier component on the expansion board, which is often used to play music and serve as an external amplifying device for music playback devices.

In this experiment, we use the speaker amplifier component to play music.

**Knowledge：**

Power amplifier modules(equivalent to a passive buzzer) don’t have internal oscillation circuits.

The power amplifier module can chime sounds with different frequency when power it up.

**Test Code：**

The speaker component on the PCB board is controlled by the D3 of the Arduino Nano board.

![](media/60e70fe16a405dc595912abfd62a19bb.png)

**Test Result：**

Upload the test code to the Arduino Nano board and power up with a USB cable. Then the power amplifier component will play music.

### Project 4: 8\*8 Dot Matrix

**Description：**

Composed of LED emitting tube diodes, the 8\*8 LED dot matrix are applied widely to public information display like advertisement screen and bulletin board, by controlling LED to show words, pictures and videos, etc.

**Knowledge：**

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

**Wiring up：**

| 8\*8 Dot matrix display | PCB Board |
|-------------------------|-----------|
| G                       | G         |
| 5V                      | 5V        |
| SDA                     | SDA       |
| SCL                     | SCL       |

**Test Code：**

The 8\*8 dot matrix is controlled by A4（SDA）and A5（SCL）of the Arduino Nano board.

![](media/14c97457618176c0eb9c4e399bbb461e.png)

![](media/3127639f4ec12091cd9edec25c08dc68.png)

![](media/f96d8d51776956b0709022fd5ae0fe3e.png)

![](media/84f6e148ab7c2ccfc13e2477d63e61c6.png)

**Test Result：**

Upload the test code to the Arduino Nano board and power up by a USB cable, the 8\*8 dot matrix display will show show patterns.

### Project 5: Servo Rotation

**Description：**

There are two servos on the car. We take the servo connected to pin D9 as an example.

The servo is a motor that can rotate very accurately. It has been widely applied to toy cars, remote control helicopters, airplanes, robots and other fields. In this project, we will use the Nano motherboard to control the servo to spin.

**Knowledge：**

![](media/99830768916233a9c5900ac399006c17.png)

Servo motor is a position control rotary actuator. It mainly consists of a housing, a circuit board, a core-less motor, a gear and a position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and
obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0°--180 °.

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms(50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motors, the same signal may have different rotation angles.

![图片1(17)](media/708316fde05c62113a3024e0efb0c237.jpeg)

In general, servo has three lines in brown, red and orange. The brown wire is grounded, the red one is a positive pole line and the orange one is a signal line.

**![](media/35084ae289a08e35bdb8c89ceb134ba4.png)**

**Wire up：**

| Servo  | PCB Board |
|--------|-----------|
| Brown  | G         |
| Red    | 5V        |
| Orange | S1（D9）  |

**Test Code：**

The servo for controlling the ultrasonic sensor is controlled by the D9 of the Arduino Nano board.

![](media/9217373979c0294c8235f32a86744c8e.png)

**Test Result：**

Upload the test code to the Arduino Nano board, and power up with a USB cable. Then the arm of the servo will rotate to 0°, 45°, 90°, 135° and 180°.

### Project 6: Motor Driving and Speed Control

**Description：**

There are many ways to drive motors. This car uses the most commonly used DRV8833 motor driver chip, which provides a dual-channel bridge electric driver for toys, printers and other motor integration applications.

In this experiment, we use the DRV8833 motor driver chip on the expansion board to drive the two DC motors, and demonstrate the effect of forward, backward, left-turning, and right-turning.

**Knowledge：**

DRV8833 motor driver chip: Dual H-bridge motor driver with current control function, can drive two DC motors, one bipolar stepper motor, solenoid valve or other inductive loads. Each H-bridge includes circuitry to regulate or limit winding current.

An internal shutdown function with a fault output pin is used for over-current and short circuit protection, under-voltage lockout and over-temperature. A low-power sleep mode is also added. Let's take a look at the schematic diagram of the DRV8833 motor driver chip driving two DC motors:

![IMG_256](media/bc839fa0f37fdc3003485b0398dd6d1f.png)

![](media/9cb8b7c00f814e367040f2ed4a3c9f4a.png)

If you want to get insight to it, you can check the specification of this chip. Just browse it in the“Attachments”folder.

![](media/fd127538d99fbdce1a8956365cccaf7c.png)

**Specification：**

Input voltage of logic part: DC 5V

Input voltage of driving part : DC 5V

Working current of logic part: \<30mA

Operating current of driving part: \<2A

Maximum power dissipation: 10W (T=80℃)

Motor speed: 5V 200 rpm / min

Motor drive form: dual H-bridge drive

Control signal input level: high level 2.3V\<Vin\<5V, low level -0.3V\<Vin\<1.5V

Working temperature: -25\~130℃

**Drive the car to move**

From the above diagram, the direction pin of the left motor is D4; the speed pin is D6; D2 is the direction pin of the right motor; and D5 is speed pin.

PWM drives the robot car. The PWM value is in the range of 0-255. The more the PWM value is set, the faster the rotation of the motor.

| Function   | D4   | D6（PWM） | Left motor    | D2   | D5（PWM） | Right motor   |
|------------|------|-----------|---------------|------|-----------|---------------|
| forward    | LOW  | 200       | clockwise     | LOW  | 200       | clockwise     |
| Go back    | HIGH | 50        | anticlockwise | HIGH | 50        | anticlockwise |
| Turn left  | HIGH | 200       | anticlockwise | LOW  | 200       | clockwise     |
| Turn right | LOW  | 200       | clockwise     | HIGH | 200       | anticlockwise |
| Stop       | LOW  | 0         | stop          | LOW  | 0         | stop          |

**Test Code：**

![](media/22523147b647bc04f926683b1631c6f2.png)

![](media/341cd6c08325f6758c47bea3484256ab.png)

**Test Result：**

Upload the test code to the Arduino Nano board, install batteries, turn the power switch to ON end and power up. The car moves forward for 2s, back for 2s, turn left for 2s, right for 2s and stops for 2s.

### Project 7: Ultrasonic Sensor

There is an ultrasonic sensor on the car. It is a very affordable distance-measuring sensor.

The ultrasonic sensor sends a high-frequency ultrasonic signal that human hearing can’t hear. When encountering obstacles, these signals will be reflected back immediately. After receiving the returned information, the distance between the sensor and the obstacle will be calculated by judging the time difference between the transmitted signal and the received signal. It is mainly used for object avoidance and ranging in various robotics projects.

#### Project 7.1: Ultrasonic Ranging

**Description：**

In this experiment, we use an ultrasonic sensor to measure distance and print the data on a serial monitor.

**Knowledge：**

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

**Wiring Up**

| Ultrasonic Sensor | PCB Board |
|-------------------|-----------|
|  Vcc              | 5V        |
| Trig              | S2（D8）  |
| Echo              | S1（D7）  |
| Gnd               | G         |

**Test Code：**

The pin Trig and Echo of the ultrasonic sensor are controlled by the D8 and D7 of the Arduino Nano.

![](media/5f7ef28d334cc80c62f372d999666bd8.png)

**Test Result：**

Upload the test code to the Arduino Nano board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and
set baud rate to 9600.

When you move an object in front of the ultrasonic sensor, it will detect the distance and the serial monitor will show the distance value.

![](media/f4f0ae02706b92e180a58788ed28698d.png)

#### Project 7.2: Light Following

**Description：**

In the above experiments, we have learned about the 8\*8 dot matrix, motor drivers and speed regulation, ultrasonic sensors, servos and other hardware. In this experiment, we will combine them to create a follow car with the ultrasonic sensor. The can can follow an object to move through measuring distance.

**Working Principle：**

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

**Flow Chart：**

![QQ图片20220119081423-2](media/e1ded45b4454e64b7ff419bad285cb3a.png)

![](media/e0e3097c312539f3d7c4bd1696ec1772.png)

![](media/cdbca95ae9fb241d87837744a24bb3ed.png)

![](media/16b26829bef93b0d153e3e896059f962.png)

**Test Result：**

Upload the code to the Arduino Nano board, install batteries and turn the switch to the ON end and power up. Then the car will follow the obstacle to move.

#### Project 7.3: Dodge obstacles

**Description：**

In this project, we will take advantage of the ultrasonic sensor to detect the distance away from the obstacle so as to avoid them.

**Working Principle：**

![](media/image-20231008132805325.png)

![](media/image-20231008132855579.png)

**Flow Chart：**

![QQ图片20220119081418-2](media/62cafb9417859896368e046396c58495.png)

**Test Code：**

![](media/5f367293f388702a7c69c37cff2f3b86.png)

![](media/7cfe03ca6230c3b2f1d4069eeac802ac.png)

![](media/c57f7dfaec2d400fc2b31a5eaa99a8c2.png)

![](media/d7529ef6055b2f2f721179cef29fa648.png)

![](media/9594d7d3c272216a695e9892d415bdc3.png)

**Test Result：**

Upload the test code to the Arduino Nano board, put batteries in the battery holder, turn the power switch to the ON end and power up. Then the car can automatically dodge obstacles.

### Project 8: Line Tracking Sensor

There are two IR line tracking sensors on the car. They are actually two pairs of ST188L3 infrared tubes and used to detect black and white lines. In this project, we will make a line tracking car.

#### Project 8.1: Reading Values

**Description：**

In this experiment, we use ST188L3 infrared tubes to detect black and white lines, then print the data on the serial monitor.

**Knowledge：**

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

**Test Code：**

The line tracking sensors of the PCB board are controlled by D11 and D10 of the Arduino Nano baord.

![](media/8cbb491e030fc116dc692921b2565b6f.png)

**Test Result：**

Upload the test code to the Arduino Nano board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and
set baud rate to 9600.

Put a black thing under the line tracking sensor of the car and move it, you will see different indicators light up, and at the same time you will see the value on the serial monitor.

The sensitivity can be adjusted by rotating the potentiometer. When the indicator light is adjusted to the critical point of on and off state, the sensitivity is the highest.

![](media/33c79ed9bc64c690b762c57eaa99e0c2.png)

#### Project 8.2: Line Tracking

**Description：**

We’ve introduced the knowledge of motor drivers, speed regulation, and infrared line tracking. In this experiment, the car will perform different actions according to the values transmitted by the infrared tracking.

**Working Principle：**

| Left | Right | Value（Binary ） | State        |
|------|-------|------------------|--------------|
| 0    | 0     | 00               | Stop         |
| 0    | 1     | 01               | Turn right   |
| 1    | 0     | 10               | Turn left    |
| 1    | 1     | 11               | Move forward |

**Flow Chart：**

![IMG_256](media/c6a0ace5faa949e4fb24fc511d179e08.png)

**Test Code：**

![](media/5cc84225269f46413103c9f87c096a52.png)

![](media/7f440965e0f734ff5908051d262d9ae6.png)

![](media/8a3fc1ac48b94fa081f950c68188affa.png)

**Test Result：**

Upload the test code to the Arduino Nano board, turn the power switch to the ON end, power up and put the car on a map we provide. Then it will perform different functions via values sent by line tracking sensors.

### Project 9: Light Following

There are two photoresistors on the car. They can vary with the light intensity and send information to the Nano board to control the car.

Photoresistors can determine and conduct the car to move by detecting light.

#### Project 9.1: Read Values

**Description：**

In this experiment, we will learn the working principle of the photoresistor.

**Knowledge：**

**Photoresistor:**

It mainly uses a photosensitive resistance element whose resistance varies from the light intensity. The signal terminal of the sensor is connected to the analog port of the microcontroller. When the light is stronger, the analog value at the analog port will increase; on the contrary, when the light intensity is weaker, the analog value of the microcontroller will reduce. In this way, the corresponding analog value can reflect the ambient light intensity.

**Wire up：**

Through the wiring-up diagram, signal pins of two photoresistors are connected to A6 and A7 of the Nano board.

For the following experiment, we use the photoresistor connected to A6 to finish experiments. First, let’s read analog values.

| Left photoresistor | PCB board |
|--------------------|-----------|
| G                  | G         |
| V                  | V         |
| S                  | S（A6）   |

**Test Code：**

The left photoresistor is controlled by the A6 of the Arduino Nano board.

![](media/d71c17943bd6043e9367541dad730441.png)

**Test Result：**

Upload the test code to the Arduino Nano board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and
set baud to 9600.

When the light intensifies, the analog value will get increased; on the contrary, the analog value will get reduced.

![](media/2bcaf5712edfb3cd71ca331ef128da70.png)

#### Project 9.2: Light Following Car

**Description：**

We have learned the working principle of photoresistor, motor and speed regulation. In this experiment, we will use a photoresistor to detect the intensity of light as as to achieve the light following effect.

**Working Principle：**

| Analog value of the left sensor | Analog value of the right sensor | Function      |
|---------------------------------|----------------------------------|---------------|
| \>500                           | \>500                            | Move forward  |
| \>500                           | ≤500                             | Move to left  |
| ≤500                            | \>500                            | Move to right |
| \<500                           | \<500                            | Stop          |

**Wiring up：**

| Left Photoresistor | PCB Board |   | Right photoresistor | PCB Board |
|--------------------|-----------|---|---------------------|-----------|
| G                  | G         |   | G                   | G         |
| V                  | V         |   | V                   | V         |
| S                  | S（A6）   |   | S                   | S（A7）   |

**Flow Chart：**

![QQ图片20220119081408-2](media/d30fcd3007f0d8e6c995bc456679172e.png)

**Test Code：**

The left and right photoresistors are controlled by A6 and A7 of the Arduino Nano board.

![](media/ba6d00fd3c4015f5d00058643966ffdb.png)

![](media/c92fba66bee0450db6b8e5d0a24c436d.png)

![](media/02892a8cfcc1fc63b0183772f477dfc7.png)

**Test Result：**

Upload the test code to the Arduino Nano board, put batteries in the battery holder, turn the power switch to the ON end and power up. Then the car will follow the light to move.

### Project 10: IR Remote Control

Infrared remote controls are everywhere in daily life. It is used to control various home appliances, such as TV, speakers, video recorders and satellite signal receivers.

The remote control is composed of an IR emitter, an IR receiver and a decoding MCU. In this project, we will make a IR remote control car.

#### Project 10.1: IR Remote and Reception

**Description：**

In this experiment, we will combine the IR receiver and the IR remote control to read key values and show them on the serial monitor.

**Knowledge：**

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

**Test Code：**

The IR receiver on the PCB board is controlled by IO port(D12) of the Arduino Nano board.

![](media/acf02ec222bc0f2812d150cfabc01be8.png)

**Test Result：**

Upload the test code to the Arduino Nano board, power up with a USB cable, open the serial monitor to click ![](media/5aa7c3468c7015b37236cd95c06280d8.png) and
set to 9600.

Press a key on the IR remote control, you will view a code on the serial monitor. If FFFFFFFF shows up, just ignore it.

![](media/0380c7eb48d788203d5cc2f353701ef0.png)

Code of each key.

![图形1](media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)

#### Project 10.2: IR Remote Control Car

**Description：**

In the above experiment, we have learned about the knowledge of the 8\*8 dot matrix display, the motor driver and speed regulation, the infrared receiver and the infrared remote control. In this experiment, we will use the infrared remote
control and the infrared receiver to control the car.

**Working Principle：**

| Keys                                            | Keys Code | Functions                                 |
| ----------------------------------------------- | --------- | ----------------------------------------- |
| ![](media/e471ee4e3fd5a9daafc9d97460124119.png) | FF629D    | Go forward<br>Display “forward”pattern    |
| ![](media/ace76021618d9ae6107a0f9b69dc47fc.png) | FFA857    | Go back<br>Display “back”pattern          |
| ![](media/813f77055aefe6ee0fce22e14fbf093c.png) | FF22DD    | Turn left<br/>Show“left” pattern          |
| ![](media/9eb9042aace52c96a86379dbac70ee2d.png) | FFC23D    | Turn right<br/>Show“right turning”pattern |
| ![](media/68cbb08d230ef50b2f69c66c685414f6.png) | FF02FD    | stop<br/>show“stop”pattern                |

**Flow Chart：**

![QQ图片20220119081349-2](media/b8ecdfd8dbc04c43021b09bd2c6a48f0.png)

**Test Code**

![](media/116950e70caf1c7009916b81a7d159a6.png)

![](media/dad3c428f9a912631f7c4c6e88030d4d.png)

![](media/f7accf63cca66fdde5ac6bc143667222.png)

![](media/13d9417f2382e6d8698f04d3e5213c9f.png)

**Test Result：**

Upload the test code to the Arduino Nano motherboard, install batteries, turn the power switch to the ON end, power up and press a key of the IR remote control. Then the car will make the corresponding movement.

### Project 11: WIFI Control

In this lesson, we control the car through app. The Beetlebot APP sends commanders to the WIFI ESP-01 module then transfers to it to the microcontroller. By doing this, the car can perform different functions.

#### Project 11.1: WIFI Test

**Description：**

The ESP8266 serial WiFi ESP-01 module is an ultra-low-power UART-WiFi transparent transmission module and designed for mobile devices and IoT applications.

It can achieve networking functions by connecting devices to Wifi internet.

**Components Required**

| ![](media/408f9f823aab6078768f08462eda209b.png)              | ![KS0388 Keyestudio USB转ESP-01S WIFI模块串口测试扩展板_0002_图层 1](media/54668bc6799d314c47c7ffd29dcaa013.jpeg) | ![13](media/3b7fd238a41d425918798f0d15479f7b.png) |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------- |
| ESP8266 Serial WIFI ESP-01 Module\*1                         | USB to ESP-01S WIFI Serial Expansion Board\*1                | USB Cable\*1                                      |
| ![](media/2587909ac59e4411cdfd255758590ef1.jpeg)<br>![12](media/f6eccb4aa0e18f246ffd46fd9ff5d222.png) | ![](media/65150525c1e94b75d16716763154b1a5.png)              |                                                   |
| Cellphone/IPad\*1                                            | Beetlebot Car\*1                                             |                                                   |

**Knowledge：**

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

**Specification：**

| **Module**                          | **Type**                   | ESP8266-01                                                   |
| ----------------------------------- | -------------------------- | ------------------------------------------------------------ |
|                                     | **Main chip**              | ESP8266                                                      |
| **Wireless parameters**             | **Wireless standard**      | IEEE 802.11b/g/n                                             |
|                                     | **Frequency range**        | 2.412GHz-2.484GHz                                            |
|                                     | **Transmit power**         | 802.11b: +16 +/-2dBm (@11Mbps)                               |
|                                     |                            | 802.11g: +14 +/-2dBm (@54Mbps)                               |
|                                     |                            | 802.11n: +13 +/-2dBm (@HT20, MCS7)                           |
|                                     | **Receiving sensitivity**  | 802.11b: -93 dBm (@11Mbps ,CCK)                              |
|                                     |                            | 802.11g: -85dBm (@54Mbps, OFDM)                              |
|                                     |                            | 802.11n: -82dBm (@HT20, MCS7)                                |
|                                     | **Antenna type**           | external stamp-hole interfaces                               |
|                                     |                            | external I-PEX connector and SMA connector                   |
|                                     |                            | Built-in onboard PCB antenna                                 |
| **Hardware parameters**             | **Hardware interfaces**    | UART，IIC，PWM，GPIO，ADC                                    |
|                                     | **Operating voltage**      | 3.3V                                                         |
|                                     | **GPIO drive capability**  | Max：15ma                                                    |
|                                     | **Working current**        | Keep sending down=\> <br>Average：\~70mA Peak: 200mA <br>Normal mode=\> <br>Average: \~12mA Peak: 200mA <br>standby mode：\<200uA |
|                                     | **Operating temperature**  | -40℃\~125℃                                                   |
|                                     | **Storage environment**    | Temperature：\<40℃ Relative humidity：\<90%R.H               |
|                                     | **Size**                   | Onboard PCB antenna：14.3mm\*24.8mm\*1mm                     |
| **Serial transparent transmission** | **Transmission rate**      | 110-921600bps                                                |
|                                     | **TCP Client**             | 5                                                            |
| **Software Parameters**             | **Wireless network types** | STA/AP/STA+AP                                                |
|                                     | **Security mechanisms**    | WEP/WPA-PSK/WPA2-PSK                                         |
|                                     | **Encryption types**       | WEP64/WEP128/TKIP/AES                                        |
|                                     | **Firmware upgrade**       | Local serial port, OTA remote upgrade                        |
|                                     | **Network protocols**      | IPv4, TCP/UDP/FTP/HTTP                                       |
|                                     | **User configuration**     | AT + instruction set, web page Android / iOS terminal, Smart Link intelligent configuration APP |

**About the Hardware**

ESP8266 has many hardware interfaces, supporting UART, IIC, PWM, GPIO, ADC, etc., and suitable for a variety of IoT applications.

| **PIN** | **Function**     | **Description**                                              |
| ------- | ---------------- | ------------------------------------------------------------ |
| 1       | URXD             | 1) UART_RXD, receive <br>2) General Purpose Input/Output：GPIO3 |
| 2       | UTXD             | 1) UART_TXD, send <br>2) General Purpose Input/Ou tput: GPIO1 <br>3) Do not pull down when power on |
| 5       | RESET（GPIO 16） | External Reset signal, LOW reset, HIGH works(default is HIGH) |
| 6       | GND              | GND                                                          |
| 8       | VCC              | 3.3V, power the module                                       |
| 9       | ANT              | WiFi Antenna                                                 |
| 11      | GPIO0            | 1) WiFi Status(Default)：WiFi status indicator control signal <br>2) Working mode selection: <br>Suspend：Flash Boot，working mode <br>Pull down：UART Download，download mode |
| 12      | ADC              | ADC, input range: 0V-1V                                      |
| 13      | GPIO15           | Pull down：work mode                                         |
| 14      | CH_PD            | 1) Working at HIGH level <br>2) Power off at LOW level       |
| 15      | GPIO2            | 1) It must be HIGH level when power on, do not pull down the hardware <br>2) Internal is pulled up(default) |

**Power consumption**

The below power consumption data is based on a 3.3V power supply and at 25°ambient temperature.

All measurements are completed at the antenna interface.

All transmitted data is based on 90% duty cycle, which is measured in a continuous launch mode.

| Mode                                    | Min | Regular | Max | Unit |
|-----------------------------------------|-----|---------|-----|------|
| Send 802.11b，CCK 1Mbps，Pout=+19.5dBm  |     | 215     |     | mA   |
| Send 802.11b，CCK 11Mbps，Pout=+18.5dBm |     | 197     |     | mA   |
| Send 802.11g，OFDM54 Mbps，Pout=+16dBm  |     | 145     |     | mA   |
| Send 802.11n，MCS7，Pout=+14dBm         |     | 135     |     | mA   |
| Receive 802.11b, 1024 bytes, -80dBm     |     | 100     |     | mA   |
| Receive 802.11g, 1024 bytes, -70dBm     |     | 100     |     | mA   |
| Receive 802.11n, 1024 bytes, -65dBm     |     | 102     |     | mA   |
| Standby                                 |     | 70      |     | mA   |
| Shutdown                                |     | 0.5     |     | μA   |

**Radio characteristic：**

The following data were measured when the voltage is 3.3V at room temperature.

| **Description**                       | **Min** | **Regular** | **Max** | **Unit** |
| ------------------------------------- | ------- | ----------- | ------- | -------- |
| input frequency                       | 2412    |             | 2484    | MHz      |
| input resistance                      |         | 50          |         | Ω        |
| input reflection                      |         |             | -10     | dB       |
| 72.2Mbps下，output power of PA        | 14      | 15          | 16      | dBm      |
| Under the 802.11b，output power of PA | 17.5    | 18.5        | 19.5    | dBm      |
| **Sensitivity**                       |         |             |         |          |
| CCK 1Mbps                             |         | -98         |         | dBm      |
| CCK 11Mbps                            |         | -91         |         | dBm      |
| 6Mbps(1/2BPSK)                        |         | -93         |         | dBm      |
| 54Mbps(3/4 64-QAM)                    |         | -75         |         | dBm      |
| HT20，MCS7（65Mbps，72.2Mbps）        |         | -71         |         | dBm      |
| **Adjacent frequency suppression**    |         |             |         |          |
| OFDM，6Mbps                           |         | 37          |         | dB       |
| OFDM，54Mbps                          |         | 21          |         | dB       |
| HT20，MCS0                            |         | 37          |         | dB       |
| HT20，MCS7                            |         | 20          |         | dB       |

Note: 

1. 72.2Mbps was measured in 802.11n mode with MCS=7 and GI=200uS.
2. The maximum output power is up to +19.5dBm in 802.11b mode.

**Functions**

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

**Applications**

Serial CH340 to Wi-Fi

Industrial transparent transmission DTU

Wi-Fi remote monitoring/control

Toy industry

Color LED control

Integrated management of fire protection and security intelligence.

Smart card terminals, wireless POS machines, Wi-Fi cameras, handheld devices,etc.

**4. Insert the Wifi serial port expansion board into the USB port of your PC**

Insert the ESP8266 serial WIFI ESP-01 module into the USB to ESP-01S WIFI expansion board.

![](media/a819a91a024eacd8fb5ffd368b7ccad2.png)

Turn the DIP switch of the USB to ESP-01S WIF expansion board to UartDownload end and plug it to the USB port of your computer.

**![\_DSC6532(1)](media/88aeb7b568eee84038260ae898070e60.jpeg)**

**Add the ESP8266 control board：**

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

**Add the Beetlebot wifi module：**

Click![](media/7e55669852230e653cc1fc90dabb681a.png)to enter sensor/module expansion interface and click“Beetlebot wifi”, “Not loaded”will switch into“loaded”. Then the Beetlebot wifi module will be added.

Click![](media/a8cb2d7005fca8f4419bb557b73f10e9.png)to return the code editor, then you will view the Beetlebot wifi module.

![](media/3e9501ad7386e8c80fc8fcb69a3e4a9b.png)

![](media/e13d77234dbc67480c1080e1f6f259d8.png)

![](media/44b8278d19f134d1e9b453b830e20f2d.png)

![](media/dec7529aea7f10461b651280e1897425.png)

![](media/4f15aaaf6aff1296fcb8bd2a6ddae551.png)

**ESP8266 Code：**

If there is no wifi in your home, just enable your shared wifi on the phone.

![](media/6f0bb5b55c9da4326375e2dcad11518b.png)

Note：![](media/34cd34dee3809a12be4962ce741de1c5.png)

You need to change the wifi name and password into yours.

Plug the USB to ESP-01S WIFI expansion board to the USB port of the computer, turn its DIP switch to the Uart Download end and click“Upload”.

Upload the ESP8266 code to the ESP8266 to WIFI ESP-01 module.

Note: if the code is uploaded successfully, reboot the ESP-01S WIFI expansion board.

![](media/d4965a79c810807b4623563f7820f2db.png)

After the code is uploaded. Unplug the USB to ESP-01S WIFI expansion board and ESP8266 serial WIFI ESP-01 module.

**Interface the Arduino Nano board**

![资料图-2](media/e9ac8406029cc69c83416044473cdb03.png)

**Set the interface of Beetlebot app:**

Open KidsBlock to click![](media/bfbf7c471ede03845519b11961a13837.png)to enter the main page. Select **Beetlebot**，and click **Connect**，then the
**Beetlebot car is connected;**

Click“**Go to Editor**” to return code editor, ![](media/bfbf7c471ede03845519b11961a13837.png)will change into![](media/6a8530eb0230355b4c7d216f3e1faeaf.png)，and ![](media/db0135c23e5313dac75a33d7d2faa529.png)into![](media/0f64e7bcfda60830752545e973795914.png); this indicates the device is connected to the port.

![](media/da9cf688336d2fd12385d7d14a3b2ba6.png)

![](media/f54d6ae3d30827f2694cbcfc2e1dd5d4.png)

![](media/cb9e5ff39c1e677c7dc066a5f0c2fec8.png)

![](media/ccb3f4bb8dae899f306fc3f12da1abdb.png)

![](media/e65f6f63c02286805ce543f08a363fc9.png)

Then click ![](media/770292e2b4d7555030eaf7951cf58aec.png)to switch mode. The ![](media/770292e2b4d7555030eaf7951cf58aec.png) will change into![](media/6647392e2b1488904406ad656f6e08b4.png)

![](media/d9adac4ca2b5382fbe9cb0851f9531b6.png)

![](media/13e56432e2c2e1c0294f84a64f141b77.png)

**Arduino Nano Test Code：**

![](media/55fec33dcf267148c0007dc78214cc1e.png)

![](media/44224113cf8df6ba5b20e71f6595a014.png)

**Test Result：**

Click **Upload** to upload the test code to the Arduino Nano board.

Then insert the ESP8266 serial WIFI ESP-01module into the WiFi port of the PCB board.

(Note：keep the USB cable connected.)

![](media/2ae0682a5f579c0e2c54127f6a7d6edf.png)

![](media/2a76a644f824f829fed68809b170e028.png)

Click ![](media/45ffad9ff1f6dc38d12a6e1d7a065176.png) and set baud rate to 9600.
Then the serial monitor will show your IP address of Wifi.

The IP address of Wifi sometimes changes. If the original doesn’t change, check the IP address of Wifi again.

![QQ图片20220104160110-2](media/357a8df7af2bf56de68c01002418929f.png)

**Android system：**

Transfer the file Beetlebot.apk to your cellphone or IPAD, click it to install, and click“**ALLOW**”→“**INSTALL**”→“**OPEN**”.

![](media/bc3019d74a9c2b2fade4e3be729883e9.png)

![](media/655b30a1d179bd4a3055309ce07a3701.png)

![](media/ae159de2dfb79a1ce2bc06b256168bdb.png)

![](media/85c6702f6ed02ca8961778355d97044f.png)

![](media/bec3fc042dfcb68e8100dc4fc0edf8d1.png)

![IMG_256](media/a4391a8f1ee7930bd6d679aeefcf677e.jpeg)

Then enter interface of the app. Input the detected Wifi IP address(for example, the IP address in the above figure is 192.168.1.134), and connect Wifi. At same time, the IP address will be shown as below, which means that Wifi is connected well.

![IMG_256](media/f6ca3d69a32556445bc1b9bd8b047cf6.jpeg)

**IOS system**

Open App Store

![](media/27924fdb3d67692df7c63d8d0fb72287.png)

Search Beetlebot，click“![](media/962a57f92b78eea1f0e3e81463497a9c.png)”to download Beetlebot.

The installation instructions are similar with Android system.

**Note: Click buttons on the APP, the blue indicator on the ESP8266 serial WIFI ESP-01 module will flash, indicating that the APP has been connected to WIFI.**

After the APP has connected to the WIFI, start the following operations:

Click buttons on the app, the serial monitor will print some control characters, as shown below;

![QQ图片20220104160110-3](media/88d497c4efb32ae684fed518b8bbb919.png)

**Interface of App**

![APP界面功能英文介绍](media/49dce218d3a238aa8b90f763409cf7b7.png)

Click![](media/db52b661d5b22528618e9c14aefa367e.png)，a“smile”pattern will be displayed；click ![](media/6abdf809090a56fb251e9ee4d44c70f4.png),“十”will be shown；click![](media/aca24e8c4a86a9a2702160be4a4d9970.png),“❤”will be shown.

#### Project 11.2: Multi-purpose Car

In this project we will demonstrate multiple functions of the Beetlebot car through app.

The code of ESP8266wifi module is not changed, then change the wifi password of the code into yours.

Upload the code to the Arduino Nano board, as shown below:![](media/7573a90c49333b0939c5a4948fde8ec9.png)

![APP界面功能英文介绍](media/49dce218d3a238aa8b90f763409cf7b7.png)

**Test Result**

Click![](media/a6c79cf21ce5acefae141133f65bbb6b.png)to control the car to move in different directions ;
click  ![](media/03c021648ea2713c0b4bf880b763e416.png) to control the SK6812RGB to show different colors；
click  ![](media/3bc4ea5237aa177b8ecd8aad1f926df3.png) to control the 8\*8 dot matrix display show different patterns.


