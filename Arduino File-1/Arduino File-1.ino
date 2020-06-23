#include<LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
#define Row4 0 // Connecting Keypad Row4 to PIN 0.
#define Row3 1 // Connecting Keypad Row3 to PIN 1.
#define Row2 2 // Connecting Keypad Row2 to PIN 2.
#define Row1 3 // Connecting Keypad Row1 to PIN 3.
#define Col1 4 // Connecting Keypad Column1 to PIN 4.
#define Col2 5 // Connecting Keypad Column2 to PIN 5.
#define Col3 6 // Connecting Keypad Column3 to PIN 6.


int COL1,COL2,COL3;
int ROW1,ROW2,ROW3,ROW4;
int del=600;

// Variable Checking the State of the Button.
void setup()
{
 lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Khizar Hayat");
  lcd.setCursor(0, 1);
  lcd.print("**-->** ");
  delay(1000);
  lcd.clear();
for (int i=7;i<14;i++)
{
pinMode(i,OUTPUT);
// Taking all Pins from 7-13 as OUTPUT for 7SEGMENT.
}
for (int i=4;i<7;i++)
{
pinMode(i,OUTPUT);
// Taking all Pins from 4-7 as OUTPUT for KEYPAD.
}
for (int i=0;i<4;i++)
{
pinMode(i,OUTPUT);
// Taking all Pins from 0-3 as OUTPUT for KEYPAD.
}


}
void loop()
{
  r1();
  r2();
  r3();
  r4(); 
  
}

void r1() {

  digitalWrite(Row1, HIGH);
  digitalWrite(Row2, LOW);
  digitalWrite(Row3, LOW);
  digitalWrite(Row4, LOW);


  if (digitalRead(Col1) == HIGH) {
lcd.print("1");  
delay(del);
  }
  else if (digitalRead(Col2) == HIGH) {
lcd.print("2");
delay(del);
  }
  else if (digitalRead(Col3) == HIGH) {
lcd.print("3");
delay(del);
  }

}


void r2() {

  digitalWrite(Row1, LOW);
  digitalWrite(Row2, HIGH);
  digitalWrite(Row3, LOW);
  digitalWrite(Row4, LOW);


  if (digitalRead(Col1) == HIGH) {
lcd.print("4");  
delay(del);
  }
  else if (digitalRead(Col2) == HIGH) {
lcd.print("5");
delay(del);
  }
  else if (digitalRead(Col3) == HIGH) {
lcd.print("6");
delay(del);
  }

}

void r3() {

  digitalWrite(Row1, LOW);
  digitalWrite(Row2, LOW);
  digitalWrite(Row3, HIGH);
  digitalWrite(Row4, LOW);


  if (digitalRead(Col1) == HIGH) {
lcd.print("7");
delay(del);
  }
  else if (digitalRead(Col2) == HIGH) {
lcd.print("8");
delay(del);
  }
  else if (digitalRead(Col3) == HIGH) {
lcd.print("9");
delay(del);
  }

}

void r4() {

  digitalWrite(Row1, LOW);
  digitalWrite(Row2, LOW);
  digitalWrite(Row3, LOW);
  digitalWrite(Row4, HIGH);

  if (digitalRead(Col1) == HIGH) {
lcd.clear();
delay(del);
  }
  else if (digitalRead(Col2) == HIGH) {
lcd.print("0");
delay(del);
  }
  else if (digitalRead(Col3) == HIGH) {
lcd.clear();
delay(del);
  }
 
}
