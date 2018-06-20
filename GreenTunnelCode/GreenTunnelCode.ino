#include <CapacitiveSensor.h>

//ledA:630nm,RED
//ledB:555nm,LIME
//ledC:522nm,GREEN
//ledD:515nm,CYAN
//ledE:476nm,BLUE
//ledF:460nm,DEEP BLUE

int threshold = 100;

//establish port sensors for led controls
CapacitiveSensor capSensorA = CapacitiveSensor(13,12);
//CapacitiveSensor capSensorB = CapacitiveSensor(11,10);
//CapacitiveSensor capSensorC = CapacitiveSensor(9,8);
//CapacitiveSensor capSensorD = CapacitiveSensor(7,6);
//CapacitiveSensor capSensorE = CapacitiveSensor(5,4);
//CapacitiveSensor capSensorF = CapacitiveSensor(3,2);

//establish led ports
const int ledA = 11;
const int ledB = A1;
//const int ledC = A2;
//const int ledD = A3;
//const int ledE = A4;
//const int ledF = A5;

void setup() {
  Serial.begin(9600);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
//  pinMode(ledC, OUTPUT);
//  pinMode(ledD, OUTPUT);
//  pinMode(ledE, OUTPUT);
//  pinMode(ledF, OUTPUT);
}

void loop() {
  long sensorValueA = capSensorA.capacitiveSensor(30);
  //long sensorValueB = capSensorB.capacitiveSensor(30);
//  long sensorValueC = capSensorC.capacitiveSensor(30);
//  long sensorValueD = capSensorD.capacitiveSensor(30);
//  long sensorValueE = capSensorE.capacitiveSensor(30);
//  long sensorValueF = capSensorF.capacitiveSensor(30);
  Serial.println(sensorValueA);

  //write leds to switch on if the corresponding sensor is pressed
  if(sensorValueA > threshold){
    digitalWrite(ledA,HIGH);
  }  
  else if(sensorValueA < threshold){
    digitalWrite(ledA,LOW);
    }

  
//  if(sensorValueB >= threshold){
//    digitalWrite(ledB,HIGH);
//    }
//  if(sensorValueC >= threshold){
//    digitalWrite(ledC,HIGH);
//  }
//  if(sensorValueD >= threshold){
//    digitalWrite(ledD,HIGH);
//  }
//  if(sensorValueE >= threshold){
//    digitalWrite(ledE,HIGH);
//  }
//  if(sensorValueF >= threshold){
//    digitalWrite(ledF,HIGH);
//  }

  //write leds to switch off if the corresponding sensor isn't pressed.

//  if(sensorValueB < threshold){
//    digitalWrite(ledB,LOW);
//    }
//  if(sensorValueC < threshold){
//    digitalWrite(ledC,LOW);
//  }
//  if(sensorValueD < threshold){
//    digitalWrite(ledD,LOW);
//  }
//  if(sensorValueE < threshold){
//    digitalWrite(ledE,LOW);
//  }
//  if(sensorValueF < threshold){
//    digitalWrite(ledF,LOW);
//  }
  delay(10);
}
