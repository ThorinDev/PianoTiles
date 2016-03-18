/*
  Piano Tiles
  Original Code: https://goo.gl/rhbfPM
  Rewritten by Chris Nethercott / ThorinDev
*/

// Relays
const int relayA = 4;
const int relayB = 5;
const int relayC = 6;
const int relayD = 7;

// Light Sensors
const int sensorA = A5;
const int sensorB = A4;
const int sensorC = A3;
const int sensorD = A2;

int delay1 = 80;
int delay2 = 75;
int count = 0;

void setup() {
  pinMode(relayA,OUTPUT);
  pinMode(relayB,OUTPUT);
  pinMode(relayC,OUTPUT);
  pinMode(relayD,OUTPUT);
   
  digitalWrite(relayA,LOW);
  digitalWrite(relayB,LOW); 
  digitalWrite(relayC,LOW); 
  digitalWrite(relayD,LOW);
}

void loop() {
  count = count +1;
  if(count==25)
  {
    delay1 = 70;
    delay2 = 75;
  }
 
  if(analogRead(A5)<700) // in black
  {
    digitalWrite(relayA, HIGH);
    delay(delay2);
    digitalWrite(relayA, LOW);
    delay(delay1);
    
  }
  else if(analogRead(A4)<700)
  {
    digitalWrite(5, HIGH);
    delay(delay2);
    digitalWrite(5, LOW);
    delay(delay1);
  }
  else if(analogRead(A3)<700)
  {
    digitalWrite(6, HIGH);
    delay(delay2);
    digitalWrite(6, LOW);
    delay(delay1);
  }
  else if(analogRead(A2)<700)
  {
    digitalWrite(7, HIGH);
    delay(delay2);
    digitalWrite(7, LOW);
    delay(delay1);
  }
  delay(10);
}
