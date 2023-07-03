void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

 void loop() 
{
  float sum = 0;
  float al=0;
  for(int i=0; i< 5; i++)
  {
    sum = sum + analogRead(A0);
    delay(100);  // to average over a longer time period the delay is in the for loop
  } 

  float average = sum / 5.0 ;
  float voltage = average * 5.0 / 1023;  
  if (voltage>0.2 and voltage<1.0){al=((8*0.00001)*(voltage*voltage*1000000)+(0.1873*voltage*1000) + 46.131);
    Serial.println(al);
  }
}
