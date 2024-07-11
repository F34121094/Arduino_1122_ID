int red = 13;
int green = 9;
int blue = 8;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

}

void loop() {
  digitalWrite(red,HIGH);
  delay(500);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
  delay(500);
  digitalWrite(red,HIGH);
  delay(500);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(blue,HIGH);
  digitalWrite(red,LOW);
  delay(500);
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  delay(500);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}
