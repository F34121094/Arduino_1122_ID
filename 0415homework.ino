int light = 6;

void setup() {
  Serial.begin(9600);
  pinMode(light,OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  Serial.print(val);
  Serial.print("\t");
  val = map(val,0,1024,0,255);
  Serial.println(val);
  if (val > 127){
    analogWrite(light,255 - val);
  }else{
    analogWrite(light,val);
  }
}
