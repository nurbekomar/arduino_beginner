#include <Arduino.h>

int piezo = 3;
int gasSensor = A0;

void setup()
{
  pinMode(piezo, OUTPUT);
  pinMode(gasSensor, INPUT);
  noTone(piezo);
  Serial.begin(9600);
}

void loop()
{
  int valGas = analogRead(gasSensor);
  Serial.println(valGas);

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