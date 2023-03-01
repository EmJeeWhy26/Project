
//Subscribe AJTekno
//Driver motor Driver L298N
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;

void setup() {
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
}

void loop() {
  //Motor B maju
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  delay (1000);

  //motor B berhenti
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, HIGH);
  delay (1000);

  //motor B mundur
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  delay (1000); 


  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, HIGH);
  delay (1000);
 
}
