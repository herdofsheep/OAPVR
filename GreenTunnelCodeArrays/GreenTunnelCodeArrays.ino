#include <CapacitiveSensor.h>

//ledA:630nm,RED
//ledB:555nm,LIME
//ledC:522nm,GREEN
//ledD:515nm,CYAN
//ledE:476nm,BLUE
//ledF:460nm,DEEP BLUE

int threshold = 100;

//establish port sensors for led controls
CapacitiveSensor[] capSensor;
int numOfColours;

void setup() {
  numOfColours = 6;
  capSensor = new capSensor[numOfColours]

}

void loop() {
  // put your main code here, to run repeatedly:

}
