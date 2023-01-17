  const int LED_pin = 12; 
  
  
void setup() {
  digitalRead(LED_pin, INPUT);
  Serial.begin(9600);
 
}

void loop() 
int buttonValue = digitalRead(LED_pin)// Reads the value of the pin as 0 or 1; high or low (for this bianary, (int) is needed before the variable assignment.
 if (buttonValue == HIGH)
  {
    pinMode (LED_pin, INPUT_PULLUP;
    Serial.println("Connection made.")
  }
  else
  {
    pinMode;
    Serial.println("No connection.")
  }

}
