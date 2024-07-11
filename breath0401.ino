int red = 13;
int green = 9;
int blue = 8;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

}

void loop() {
  for (int i = 10; i<=255; i+=10){
    analogWrite(red,i);
    delay(100);
  }
  for (int i = 255; i>=10; i-=10){
    analogWrite(red,i);
    delay(100);
  }
  digitalWrite(red,LOW);
  for (int i = 10; i<=255; i+=10){
    analogWrite(green,i);
    delay(100);
  }
  for (int i = 255; i>=10; i-=10){
    analogWrite(green,i);
    delay(100);
  }
  digitalWrite(green,LOW);
  for (int i = 10; i<=255; i+=10){
    analogWrite(blue,i);
    delay(100);
  }
  for (int i = 255; i>=10; i-=10){
    analogWrite(blue,i);
    delay(100);
  }
  digitalWrite(blue,LOW);
}
