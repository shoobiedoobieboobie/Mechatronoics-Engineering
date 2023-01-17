int leftLimitSwitch= 4;
int rightLimitSwitch=3;

int leftLimitSwitchValue = LOW;
int rightLimitSwitchValue = LOW;

int motorDirectionPin1 = 6;
int motorDirectionPin2 = 7;

byte motorSpeed=0; 
int motorDriveSpeedPin = 9;


void setup() {
Serial.begin(9600);
pinMode(leftLimitSwitch, INPUT);
pinMode(rightLimitSwitch, INPUT);

pinMode(motorDirectionPin1, OUTPUT);
pinMode(motorDirectionPin2, OUTPUT);
pinMode(motorDriveSpeedPin, OUTPUT);

digitalWrite(motorDirectionPin1, LOW);
digitalWrite(motorDirectionPin2, LOW);
analogWrite(motorDriveSpeedPin, 0);
}

void loop() {
motorSpeed = 100;
  digitalWrite(motorDirectionPin1, HIGH);
  digitalWrite(motorDirectionPin2, LOW);
  analogWrite(motorDriveSpeedPin, motorSpeed);  
  
leftLimitSwitchValue = digitalRead(leftLimitSwitch);
Serial.print("left limit switch value is");
Serial.println(leftLimitSwitchValue);
delay(1000);

rightLimitSwitchValue = digitalRead(rightLimitSwitch);
Serial.print("right limit switch value is");
Serial.println(rightLimitSwitchValue);
delay(1000);

if (leftLimitSwitchValue == HIGH){
  digitalWrite(motorDirectionPin1,LOW);
  digitalWrite(motorDirectionPin2, HIGH);
  analogWrite(motorDriveSpeedPin, 100);

}
else{
  digitalWrite(motorDirectionPin1, HIGH);
  digitalWrite(motorDirectionPin2, LOW);
  analogWrite(motorDriveSpeedPin, motorSpeed);  
}

if (rightLimitSwitchValue == HIGH){
  digitalWrite(motorDirectionPin2, LOW);
  delay(2000);
  digitalWrite(motorDirectionPin1, HIGH);
  analogWrite(motorDriveSpeedPin, 100);
}
else{
  digitalWrite(motorDirectionPin1, LOW);
  digitalWrite(motorDirectionPin2, HIGH);
   analogWrite(motorDriveSpeedPin, 100);
  
}

}
