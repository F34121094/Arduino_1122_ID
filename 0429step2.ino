int my_rock = 3;
int my_paper = 4;
int my_scissor = 5;
int rock = 8;
int paper = 9;
int scissor = 10;
int win = 11;
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
  if (digitalRead(my_rock) == HIGH) {
    Serial.println("rock");
    delay(300);
  }
  if (digitalRead(my_paper) == HIGH){
    Serial.println("paper");
    delay(300);
  }
  if (digitalRead(my_scissor) == HIGH){
    Serial.println("scissor");
    delay(300);
  }
}
