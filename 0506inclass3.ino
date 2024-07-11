int sm = 9;
void setup() {
  pinMode(sm,OUTPUT);
}

void loop() {
  for (int i =0; i<=1000;i += 50 ){
    tone(sm, i);
    delay(300);
    noTone(sm);
    delay(500);
  }
}