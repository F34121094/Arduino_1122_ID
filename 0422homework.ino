#include <Servo.h>

Servo myservo;  

int pos = 0;    
void setup() {
  myservo.attach(9);  
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A1);
  Serial.print(val);
  Serial.print("\t");
  int pos = map(val,0,1023,10,170);
  Serial.println(pos);
  myservo.write(pos);      
  delay(100);
}