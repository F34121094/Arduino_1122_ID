int a = 7;
int pb = 8;
bool i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(pb, INPUT);
}

void loop() {
  if (digitalRead(pb) == LOW) {
    i = !i;
  }
  if (i == 1) {
    digitalWrite(a, HIGH);
  } else {
    digitalWrite(a, LOW);
  }
  delay(100);
}


  //   if(digitalRead(pb) == LOW){
  //     digitalWrite(a, HIGH);
  //   }else{
  //     digitalWrite(a, LOW);
  //   }
  // }
