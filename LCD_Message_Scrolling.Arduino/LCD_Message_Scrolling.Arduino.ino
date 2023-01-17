/*
 LiquidCrystal Library - Hello World
 https://www.arduino.cc/en/Tutorial/HelloWorld
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * Typical 16 pin LCD display
 * (1)  LCD VSS pin to GND
 * (2)  LCD VDD/VCC to 5V
 * (3)  LCD V0 (Contrast)10K Pot between 5V and GND
 * (4)  LCD RS pin to Arduino digital pin 12
 * (5)  LCD R/W pin to GND
 * (6)  LCD Enable pin to Arduino digital pin 11
 * (7)  LCD D0 pin - N/C No Connect
 * (8)  LCD D1 pin - N/C No Connect
 * (9)  LCD D2 pin - N/C No Connect
 * (10) LCD D3 pin - N/C No Connect
 * (11) LCD D4 pin to Arduino digital pin 5
 * (12) LCD D5 pin to Arduino digital pin 4
 * (13) LCD D6 pin to Arduino digital pin 3
 * (14) LCD D7 pin to Arduino digital pin 2
 * (15) LCD A pin through a 220 ohm to 5V
 * (16) LCD K pin to GND

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>
String my_string;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  my_string = "egasseM";
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.rightToLeft();
  lcd.setCursor(17,0);
  lcd.print(my_string);
  lcd.scrollDisplayLeft();
  delay(100);
 
  
  
  // print the number of seconds since reset:
/*  lcd.setCursor(1, 1);
   lcd.print(millis() / 1000);*/
}
