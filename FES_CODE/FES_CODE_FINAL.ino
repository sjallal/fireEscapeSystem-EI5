// Defining the sensor pins...
const int flp1 = A0;
const int flp2 = A1;
const int flp3 = A2;
const int flp4 = A3;

// Defining the LED pins...
const int ledr1 = 11;
const int ledg1 = 2;
const int ledr2 = 3;
const int ledg2 = 4;
const int ledr3 = 5;
const int ledg3 = 6;
const int ledr4 = 7;
const int ledg4 = 8;
const int gg2 = 12;
const int gg3 = A4;
const int gg4 = 13;

// Flame sensor value initialisation...
int flsv2 = 1; 
int flsv3 = 1;
int flsv4 = 1;
int flsv1 = 1;

void setup() {
  Serial.begin(9600);
  pinMode(flp1, INPUT);
  pinMode(flp2, INPUT);
  pinMode(flp3, INPUT);
  pinMode(flp4, INPUT);

  pinMode(ledr1, OUTPUT);
  pinMode(ledg1, OUTPUT);
  pinMode(ledr2, OUTPUT);
  pinMode(ledg2, OUTPUT);
  pinMode(ledr3, OUTPUT);
  pinMode(ledg3, OUTPUT);
  pinMode(ledr4, OUTPUT);
  pinMode(ledg4, OUTPUT);
  pinMode(gg2, OUTPUT);
  pinMode(gg3, OUTPUT);
  pinMode(gg4, OUTPUT);

}
void loop() {
  flsv1 = digitalRead(flp1);
  flsv2 = digitalRead(flp2);
  flsv3 = digitalRead(flp3);
  flsv4 = digitalRead(flp4);
  
  Serial.println(flsv1); // Reading from sensor 1.
  
  if (flsv1 == 0) {
    Serial.println("_1_Sensed by");
    digitalWrite(ledr1, HIGH);
    digitalWrite(ledg1, LOW);
    digitalWrite(ledr2, LOW);
    digitalWrite(ledg2, HIGH);
    digitalWrite(ledr3, LOW);
    digitalWrite(ledg3, HIGH);
    digitalWrite(ledr4, LOW);
    digitalWrite(ledr4, HIGH);
    digitalWrite(gg2, LOW);
    digitalWrite(gg3, HIGH);
    digitalWrite(gg4, HIGH);
    delay(100);
  }
  
  if (flsv2 == 0) {
    Serial.println(flsv2);
    Serial.println("_2_Sensed by");
    digitalWrite(ledr1, LOW);
    digitalWrite(ledg1, HIGH);
    digitalWrite(ledr2, HIGH);
    digitalWrite(ledg2, LOW);
    digitalWrite(ledr3, LOW);
    digitalWrite(ledg3, HIGH);
    digitalWrite(ledr4, LOW);
    digitalWrite(ledg4, HIGH);
    digitalWrite(gg2, LOW);
    digitalWrite(gg3, LOW);
    digitalWrite(gg4, HIGH);
    delay(100);
  }
  if (flsv3 == 0) {
    Serial.println(flsv3);
    Serial.println("_3_Sensed by");
    digitalWrite(ledr1, LOW);
    digitalWrite(ledg1, HIGH);
    digitalWrite(ledr2, LOW);
    digitalWrite(ledg2, HIGH);
    digitalWrite(ledr3, HIGH);
    digitalWrite(ledg3, LOW);
    digitalWrite(ledr4, LOW);
    digitalWrite(ledg4, HIGH);
    digitalWrite(gg2, HIGH);
    digitalWrite(gg3, LOW);
    digitalWrite(gg4, LOW);
    delay(100);
  }

  if (flsv4 == 0) {
    Serial.println(flsv4);
    Serial.println("_4_Sensed by");
    digitalWrite(ledr1, LOW);
    digitalWrite(ledg1, HIGH);
    digitalWrite(ledr2, LOW);
    digitalWrite(ledg2, HIGH);
    digitalWrite(ledr3, LOW);
    digitalWrite(ledg3, HIGH);
    digitalWrite(ledr4, HIGH);
    digitalWrite(ledg4, LOW);
    digitalWrite(gg2, HIGH);
    digitalWrite(gg3, HIGH);
    digitalWrite(gg4, LOW);
    delay(100);
  }

  else {
    digitalWrite(ledr1, LOW);
    digitalWrite(ledg1, LOW);
    digitalWrite(ledr2, LOW);
    digitalWrite(ledg2, LOW);
    digitalWrite(ledr3, LOW);
    digitalWrite(ledg3, LOW);
    digitalWrite(ledr4, LOW);
    digitalWrite(ledg4, LOW);
    digitalWrite(gg2, LOW);
    digitalWrite(gg3, LOW);
    digitalWrite(gg4, LOW);
    delay(500);
  }
}
