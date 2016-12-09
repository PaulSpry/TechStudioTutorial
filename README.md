# TechStudioTutorial

Tutorial
Arduino Eight Ball 


Things you'll need:

1.	Arduino
2.	Breadboard
3.	10k Potentiometer 
4.	Tilt Sensor
5.	LCD screen (16x2)
6. 	10kOhm Resistor (Brown, Black, Orange)
7. 	18 Wires


Parts

<img src="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/Parts.JPG">

Instructions 


Step 1:

Attach a red wire to the positive rail and a black wire to the negative rail on the breadboard.  Don't worry about connecting them yet, as they will be connected later.


<img src="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/step1.JPG">


Step 2:

Next, we will attach the title sensor to the breadboard by connecting the anode to power and connecting the cathode to pin 6 on the Arduino, with a 10kOhm resistor to ground.

<img src="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/step2.JPG">


Step 3:

Attach the potentiometer to the breadboard by connecting anode to power and connecting cathode to ground.

<img src ="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/step3.JPG">


Step 4:

Attach the LCD to the breadboard as follows:

VSS (gnd) to ground
VSS(5v) to power
RS to Arduino pin 12
-   R/W(Read/Write) to ground
Enable to Arduino pin 11
Data 4 to Arduino pin 5
Data 5 to Arduino pin 4
Data 6 to Arduino pin 3
Data 7 to Arduino pin 2
Backlight (5v) to power
Backlight (gnd) to ground

<img src="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/step4.JPG">


Step 5:

Connect the central pin on the potentiometer to the contrast pin on the LCD

<img src="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/step5.JPG">


Step 6:

You will need to include the LiquidCrystal library( #include<LiquidCrystal.h>
Initialize the library with the numbers of the interface.
Set up a constant for the tilt switchPin (pin 6)
Create switchState variable to hold the value of switchPin
Create prevSwitchState variable to hold previous value of the switchPin
Create integer variable reply; 
Void setup();
Void loop();

<img src="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/step6.JPG">

reply();


save the current state as the last state



Step 7:

Connect the positive rail on the breadboard to the 5V pin and the negative rail on the breadboard to one of the ground pins on the Arduino.

The LCD backlight will turn on. 

<img src="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/IMG_1842.JPG">


Step 8:

Verify and upload your code to the Arduino!

Your chosen message will display on the LCD screen.  Disturb the tilt sensor and display a prediction! 

<img src="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/IMG_1843.JPG">


~~ Code Snippets ~~

<img src ="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/Screen%20Shot%202016-12-08%20at%209.32.18%20PM.png">
<img src ="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/Screen%20Shot%202016-12-08%20at%209.32.37%20PM.png">
<img src ="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/Screen%20Shot%202016-12-08%20at%209.32.45%20PM.png">
<img src ="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/Screen%20Shot%202016-12-08%20at%209.32.56%20PM.png">
<img src ="https://github.com/PaulSpry/TechStudioTutorial/blob/master/tutorial%20pics/Screen%20Shot%202016-12-08%20at%209.33.12%20PM.png">




