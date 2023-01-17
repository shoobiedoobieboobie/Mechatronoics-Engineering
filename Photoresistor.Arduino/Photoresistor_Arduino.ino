int analog_Pin = A5; // defined photoresistor pin
int phres_Value = 0;// defined storage value; a box to place a value into
int low_value_count = 0; //storage value for amount of low light level dips
  
void setup()
{ Serial.begin(9600); // Calls serial function
 
}

void loop()
{
  phres_Value = analogRead(analog_Pin); // Storage box is holding the value of said photoresistor pin
  Serial.print("Resistance pin value is "); // Sentance for aesthetic/clarity
  Serial.print(phres_Value ); // Shows the value inside of the storage box
  delay (1000); // Delay to be able to read output

while (phres_Value<=100, low_value_count = low_value_count+1){// while light value is low

Serial.println(low_value_count);
delay(1000);
}
//Serial.print("Photoresistor value is ");
//Serial.print(phres_Value);
//Serial.print ("Photoresistor is recieving little light.");
//delay(1000);


  
}


// 100 low, 800 high
