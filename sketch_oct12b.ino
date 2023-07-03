int pushbutton=2;
void setup() {
  Serial.begin(9600);
  pinMode(pushbutton,INPUT);

}

void loop() {
int state=digitalRead(pushbutton);
Serial.println(state);
delay(100);

  
}
