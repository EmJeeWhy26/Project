//LDR
byte ldrA = A0;
byte ldrB = A1;
byte ldrC = A2;
byte ldrD = A3;
int nilaiA;
int nilaiB;
int nilaiC;
int nilaiD;

//LIMIT SWITCH
#define limA 2
#define limB 3
#define limC 4
#define limD 5

//AKTUATOR
const int IN11 = 8;
const int IN12 = 9;
const int IN21 = 10;
const int IN22 = 11;

void m1up(){
  digitalWrite(IN11, HIGH);
  digitalWrite(IN12, LOW);
  }
void m1down(){
  digitalWrite(IN11, LOW);
  digitalWrite(IN12, HIGH);
  }
void m2up(){
  digitalWrite(IN21, HIGH);
  digitalWrite(IN22, LOW);
  }
void m2down(){
  digitalWrite(IN21, LOW);
  digitalWrite(IN22, HIGH);
  }
  
void setup() {
  Serial.begin(9600);
  //LDR
  pinMode (ldrA, INPUT);
  pinMode (ldrB, INPUT);
  pinMode (ldrC, INPUT);
  pinMode (ldrD, INPUT);
  
  //LIMIT SWITCH
  pinMode (limA, OUTPUT);
  pinMode (limB, OUTPUT);
  pinMode (limC, OUTPUT);
  pinMode (limD, OUTPUT);

  //AKTUATOR
  pinMode (IN11, OUTPUT);
  pinMode (IN12, OUTPUT);
  pinMode (IN21, OUTPUT);
  pinMode (IN22, OUTPUT);

}

void loop() {
  nilaiA = analogRead(ldrA);
  nilaiB = analogRead(ldrB);
  nilaiC = analogRead(ldrC);
  nilaiD = analogRead(ldrD);

  if (nilaiA > nilaiB && limA == LOW){
    m1up();
    Serial.print("Naik");
  }
  if (nilaiA < nilaiB && limA == LOW){
    m2up();
    Serial.print("Turun");
  }
  if (nilaiC > nilaiD && limC == LOW){
    m2up();
    Serial.print("Kanan");
  }
  if (nilaiC < nilaiD && limC == LOW){
    m2down();
    Serial.print("Kiri");
  }
}
