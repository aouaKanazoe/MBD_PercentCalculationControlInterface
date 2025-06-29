extern"C"{
#include "PCCI.h"
#include "CalculatePercentFunction.h"
}
#include <Arduino.h>

void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  PCCI_U.PercentRawValue_U16 = analogRead(A0);
  PCCI_Y.Indicator_Lamp_B = PCCI_CalculatePercentFunction(PCCI_U.PercentRawValue_U16);
  digitalWrite(10,PCCI_Y.Indicator_Lamp_B);
}

