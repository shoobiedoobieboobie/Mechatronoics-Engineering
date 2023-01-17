void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int x = 0; x < 20; x++) {
    Serial.println(x);
    delay(300);
    if ( x == 10) {
      Serial.println("The loop is equal to 10. ");
      delay(300);
    } else if (x<10){
      Serial.println("The loop is less than 10. ");
      delay(300);
    } else if(x>10) {
      Serial.println("The loop is more than 10. ");
      delay(300);
    }
  }
}
