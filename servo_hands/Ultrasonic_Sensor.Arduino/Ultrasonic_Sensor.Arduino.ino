
// defines pins numbers
const int trigPin = 11;
const int echoPin = 12;
const int LED_Pin = 13;
int object_count = 0;

// defines variables
long duration;
int distance;

void setup() {
  // UltraSonoc Pins
  //pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  //pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  // initialize digital pin LED_BUILTIN as an output.
 // pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // Clears the trigPin
  //digitalWrite(trigPin, LOW);
  //delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  //digitalWrite(trigPin, HIGH);
  //delayMicroseconds(10);
  //digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  //duration = pulseIn(echoPin, HIGH); 
  
  // Calculating the distance
  //distance = duration * 0.034 / 2;
  
  // Prints the distance on the Serial Monitor
  //Serial.print("Distance: ");
  //Serial.println(distance);

int dist;

dist = func_distance();
 
while (dist < 5 && object_count < 10 ){ 
      object_count == object_count++ ; 
      Serial.println(object_count );
      Serial.println(" objects have passed by the sensor");
      delay(300);    
      dist = func_distance();
}


Serial.println(" 10 objects have passed by the sensor." ); 

}

int func_distance(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;
  return distance;
}
