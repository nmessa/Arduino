void setup() {
  // initialize digital pin 8, 9, and 10 as an output.
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //Green
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(6000);
  digitalWrite(10, LOW);   // turn the LED off (LOW is the voltage level)


  //Yellow
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
  digitalWrite(9, LOW);    // turn the LED off (LOW is the voltage level)

  //Red
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(6000);
  digitalWrite(8, LOW);    // turn the LED off (LOW is the voltage level)

}

