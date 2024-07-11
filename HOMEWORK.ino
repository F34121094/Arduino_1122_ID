int light = 7;
int pb = 8;
bool i = false;
int time = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(light, OUTPUT);
  pinMode(pb, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pb) == LOW) {  //我的按鈕按下時為LOW
    time++;
    delay(150);
    Serial.println(time);
  }

  while (time != 0 && time % 5 == 0) {  //要不等於0且被5除等於0才能進入
    time = 0;
    i = !i;                             //進入後先把 i 轉換
    if (i == true) {
      digitalWrite(light, HIGH);
    } else {
      digitalWrite(light, LOW);
    }
  }
}