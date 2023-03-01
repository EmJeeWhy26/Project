#include <Servo.h>
//Driver motor Driver L298N
Servo servo1;
Servo servo2;
int IN1 = 5;
int IN2 = 4;
int IN3 = 3;
int IN4 = 2;

void setup() {
  servo1.attach(6);
  servo2.attach(7);
  servo1.write(0);
  servo2.write(0);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
}

void loop() {
  servo1.write(180);
  servo2.write(0);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  delay (1000);

  servo1.write(0);
  servo2.write(180);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  delay (1000);

  servo1.write(180);
  servo2.write(0);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  delay (1000); 

  servo1.write(0);
  servo2.write(180);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  delay (2000);

  servo1.write(180);
  servo2.write(0);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  delay (1000);

  servo1.write(0);
  servo2.write(180);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  delay (3000);

  servo1.write(0);
  servo2.write(0);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  delay (2000);

  servo1.write(0);
  servo2.write(180);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  delay (3000);

  servo1.write(0);
  servo2.write(0);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  delay (2000);

  servo1.write(0);
  servo2.write(0);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  delay (500);

  servo1.write(0);
  servo2.write(0);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  delay (500);

  servo1.write(0);
  servo2.write(0);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  delay (500);

  servo1.write(0);
  servo2.write(0);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  delay (500);

  servo1.write(0);
  servo2.write(180);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  delay (3000);

  servo1.write(180);
  servo2.write(180);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  delay (3000);
}
