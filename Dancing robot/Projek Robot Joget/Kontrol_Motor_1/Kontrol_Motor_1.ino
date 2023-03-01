

int in1 = 18;
int in2 = 5;
int in3 = 17;
int in4 = 16;

int motorSpeedA = 0;
int motorSpeedB = 0;


void setup() {

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}


void loop() {

    

    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);           
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(500);

    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(500);

}
