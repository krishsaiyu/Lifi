int mode1 = 2;
int count,count1;

void setup(){
  Serial.begin(1200);
  pinMode(mode1, OUTPUT);
}

void data1(){
  while(count < 5){
 Serial.write('A');
 delay(1000);
 count++;
  }
 }

void data2(){
  while(count1 < 5){
 Serial.write('B');
 delay(1000);
 count1++;
  }
}

void loop(){
  count = 0;
  count1 = 0;
  digitalWrite(mode1, LOW);
  data1();
  delay(5000);
  digitalWrite(mode1, HIGH);
  data2();
  delay(5000);
}

