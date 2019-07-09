//Turn LEDs on

// the setup function runs once when you press reset or power the board
void setup() {
       // initialize digital pin 8, 9, and 10 as an output.
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(9, HIGH);    // turn the LED on (HIGH is the voltage level)
  digitalWrite(10, HIGH);    // turn the LED on (HIGH is the voltage level)
}

