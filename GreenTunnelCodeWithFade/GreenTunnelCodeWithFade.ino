#include <CapacitiveSensor.h>

//ledA:630nm,RED
//ledB:555nm,LIME
//ledC:522nm,GREEN
//ledD:515nm,CYAN
//ledE:476nm,BLUE
//ledF:460nm,DEEP BLUE

int threshold = 100;
int threshold2 = 300;

//establish port sensors for led controls
CapacitiveSensor capSensorA = CapacitiveSensor(A0,A1);
CapacitiveSensor capSensorB = CapacitiveSensor(A2,A3);
CapacitiveSensor capSensorC = CapacitiveSensor(A4,A5);
CapacitiveSensor capSensorD = CapacitiveSensor(13,12);
CapacitiveSensor capSensorE = CapacitiveSensor(8,7);
CapacitiveSensor capSensorF = CapacitiveSensor(4,2);

//establish led ports
const int ledA = 11;
const int ledB = 10;
const int ledC = 9;
const int ledD = 6;
const int ledE = 5;
const int ledF = 3;

//creat fade values for each led
int fadeValueA = 0;
int fadeValueB = 0;
int fadeValueC = 0;
int fadeValueD = 0;
int fadeValueE = 0;
int fadeValueF = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
}

void loop() {
  long sensorValueA = capSensorA.capacitiveSensor(30);
  long sensorValueB = capSensorB.capacitiveSensor(30);
  long sensorValueC = capSensorC.capacitiveSensor(30);
  long sensorValueD = capSensorD.capacitiveSensor(30);
  long sensorValueE = capSensorE.capacitiveSensor(30);
  long sensorValueF = capSensorF.capacitiveSensor(30);

  analogWrite(ledA, fadeValueA);
  analogWrite(ledB, fadeValueB);
  analogWrite(ledC, fadeValueC);
  analogWrite(ledD, fadeValueD);
  analogWrite(ledE, fadeValueE);
  analogWrite(ledF, fadeValueF);

  //write fadeValues to increase when corresponding sensor is pressed
  if(sensorValueA > threshold){
    // fade in from min to max in increments of 5 points
    if (fadeValueA < 255){
      fadeValueA += 5;
      delay(30);
    }
    else{
      fadeValueA = 255;
    }
  }

    if(sensorValueB > threshold2){
    // fade in from min to max in increments of 5 points
    if (fadeValueB < 255){
      fadeValueB += 5;
      delay(30);
    }
    else{
      fadeValueB = 255;
    }
  }
      if(sensorValueC > threshold2){
    // fade in from min to max in increments of 5 points
    if (fadeValueC < 255){
      fadeValueC += 5;
      delay(30);
    }
    else{
      fadeValueC = 255;
    }
  }
      if(sensorValueD > threshold){
    // fade in from min to max in increments of 5 points
    if (fadeValueD < 255){
      fadeValueD += 5;
      delay(30);
    }
    else{
      fadeValueD = 255;
    }
  }
      if(sensorValueE > threshold){
    // fade in from min to max in increments of 5 points
    if (fadeValueE < 255){
      fadeValueE += 5;
      delay(30);
    }
    else{
      fadeValueE = 255;
    }
  }
      if(sensorValueF > threshold){
    // fade in from min to max in increments of 5 points
    if (fadeValueF < 255){
      fadeValueF += 5;
      delay(30);
    }
    else{
      fadeValueF = 255;
    }
  }
  
  //write fadeValues to decrease if the corresponding sensor isn't pressed.
  if(sensorValueA < threshold){
    // fade out from max to min in increments of 5 points
    if (fadeValueA > 0){
      fadeValueA -= 5;
      delay(30);
    }
    else{
      fadeValueA = 0;
    }
  }

  if(sensorValueB < threshold){
    // fade out from max to min in increments of 5 points
    if (fadeValueB > 0){
      fadeValueB -= 5;
      delay(30);
    }
    else{
      fadeValueB = 0;
    }
  }

  if(sensorValueC < threshold){
    // fade out from max to min in increments of 5 points
    if (fadeValueC > 0){
      fadeValueC -= 5;
      delay(30);
    }
    else{
      fadeValueC = 0;
    }
  }
  if(sensorValueD < threshold){
    // fade out from max to min in increments of 5 points
    if (fadeValueD > 0){
      fadeValueD -= 5;
      delay(30);
    }
    else{
      fadeValueD = 0;
    }
  }
    if(sensorValueE < threshold){
    // fade out from max to min in increments of 5 points
    if (fadeValueE > 0){
      fadeValueE -= 5;
      delay(30);
    }
    else{
      fadeValueE = 0;
    }
  }
    if(sensorValueF < threshold){
    // fade out from max to min in increments of 5 points
    if (fadeValueF > 0){
      fadeValueF -= 5;
      delay(30);
    }
    else{
      fadeValueF = 0;
    }
  }  
  delay(10);
}
