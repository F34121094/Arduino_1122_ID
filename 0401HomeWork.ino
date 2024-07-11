//RGB燈在沒有被按時，會隨機閃爍變色
//有一個按鈕
//按了暫停變色並停留
//再次按下繼續變色
int red = 8;
int blue = 9;
int green = 10;
int b = 7;
int t = 100;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(b, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print(digitalRead(b));
  int num = random(0, 3); 
  switch (num){
    case 0 : 
      digitalWrite(red, HIGH);
      delay(t);
      if (digitalRead (b) == LOW) {
        delay(t);
        while (1){
          if (digitalRead (b) == LOW) {
            break;
          }
        }
      }
      digitalWrite(red, LOW);
      break;
    case 1:
      digitalWrite(blue, HIGH);
      delay(t);
      if (digitalRead (b) == LOW) {
        delay(t);
        while(1){
          if (digitalRead (b) == LOW) {
            break;
          }
        }
      }
      digitalWrite(blue, LOW);
      break;
    case 2:
      digitalWrite(green, HIGH);
      delay(t);
      if (digitalRead (b) == LOW) {
        delay(t);
        while (1){
          if (digitalRead (b) == LOW) {
            break;
          }
        }
      }
      digitalWrite(green, LOW);
      break;
  }
}

