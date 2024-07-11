int light = 7;
void setup() {
  pinMode(light,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
  int val = analogRead(A0);
  val = map(time,0,300,0,255);
  val = map(time,301,655,255,0);
  analogWrite(light,time);
}
