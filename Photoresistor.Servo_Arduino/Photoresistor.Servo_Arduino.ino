#include <Servo.h>

// defining variables 

// these are the individual photoresistor analog values
int phres_one = A1 ;
int phres_two = A2 ;
int phres_three = A3 ;
int phres_four = A4 ;
int phres_five = A5 ;
int phresval_array[5];
int pos = 0 ; // servo position storage 
//servo variable

Servo servo;



void setup() {
  Serial.begin(9600);// serial monitor innitiated
  servo.attach(9); // defines pin 9 as the servo pin
 
  servo.write(pos); // set servo to default position 
  delay(1000); //delay for servo to get to default position
  Serial.print(array.getMax());

}

void loop() {
  phresval_array [0] = analog.read(phres_one);
  phresval_array [1] = analog.read(phres_two);
  phresval_array [2] = analog.read(phres_three);
  phresval_array [3] = analog.read(phres_four);
  phresval_array [4] = analog.read(phres_five);

  

  

  
  
}
