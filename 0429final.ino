int my_rock = 3;
int my_paper = 4;
int my_scissor = 5;
int rock = 8;
int paper = 9;
int scissor = 10;
int win = 11;
unsigned long last_time = 0;
unsigned long t1;
int me = -1;

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
  if (millis() - t1 >= 1500) {
    int count = 0;
    digitalWrite(rock, HIGH);
    delay(1000);
    count++;
    Serial.println(count);
    digitalWrite(paper, HIGH);
    delay(1000);
    count++;
    Serial.println(count);
    digitalWrite(scissor, HIGH);
    delay(1000);
    count++;
    Serial.println(count);
    digitalWrite(rock, LOW);
    digitalWrite(paper, LOW);
    digitalWrite(scissor, LOW);
    t1 = millis();
  }

  if (digitalRead(my_rock) == HIGH) {
    me = 0;
  } else if (digitalRead(my_paper) == HIGH) {
    me = 1;
  } else if (digitalRead(my_scissor) == HIGH) {
    me = 2;
  }

  if (millis() - t1 >= 500) {
    int n = random(0, 3);
    if (me == -1) {
      Serial.println("You didn't take action!");
      Serial.println("Restart after 1000(ms)");
      delay(1000);
    } else {
      if (n % 3 == 0) {
        if (me == 0) {
          Serial.println("PC    VS    me");
          Serial.println("Rock  VS    Rock");
          Serial.println("Result : Tie");
          digitalWrite(rock, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          me = -1;
        } else if (me == 1) {
          Serial.println("PC    VS    me");
          Serial.println("Rock  VS    Paper");
          Serial.println("Result : WIN");
          digitalWrite(rock, HIGH);
          digitalWrite(win, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          digitalWrite(win, LOW);
          me = -1;
        } else if (me == 2) {
          Serial.println("PC    VS    me");
          Serial.println("Rock  VS    Scissor");
          Serial.println("Result : Lose");
          digitalWrite(rock, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          me = -1;
        }
      }
      if (n % 3 == 1) {
        if (me == 0) {
          Serial.println("PC     VS   me");
          Serial.println("Paper  VS   Rock");
          Serial.println("Result : Lose");
          digitalWrite(rock, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          me = -1;
        } else if (me == 1) {
          Serial.println("PC     VS   me");
          Serial.println("Paper  VS   Paper");
          Serial.println("Result : Tie");
          digitalWrite(rock, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          me = -1;
        } else if (me == 2) {
          Serial.println("PC     VS   me");
          Serial.println("Paper  VS   Scissor");
          Serial.println("Result : Win");
          digitalWrite(rock, HIGH);
          digitalWrite(win, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          digitalWrite(win, LOW);
          me = -1;
        }
      }
      if (n % 3 == 2) {
        if (me == 0) {
          Serial.println("PC       VS   me");
          Serial.println("Scissor  VS   Rock");
          Serial.println("Result : Win");
          digitalWrite(rock, HIGH);
          digitalWrite(win, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          digitalWrite(win, LOW);
          me = -1;
        } else if (me == 1) {
          Serial.println("PC       VS   me");
          Serial.println("Scissor  VS   Paper");
          Serial.println("Result : Lose");
          digitalWrite(rock, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          me = -1;
        } else if (me == 2) {
          Serial.println("PC       VS   me");
          Serial.println("Scissor  VS   Scissor");
          Serial.println("Result : Tie");
          digitalWrite(rock, HIGH);
          delay(1000);
          digitalWrite(rock, LOW);
          me = -1;
        }
      }
    }
  }
}