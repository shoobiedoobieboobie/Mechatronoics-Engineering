#include <Servo.h> // Import Servo Library
// create servo object to control a servo


#include <Servo.h>

Servo servohand;
Servo servofist; // create servo object to control a servo


int pos = 0;  // variable to store the servo posion
int time = millis();
void setup() {
  Serial.begin(9600);
  servofist.attach(12);  // attaches the servo on pin 9 to the servo object
  servohand.attach(9);
}

void loop() {
//hand waving
  while(time <=10000)  
{ 
  for (pos = 0; pos <= 180; pos += 5) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servohand.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 50; pos >= 0; pos -= 5) { // goes from 180 degrees to 0 degrees
    servohand.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

//endtime = millis();
time +=1000;
Serial.println(time);
Serial.println("helloo");
delay(100);
}
servohand.write(0);
time = 0;
delay(1000);
}

/*fist pounding 
 while(time <=10000)  
{ 
  for (pos = 0; pos <= 180; pos += 10) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servofist.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 10) { // goes from 180 degrees to 0 degrees
    servofist.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

//endtime = millis();
time +=1000;
Serial.println(time);
Serial.println("helloo");
delay(100);
}
servofist.write(180);
time = 0;
delay(1000);

}*/
