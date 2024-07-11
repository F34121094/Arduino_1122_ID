#include <Servo.h>   

Servo myservo;  // 建立SERVO物件
int pb = 12;
int relayPin = 8;  // 繼電器控制引腳
int tear2 = 6;
int tear3 = 5;
int tear4 = 4;
int tear5 = 3;


void setup() {
  myservo.attach(13);  // 設定要將伺服馬達接到哪一個PIN腳
  pinMode(pb, INPUT);
  pinMode(relayPin, OUTPUT);  // 設置繼電器控制引腳為輸出
  pinMode(tear2, OUTPUT);
  pinMode(tear3, OUTPUT);
  pinMode(tear4, OUTPUT);
  pinMode(tear5, OUTPUT);
  Serial.begin(9600); // 初始化串口通信，便於調試
}


int time = 0;
void loop() {   
  int i = 0;
  if (digitalRead(pb) == LOW){
    i = 1;
    time += 1;
    delay(500);
    
  }
  if (i == 1){
    for (int i = 90; i < 150; i++){
        myservo.write(i);
        delay(5);
    }
    delay(1000);
    for (int i = 150; i > 90; i--){
      myservo.write(i);
      delay(5);
    }
    i = 0;
  }
  if(time % 3 == 0 && time != 0){
    int num = random(4);
    Serial.print("Random number generated: ");
    Serial.println(num);
    switch (num){
      case 2: // 生氣
        digitalWrite(relayPin, HIGH); // 啟動繼電器
        delay(5000);                  // 運行2秒
        digitalWrite(relayPin, LOW);  // 停止繼電器
        delay(500);
        break;
      case 3: //打呼
        for (int k = 0; k <3; k++){
        for (int i = 90; i < 120; i++){
          myservo.write(i);
          delay(60);
        }
        for (int i = 120; i < 110; i++){
            myservo.write(i);
            delay(60);
        }
        for (int i = 110; i < 130; i++){
            myservo.write(i);
            delay(60);
        }
        for (int i = 130; i > 90; i--){
            myservo.write(i);
            delay(60);
        }
      }
      break;
      case 1: //流淚
        int t = 500;
        for (int j = 0; j < 5; j++){
          for (int i = 3; i >=0 ; i--){
            digitalWrite(i+3,HIGH);
            delay(t/(i+1));
            digitalWrite(i+3,LOW);
          }
        }
        break;
      }
  time = 0;
  }
}