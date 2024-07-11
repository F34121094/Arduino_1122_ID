int light_1 = 7;
int pb_1 = 6;
int pb_2 = 10;
int light_2 = 9;
bool i_1 = false;
bool i_2 = false;
int time = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(light_1, OUTPUT);
  pinMode(light_2, OUTPUT);
  pinMode(pb_1, INPUT);
  pinMode(pb_2, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pb_1) == HIGH || digitalRead(pb_2) == HIGH){
    time ++;
    Serial.println(time);
    delay(150);
  }

  if(digitalRead(pb_1) == LOW && time == 5){
    digitalWrite(light_1, HIGH);
    digitalWrite(light_2, LOW);
    time = 0;
  }
  if (digitalRead(pb_2) == HIGH && time == 5) {  //我的按鈕按下時為LOW
    digitalWrite(light_2, HIGH);
    digitalWrite(light_1, LOW);
    time = 0;
  }

}
