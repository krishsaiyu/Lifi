int sensorPin = 0;

void setup() {
  Serial.begin(9600); //The baud 9600 is the defult baud rate
}

void loop() {
  // send the value of analog input multiplyed by 5 to amplify the value
  int Sensor=analogRead(sensorPin);
Serial.println(Sensor*37);
  delay(10); //Wait about 0.01 seconds
}


