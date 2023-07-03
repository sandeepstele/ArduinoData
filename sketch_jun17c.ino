#include <MQ135.h>


void setup (){
Serial.begin (9600);
}
void loop() {
MQ135 gasSensor = MQ135(A0); // Attach sensor to pin A0
float air_quality = gasSensor.getPPM();
  // Print Senso value on Serial Monitor Window
  Serial.print("Air Quality: ");  
  Serial.print(air_quality);
  Serial.println("  PPM");   
  Serial.println();
}
