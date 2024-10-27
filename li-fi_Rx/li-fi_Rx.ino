#include <LiquidCrystal.h>;
char b;
String a;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup(){
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("LIFI");
  Serial.begin(1200);
  delay(300);
  lcd.clear();
}

void loop(){
while(Serial.available() > 0){
b = Serial.read();
a += char(b);

  }
  a = a.substring(1);
    lcd.clear();
    delay(300);
    lcd.print(a);
    delay(300);
    a ="";
 
}
