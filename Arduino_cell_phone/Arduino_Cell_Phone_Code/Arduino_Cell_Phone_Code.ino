#include <SoftwareSerial.h>
const int buttonPin1 = 8;    
int buttonState1 = 0; 
const int buttonPin2 = 7;    
int buttonState2 = 0;
const int buttonPin3 = 6;    
int buttonState3 = 0; 
const int buttonPin4 = 1;    
int buttonState4 = 0; 
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
SoftwareSerial my(9,10);
void setup()
{
   Serial.begin(9600);
   lcd.begin(16, 2);
   pinMode(buttonPin1, INPUT);
   pinMode(buttonPin2, INPUT);
   pinMode(buttonPin3, INPUT);
   pinMode(buttonPin4, INPUT);
}
void loop() {
 buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 == HIGH ) 
  {
   lcd.setCursor(0, 0);
   lcd.print("");
   lcd.setCursor(0, 1);
  }
  else 
  {
   lcd.setCursor(0, 0);
   lcd.print("**********   "); //remove * and type the first phone number
   lcd.setCursor(0, 1);
   lcd.println("callingnumber   ");
   my.begin(9600);
   delay(5000);
   my.println("ATD**********;"); //remove * and type the first phone number
   lcd.setCursor(0, 1);
   lcd.println("called          ");
  }
 buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 == HIGH ) 
  {
   lcd.setCursor(0, 0);
   lcd.print("");
   lcd.setCursor(0, 1);
  }
  else 
  {
   lcd.setCursor(0, 0);
   lcd.print("&&&&&&&&&&   "); //remove & and type the second phone number
   lcd.setCursor(0, 1);
   lcd.println("callingnumber   ");
   my.begin(9600);
   delay(5000);
   my.println("ATD&&&&&&&&&&;"); //remove & and type the second phone number
   lcd.setCursor(0, 1);
   lcd.println("called          ");
  }
 buttonState3 = digitalRead(buttonPin3);
  if (buttonState3 == HIGH ) 
  {
   lcd.setCursor(0, 0);
   lcd.print("");
   lcd.setCursor(0, 1);
  }
  else 
  {
   lcd.setCursor(0, 0);
   lcd.print("Hang          ");
   lcd.setCursor(0, 1);
   lcd.print("                ");
   my.begin(9600);
   delay(2000);
   my.println("ATH");
  }
 buttonState4 = digitalRead(buttonPin4);
  if (buttonState4 == HIGH ) 
  {
   lcd.setCursor(0, 0);
   lcd.print("");
   lcd.setCursor(0, 1);
  }
  else 
  {
   lcd.setCursor(0, 0);
   lcd.print("Incoming call");
   lcd.setCursor(0, 1);
   lcd.print("                ");
   my.begin(9600);
   delay(2000);
   my.println("ATA");
  }
}
