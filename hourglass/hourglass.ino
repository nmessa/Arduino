//Declare variables
const int switchPin = 8;
unsigned long previousTime = 0;
int switchState = 0;
int prevSwitchState = 0;
int led = 2;
long interval = 600000;

void setup()
{
  //Set pins 2 to 7 to OUTOUT
  for(int x = 2;x<8;x++)
  {
    pinMode(x, OUTPUT);
  }

  //Set pin 8 to INPUT
  pinMode(switchPin, INPUT);
}

void loop()
{
  unsigned long currentTime = millis();
  
  //Cycle through the LED’s turning them on one at a time
  if(currentTime - previousTime > interval) 
  {
    previousTime = currentTime;
    digitalWrite(led, HIGH);
    led++;
    if(led == 7){}  //Do nothing
  }
  
  //Check to see if hourglass has been reset
  switchState = digitalRead(switchPin);
  
  //Reset LED’s to off
  if(switchState != prevSwitchState)
  {
    for(int x = 2;x<8;x++)
    {
      digitalWrite(x, LOW);
    }
    led = 2;
    previousTime = currentTime;
  }
  
  //Allow the hourglass to start functioning again
  prevSwitchState = switchState;
}

