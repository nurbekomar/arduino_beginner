#include <Arduino.h>

int piezo = 3;
int gasSensor = A0;

void setup()
{
  pinMode(piezo, OUTPUT);
  pinMode(gasSensor, INPUT);
  noTone(piezo);
  
}

void loop()
{

  if (valGas > 300)
  {
    tone(piezo, 3000);
    delay(500);
    noTone(piezo);
    delay(500);
  }
  else
  {
    noTone(piezo);
  }
}