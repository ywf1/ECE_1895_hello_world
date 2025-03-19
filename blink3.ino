//3 LED blink
void setup() {
  // put your setup code here, to run once:
  pinMode(A5,OUTPUT); digitalWrite(A5,LOW);
  pinMode(A4,OUTPUT); digitalWrite(A4,LOW);
  pinMode(A3,OUTPUT); digitalWrite(A3,LOW);
  pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(9)){
    digitalWrite(A3,HIGH);
    digitalWrite(A4,LOW);
    digitalWrite(A5,LOW);
    delay(500);
    digitalWrite(A3,LOW);
    digitalWrite(A4,HIGH);
    digitalWrite(A5,LOW);
    delay(500);
    digitalWrite(A3,LOW);
    digitalWrite(A4,LOW);
    digitalWrite(A5,HIGH);
    delay(500);
  }
  else{
    digitalWrite(A3,LOW);
    digitalWrite(A4,LOW);
    digitalWrite(A5,LOW);
  }
}