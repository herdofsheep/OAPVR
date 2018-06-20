#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(13,12);
int threshold = 100;
int fadeValue = 0;
const int ledPin = 11;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  long sensorValue = capSensor.capacitiveSensor(30);
  Serial.println(sensorValue);

  analogWrite(ledPin, fadeValue);
  fade(sensorValue, fadeValue);
  delay(10);
}

void fade(const int sensorValue, int fadeValue){
  //write fadeValues to increase when corresponding sensor is pressed
  if(sensorValue > threshold){
    // fade in from min to max in increments of 5 points
    if (fadeValue < 255){
      fadeValue += 5;
      delay(30);
    }
    else{
      fadeValue = 255;
    }
  }
    //write fadeValues to decrease if the corresponding sensor isn't pressed.
  if(sensorValue < threshold){
    // fade out from max to min in increments of 5 points
    if (fadeValue > 0){
      fadeValue -= 5;
      delay(30);
    }
    else{
      fadeValue = 0;
    }
  }
}



