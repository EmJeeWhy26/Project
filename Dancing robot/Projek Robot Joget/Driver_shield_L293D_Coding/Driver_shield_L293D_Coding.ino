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
motor3.setSpeed(125); //Set kecepatan motor 3 240 (range 0-255)
motor4.setSpeed(100); //Set kecepatan motor 4 240 (range 0-255)

servo1.attach(10);
servo2.attach(9);

servo1.write(80);
servo2.write(80);
}

void loop() {
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (900);

  //GERAK PUTAR
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(20);
  delay (3000);

  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);
  
  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(BACKWARD); //Motor kanan maju
  servo1.write(170);
  servo2.write(80);
  delay (3000);
  

  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);
  
//GERAK MAJU
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);
  
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

//GERAK MUNDUR + SERVO
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(BACKWARD); //Motor kanan maju
  servo1.write(170);
  servo2.write(80);
  delay (400);

  motor3.run(BACKWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(20);
  delay (400);
  
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(BACKWARD); //Motor kanan maju
  servo1.write(170);
  servo2.write(80);
  delay (400);

  motor3.run(BACKWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

//GERAK MAJU
   motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);
  
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  //GERAK MUNDUR + SERVO
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(BACKWARD); //Motor kanan maju
  servo1.write(170);
  servo2.write(80);
  delay (400);

  motor3.run(BACKWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(20);
  delay (400);
  
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(BACKWARD); //Motor kanan maju
  servo1.write(170);
  servo2.write(80);
  delay (400);

  motor3.run(BACKWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  //GERAK MAJU
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);
  
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

//GERAK PUTAR
  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(FORWARD); //Motor kanan maju
  servo1.write(80);
  servo2.write(20);
  delay (3000);

  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);
  
  motor3.run(FORWARD); //Motor kanan maju
  motor4.run(BACKWARD); //Motor kanan maju
  servo1.write(170);
  servo2.write(80);
  delay (3000);
  

  motor3.run(RELEASE); //Motor kanan maju
  motor4.run(RELEASE); //Motor kanan maju
  servo1.write(80);
  servo2.write(80);
  delay (400);

}
