void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
}

void loop() {
  if(digitalRead(9) == LOW)
  {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
    digitalWrite(8, HIGH);//peters changes
    delay(1000);//peters changes
  }
}
//Joey was here
// Yasser was here