#include <LiquidCrystal.h>;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int sw1Pin = 8;
int sw2Pin = 9;
int sw3Pin = 10;
int sw4Pin = 11;
int sw1State = 0;
int sw2State = 0;
int sw3State = 0;
int sw4State = 0;

void setup(){
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("");
  Serial.begin(1200);
  delay(300);
  lcd.clear();
  pinMode(sw1Pin, INPUT);
  pinMode(sw2Pin, INPUT);
  pinMode(sw3Pin, INPUT);
  pinMode(sw4Pin, INPUT);  
}
void check()
{
  if(sw1State == HIGH ){
    lcd.clear();
    delay(100);
    Serial.write("\nTake Right");
    delay(300);
    lcd.print("Take Right");
    delay(100);
  }
  else if(sw4State == HIGH ){
    lcd.clear();
    delay(100);
    Serial.write("\nTake Left ");
    delay(300);
    lcd.print("Take Left ");
    delay(100);
  }

  else if(sw2State == HIGH){
    lcd.clear();
    delay(100);
    Serial.write("\nReverse");
    delay(300);
    lcd.print("Reverse");
    delay(100);
  }

 else if(sw3State == HIGH){
    lcd.clear();
    delay(100);
    Serial.write("\nStop");
    delay(300);
    lcd.print("Stop");
    delay(100);
  }
 /*  else 
  {
    lcd.clear();
    delay(100);
    Serial.write("\nLifi");
    delay(300);
    lcd.print("Lifi");
  }*/
}
void loop()
{
    sw1State = digitalRead(sw1Pin);
    sw2State = digitalRead(sw2Pin);
    sw3State = digitalRead(sw3Pin);
    sw4State = digitalRead(sw4Pin);
    check();
    
    sw1State = digitalRead(sw1Pin);
    sw2State = digitalRead(sw2Pin);
    sw3State = digitalRead(sw3Pin);
    sw4State = digitalRead(sw4Pin);
    check();
    delay(100);
   
     }






