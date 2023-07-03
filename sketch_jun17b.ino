#include "MQ135.h"
void setup() {
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  MQ135 gasSensor = MQ135(A0);
  float rzero = gasSensor.getRZero();
  Serial.print(rzero); 

}
