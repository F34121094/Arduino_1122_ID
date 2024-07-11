int red = 9;
int yello = 8;
int green = 7;
void setup() {
  pinMode(red,OUTPUT );
  pinMode(yello, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("red");
  for (int i = 0 ; i < 20 ; i++){
    digitalWrite(red, HIGH);
    delay(100);
    digitalWrite(red, LOW);
    delay(100);
  }
  Serial.println("yello");
  for (int i = 0 ; i < 20 ; i++){
    digitalWrite(yello, HIGH);
    delay(100);
    digitalWrite(yello, LOW);
    delay(100);
  }
  Serial.println("green");
  for (int i = 0 ; i < 20 ; i++){
    digitalWrite(green, HIGH);
    delay(100);
    digitalWrite(green, LOW);
    delay(100);
  }
}
