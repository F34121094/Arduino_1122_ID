//一開始中間的燈會亮
//左右兩個按鈕
//按左按鈕，亮燈往左移
int l_2 = 9;
int l_1 = 10;
int m = 11;
int r_1 = 12;
int r_2 = 13;
int pb_r = 8;
int pb_l = 7;

void setup() {
  pinMode(l_2,OUTPUT);
  pinMode(l_1,OUTPUT);
  pinMode(m,OUTPUT);
  pinMode(r_1,OUTPUT);
  pinMode(r_2,OUTPUT);
  pinMode(pb_r,INPUT);
  pinMode(pb_l,INPUT);
}
int list[5] ={9,10,11,12,13} ;
int num = 2;
void loop() {
  if (digitalRead(pb_r) == LOW){
    digitalWrite(list[num], LOW);
    num += 1;
    if (num > 4){
      num = 4;
    }
    delay(250);
  }
  if (digitalRead(pb_l) == LOW){
    digitalWrite(list[num], LOW);
    num -= 1;
    if (num < 0){
      num = 0;
    }
    delay(250);
  }
  digitalWrite(list[num],HIGH);
}
