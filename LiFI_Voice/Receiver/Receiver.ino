int add0 = 4;
int add1 = 3;
int add2 = 2;
int play1 = 5;
String b;
unsigned char a=0X00;

 void setup()
 {
  Serial.begin(1200);
  pinMode(add0, OUTPUT);
  pinMode(add1, OUTPUT);
  pinMode(add2, OUTPUT);
  pinMode(play1, OUTPUT);
  delay(100);
      digitalWrite(add0, HIGH);
    digitalWrite(add1, HIGH);
    digitalWrite(add2, HIGH);
    digitalWrite(play1, HIGH);
    delay(100);
         digitalWrite(add0, HIGH);
    digitalWrite(add1, HIGH);
    digitalWrite(add2, HIGH);
    digitalWrite(play1, HIGH);
    delay(100);
         digitalWrite(add0, HIGH);
    digitalWrite(add1, HIGH);
    digitalWrite(add2, HIGH);
    digitalWrite(play1, HIGH);
    delay(100);
         digitalWrite(add0, HIGH);
    digitalWrite(add1, HIGH);
    digitalWrite(add2, HIGH);
    digitalWrite(play1, HIGH);
    delay(100);
 }

void loop()
{
   Serial.print(a);delay(1000);
  if((a == '65')||(a == 'A'))
{
  Serial.print("****");
     a=0X00; a=0X00;
    digitalWrite(add0, HIGH);
    digitalWrite(add1, HIGH);
    digitalWrite(add2, HIGH);
    digitalWrite(play1, LOW);
    delay(2000);
    digitalWrite(play1, HIGH);  a=0X00;
       digitalWrite(play1, HIGH); a=0X00;
          digitalWrite(play1, HIGH); a=0X00;
  }
 if((a == '66')||(a == 'B'))
{
   Serial.print("####");
     a=0X00; a=0X00; a=0X00;
    digitalWrite(add0, LOW);
    digitalWrite(add1, HIGH);
    digitalWrite(add2, HIGH);
    digitalWrite(play1, LOW);
    delay(2000);
    digitalWrite(play1, HIGH); a=0X00;
       digitalWrite(play1, HIGH); a=0X00;
          digitalWrite(play1, HIGH); a=0X00;
  }
  else
  {
    digitalWrite(play1, HIGH);
  }
}


void serialEvent()
{
  
while(Serial.available() > 0)
{
 char Inchar;
Inchar = Serial.read();
a=Inchar;
 //Serial.print(a);
}
}


