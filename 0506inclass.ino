const int pir = 7;


void setup() {
  pinMode(pir, INPUT);
  Serial.begin(9600);
}

void loop() {
  int i = 0;
  while (1){
    Serial.print("Test : ");
    Serial.print(i);
    Serial.print("\t");
    Serial.println(digitalRead(pir));
    i++;
    delay(250);
  }
}