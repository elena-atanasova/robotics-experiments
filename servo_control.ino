/*
  Servo Control - A simple program that moves a servo motor to 0°, 90°, and 180° positions.
  
  Code Summary:
  - Initialises a servo on pin 9
  - Moves servo to 0°, waits 1 second
  - Moves servo to 90°, waits 1 second
  - Moves servo to 180°, waits 1 second
*/

#include <Servo.h>  // Servo library; contains functions to control servo motors

Servo servo1;  // create a servo object

void setup() {
  servo1.attach(9);  // attach the servo obj to pin 9
}

void loop() {
  servo1.write(0);  // move the servo to 0 degrees (position 1)
  delay(1000);  // wait 1s
  servo1.write(90);  // move to 90 degrees (position 2)
  delay(1000); 
  servo1.write(180);  // move to 180 degrees (position 3)
  delay(1000);
}
