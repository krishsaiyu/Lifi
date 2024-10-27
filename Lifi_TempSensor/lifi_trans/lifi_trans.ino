int ledPin = 11;
int sensorPin = 0;     //<= Attach any sensors like Temperature sensor, Ultrasonic sensor or whatever!! 
                                                             //Its up to you to send the type of data!!

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(sensorPin);
  
  sensorVal = constrain(sensorVal, 0, 90);
  int ledOutput = map(sensorVal, 0, 90, 0, 225);
  analogWrite(ledPin, ledOutput);
  Serial.println(sensorVal);
}

