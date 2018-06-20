const int ledPin = 11;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, HIGH);

}
