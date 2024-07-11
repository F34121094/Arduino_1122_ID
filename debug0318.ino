int VarA = 40;
int VarB = 13;
void setup() {
  Serial.begin(9600);
  pinMode(VarB, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int VarC = 500;
  digitalWrite(VarB,HIGH);
  delay(VarC);
  digitalWrite(VarB,LOW);
  delay(VarC);

  // put your main code here, to run repeatedly:

}
