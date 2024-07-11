int my_rock = 3;
int my_paper = 4;
int my_scissor = 5;
int rock = 8;
int paper = 9;
int scissor = 10;
int win = 11;
int count;
void setup() {
  pinMode(my_rock, INPUT);
  pinMode(my_paper, INPUT);
  pinMode(my_scissor, INPUT);
  pinMode(rock, OUTPUT);
  pinMode(paper, OUTPUT);
  pinMode(scissor, OUTPUT);
  pinMode(win, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  count = 0;
  delay(1000);
  count ++;
  Serial.println(count);
  delay(1000);
  count ++;
  Serial.println(count);
  delay(1000);
  count ++;
  Serial.println(count);
  int n = random(0,3);
  if (n%3 == 0){
    Serial.println("rock");
    digitalWrite(rock,HIGH);
    delay(1000);
    digitalWrite(rock,LOW);
  }
  if (n%3 == 1){
    Serial.println("paper");
    digitalWrite(paper,HIGH);
    delay(1000);
    digitalWrite(paper,LOW);
  }
  if (n%3 == 2){
    Serial.println("scissor");
    digitalWrite(scissor,HIGH);
    delay(1000);
    digitalWrite(scissor,LOW);
  }
}