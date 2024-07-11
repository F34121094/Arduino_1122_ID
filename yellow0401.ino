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
  digitalWrite(green,HIGH);
}