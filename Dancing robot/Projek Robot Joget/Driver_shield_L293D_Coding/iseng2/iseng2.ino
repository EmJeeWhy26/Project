//Driver shield L293D
#include <Servo.h>
#include <AFMotor.h>

char val;
AF_DCMotor motor3(3, MOTOR12_64KHZ); //Jadikan motor 1, 64KHZ
AF_DCMotor motor4(4, MOTOR12_64KHZ); //Jadikan motor 2, 64KHZ
Servo servo1;
Servo servo2;

void setup() {
Serial.begin (9600);
motor3.setSpeed(120); //Set kecepatan motor 3 240 (range 0-255)
motor4.setSpeed(120); //Set kecepatan motor 4 240 (range 0-255)

servo1.attach(10);
servo2.attach(9);

servo1.write(80);
servo2.write(95);
}

void loop() {
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  servo1.write(80);
  servo2.write(95);
  
  servo1.write(170);
  servo2.write(95);
  
  servo1.write(80);
  servo2.write(20);
  delay (500);

  motor3.run(FORWARD);
  motor4.run(FORWARD);
  servo1.write(170);
  servo2.write(95);
  delay (500);

  motor3.run(BACKWARD);
  motor4.run(FORWARD);
  servo1.write(80);
  servo2.write(20);
  delay (2000);

  motor3.run(FORWARD);
  motor4.run(BACKWARD);
  servo1.write(170);
  servo2.write(95);
  delay (2000);

  motor3.run(FORWARD);
  motor4.run(FORWARD);
  servo1.write(170);
  servo2.write(20);
  delay (500);
  motor3.setSpeed(95); //Set kecepatan motor 3 240 (range 0-255)
  motor4.setSpeed(95); //Set kecepatan motor 4 240 (range 0-255)
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  servo1.write(80);
  servo2.write(95);
  delay (500);

  motor3.setSpeed(140); //Set kecepatan motor 3 240 (range 0-255)
  motor4.setSpeed(140); //Set kecepatan motor 4 240 (range 0-255)
  motor3.run(FORWARD);
  motor4.run(RELEASE);
  servo1.write(80);
  servo2.write(95);
  delay (300);

  motor3.run(RELEASE);
  motor4.run(FORWARD);
  servo1.write(80);
  servo2.write(95);
  delay (300);

  motor3.run(FORWARD);
  motor4.run(RELEASE);
  servo1.write(80);
  servo2.write(95);
  delay (300);

  motor3.run(RELEASE);
  motor4.run(FORWARD);
  servo1.write(80);
  servo2.write(95);
  delay (300);


  motor3.setSpeed(120); //Set kecepatan motor 3 240 (range 0-255)
  motor4.setSpeed(120); //Set kecepatan motor 4 240 (range 0-255)
  motor3.run(FORWARD);
  motor4.run(BACKWARD);
  servo1.write(170);
  servo2.write(95);
  delay (2000);
}
