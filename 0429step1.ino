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
}

void loop() {
  digitalWrite(rock,HIGH);
  delay(1000);
  digitalWrite(rock,LOW);

  digitalWrite(paper,HIGH);
  delay(1000);
  digitalWrite(paper,LOW);

  digitalWrite(scissor,HIGH);
  delay(1000);
  digitalWrite(scissor,LOW);

  digitalWrite(win,HIGH);
  delay(1000);
  digitalWrite(win,LOW);
}
