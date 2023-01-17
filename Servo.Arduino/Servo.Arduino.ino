#include <Servo.h>
int pos = 0;
int pos_Zero = 0;
Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(9);

}

void loop() {
  for (0 <= pos <= 190; pos != 0; pos++){ 
  servo.write(pos);
  delay(100);
//  servo.write(pos=0);
  }

}
