/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
//my variables
const int LED_pin = 2; //const= is a constant value, will not chage, even if you try to change it.
int button_pin = 7;
int button_state = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(LED_pin, OUTPUT);
  pinMode(button_pin, INPUT);
}
// the loop function runs over and over again forever
void loop() {
  //Reads the button value
  button_state = digitalRead(button_pin);
  Serial.println (button_state);
  delay(1000);
  digitalWrite(LED_pin, button_state);
}
