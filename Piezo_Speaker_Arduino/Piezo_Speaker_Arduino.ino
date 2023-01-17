int piezoPin = 8;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  //tone(pin, hertz, millis())
tone(piezoPin,392,250);
delay(500);

tone(piezoPin,293.66,62.5);
delay(125);

tone(piezoPin,293.66,62.5);
delay(125);

tone(piezoPin,329.63,125);
delay(250);

tone(piezoPin,293.66,250);
delay(500);

tone(piezoPin,369.99,125);
delay(250);

tone(piezoPin,392,125);
delay(250);

delay(1000);


}
