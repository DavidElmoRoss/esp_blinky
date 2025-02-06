#include "Arduino.h"

#define LED_BUILTIN  2
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() 
{
  printf("\e[2J");
  fflush(stdout);
  printf("\e[11;34H\e[1;31mLED STATE");
  for(;;)
  {
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED off (HIGH is the voltage level)
  printf("\e[12;36H\e[36mOFF");
  fflush(stdout);
  delay(500);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED on by making the voltage LOW
  printf("\e[12;36H\e[34m ON");
  fflush(stdout);
  delay(500);                       // wait for a second
  }
}
