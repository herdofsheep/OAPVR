
  int switchState = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  switchState = digitalRead(5);

  if (switchState == LOW) {
    //If the button is not pressed

  digitalWrite(4, HIGH); //Big LED
  digitalWrite(3, LOW);  //Little LED 1
  digitalWrite(2, LOW);  //Little LED 2
  }

  else {
    //If the button is pressed

  for(int x = 0; x<5; x++) {   //'for' loop which causes the flashing to repeat 5 times after pressing
  
  digitalWrite(4, LOW); //Big LED
  digitalWrite(3, LOW);  //Little LED 1
  digitalWrite(2, HIGH);  //Little LED 2

  delay(100); //Wait for a quarter second

  //Toggle the LEDs
  digitalWrite(3, HIGH); //Little LED 1
  digitalWrite(2, LOW); //Little LED 2

  delay(100); //Wait for a quarter second
  
  }
  }
}  //Go back to the beginning of the loop()
