#include <Servo.h>
Servo servo1;
Servo servo2;


int enA = 6;
int enB = 7;
int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;

int motorSpeedA = 0;
int motorSpeedB = 0;


void setup() {

  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}


void loop() {
    motorSpeedA = 255;  //range 0-255
    motorSpeedB = 255;  //range 0-255
    analogWrite(enA, motorSpeedA); // Send PWM signal to motor A
    analogWrite(enB, motorSpeedB); // Send PWM signal to motor B
    
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(5000);
    
    digitalWrite(in1, HIGH);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, HIGH);
    delay(5000);
     


}
