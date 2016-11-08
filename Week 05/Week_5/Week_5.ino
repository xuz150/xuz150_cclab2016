int ledPin = 9;
int brightness = 0;
int sensorLow = 0;
int sensorHigh = 150;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop(){
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  brightness = map(sensorValue, sensorLow, sensorHigh, 0, 255);
  analogWrite(ledPin, brightness);
  delay(300);
}
