//my variables
const int LED_pin = 4;
int button_pin = 7;
int relay_pin = 4;
int button_state;


void setup()
{
  Serial.begin(9600);
  pinMode(relay_pin, OUTPUT);
  pinMode(button_pin, INPUT_PULLUP);
}
void loop() {
  button_state = digitalRead(button_pin);
  if (button_state == LOW){
    digitalWrite(relay_pin, HIGH);
    delay(100);
    digitalWrite(relay_pin, LOW);
    delay(100);
  }
  else {
  digitalWrite(relay_pin,LOW);
  delay(100);
  }
}
  
