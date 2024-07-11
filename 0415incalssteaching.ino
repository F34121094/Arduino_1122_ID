int red = 8;
int blue = 9;
int green = 10;
int b = 11;
int time = 300;
bool act = 1;
unsigned long lasttime;
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(b, INPUT);
}

void loop() {
// put your main code here, to run repeatedly:
  if (act == true && millis() - lasttime > 500){
  analogWrite(red, random(255));
  analogWrite(green, random(255));
  analogWrite(blue, random(255));
  lasttime = millis();
  }

  if (digitalRead(b)==LOW){
  act =! act;
  delay(500);
  }
}