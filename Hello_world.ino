void setup() { //Justin's comment!
  pinMode(7, OUTPUT);    // sets the digital pin 13 as output
  pinMode(8, INPUT);
}

void loop() {
  if(digitalRead(8) == LOW){
    digitalWrite(7, HIGH); // sets the digital pin 13 on
    delay(50);            // waits for a second
    digitalWrite(7, LOW);  // sets the digital pin 13 off
    delay(50); // waits for a second
  }
  else
    digitalWrite(13, LOW);  // sets the digital pin 13 off
}
