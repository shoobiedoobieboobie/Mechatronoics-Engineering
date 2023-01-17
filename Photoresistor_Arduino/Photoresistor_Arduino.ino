int analog_Pin = A5; // defined photoresistor pin
int phres_Value = 0;// defined storage value; a box to place a value into
int low_value_count = 0; //storage value for amount of low light level dips

void setup()
{ Serial.begin(9600); // calls serial function

}

void loop()
{
  phres_Value = analogRead(analog_Pin); // storage box is holding the value of said photoresistor pin
  Serial.print(" Resistance pin value is "); // sentance for aesthetic/clarity
  Serial.print(phres_Value ); // shows the value inside of the storage box
  delay (300); // delay to be able to read output

  while (phres_Value < 100 ) { // while light value is low
    low_value_count == low_value_count++ ; // counts the amount of times low value count dips bellow 100.
    Serial.println(low_value_count);
    delay(300);
    phres_Value = analogRead(analog_Pin); // !!!checks whether the while function is still true; whether photoresistor value is still low
  }
  //if (low_value_count == 10)
  //Serial.println(" Photoresistor is in a dark place, resistance value is high ");
  
}
//Serial.print("Photoresistor value is ");
//Serial.print(phres_Value);
//Serial.print ("Photoresistor is recieving little light.");
//delay(1000);






// 100 low, 800 high
