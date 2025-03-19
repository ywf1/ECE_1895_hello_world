//One LED blink
void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT); digitalWrite(2,LOW);
  pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(9)){
    digitalWrite(0,HIGH);
    delay(500);
    digitalWrite(0,LOW);
    delay(500);
  }
}