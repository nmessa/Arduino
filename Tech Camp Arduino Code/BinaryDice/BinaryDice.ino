const unsigned int LED_BIT0 = 12;
const unsigned int LED_BIT1 = 11;
const unsigned int LED_BIT2 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BIT0, OUTPUT);
  pinMode(LED_BIT1, OUTPUT);
  pinMode(LED_BIT2, OUTPUT);

  randomSeed(analogRead(A0));
  long result = random(1, 7);
  output_result(result);
}
void loop() {
  //To roll dice again, press the reset button on the Arduino
}

void output_result(const long result){
  digitalWrite(LED_BIT0, result & B001);
  digitalWrite(LED_BIT1, result & B010);
  digitalWrite(LED_BIT2, result & B100);
}

