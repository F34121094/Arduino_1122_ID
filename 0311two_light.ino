int button_pin_1 = 7;
int light_pin_1 = 8;
int button_pin_2 = 9;
int light_pin_2 = 6;
int buttonstate_1 = 0;
int buttonstate_2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(light_pin_1, OUTPUT);
  pinMode(button_pin_1, INPUT);
  pinMode(light_pin_2, OUTPUT);
  pinMode(button_pin_2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate_1 = digitalRead(button_pin_1);
  buttonstate_2 = digitalRead(button_pin_2);

  if(buttonstate_1 == LOW){
    digitalWrite(light_pin_1, HIGH);
  }else{
    digitalWrite(light_pin_1, LOW);
  }

  if(buttonstate_2 == LOW){
    digitalWrite(light_pin_2, HIGH);
  }else{
    digitalWrite(light_pin_2, LOW);
  }
}
