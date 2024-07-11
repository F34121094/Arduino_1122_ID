int LedRed = 8;
int LedGreen = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedRed, OUTPUT);
  pinMode(LedGreen, OUTPUT);
  Serial.print("\nWilly Liao\n");
  Serial.print("F34121094\n");
  Serial.print("RED\n");
}
int time = 300;
void loop() {
   //put your main code here, to run repeatedly:
  digitalWrite(LedRed, HIGH);    
   digitalWrite(LedGreen, LOW);
  //  Serial.print("on\n");
   delay(time);
   digitalWrite(LedRed, LOW);
   digitalWrite(LedGreen, HIGH);
  //  Serial.print("off\n");
   delay(time);
   Serial.println(time);

   time += 100;
}