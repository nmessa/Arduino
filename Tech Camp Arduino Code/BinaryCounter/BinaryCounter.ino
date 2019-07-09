const unsigned int LED_BIT0 = 12;
const unsigned int LED_BIT1 = 11;
const unsigned int LED_BIT2 = 10;
int count;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BIT0, OUTPUT);
  pinMode(LED_BIT1, OUTPUT);
  pinMode(LED_BIT2, OUTPUT);
}

void loop() {
  //To roll dice again, press the reset button on the Arduino
  for (count = 0; count <= 7; count++)
  {
    output_result(count);
    delay(1000);
  }
}

void output_result(const long result){
  digitalWrite(LED_BIT0, result & B001);
  digitalWrite(LED_BIT1, result & B010);
  digitalWrite(LED_BIT2, result & B100);
}

