
void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  for(int x = 1000 ; x >= 50 ; x -= 50){
    digitalWrite(13,HIGH);
    delay(x);
    digitalWrite(13,LOW);
    delay(x);
  }
  for(int x = 50 ; x <= 1000 ; x += 50){
    digitalWrite(13,HIGH);
    delay(x);
    digitalWrite(13,LOW);
    delay(x);
}
}
