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

// Light Sensors States
int sensorAState;
int sensorBState;
int sensorCState;
int sensorDState;

int delay1 = 80;
int delay2 = 75;
int count = 0;
void setup() {
  pinMode(relayA, OUTPUT);
  pinMode(relayB, OUTPUT);
  pinMode(relayC, OUTPUT);
  pinMode(relayD, OUTPUT);
   
  digitalWrite(relayA, LOW);
  digitalWrite(relayB, LOW); 
  digitalWrite(relayC, LOW); 
  digitalWrite(relayD, LOW);
}

void loop() {

  sensorAState = analogRead(sensorA);
  sensorBState = analogRead(sensorB);
  sensorCState = analogRead(sensorC);
  sensorDState = analogRead(sensorD);

  
  count = count +1;
  if(count==25)
  {
    delay1 = 70;
    delay2 = 75;
  }
 
  if(sensorAState < 700) // in black {
    digitalWrite(relayA, HIGH);
    delay(delay2);
    digitalWrite(relayA, LOW);
    delay(delay1);
  }
  
  else if(sensorBState < 700) {
    digitalWrite(5, HIGH);
    delay(delay2);
    digitalWrite(5, LOW);
    delay(delay1);
  }
  
  else if(sensorCState < 700) {
    digitalWrite(6, HIGH);
    delay(delay2);
    digitalWrite(6, LOW);
    delay(delay1);
  }
  
  else if(sensorDState < 700) {
    digitalWrite(7, HIGH);
    delay(delay2);
    digitalWrite(7, LOW);
    delay(delay1);
  }
  delay(10);
}
