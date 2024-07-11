int button_pin_1 = 8;
int light_pin_1 = 7;

int buttonstate_1 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(light_pin_1, OUTPUT);
  pinMode(button_pin_1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // buttonstate_1 = digitalRead(button_pin_1);

  if(digitalRead(button_pin_1) == HIGH){
    digitalWrite(light_pin_1, HIGH);
  }else{
    digitalWrite(light_pin_1, LOW);
  }
}