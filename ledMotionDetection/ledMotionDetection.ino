/*
 * Simplified Motion Detection with a PIR Sensor
 * Clayton Walker
 */

 int ledPin = 13;
 int pirPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);

  delay(3000);
}

void loop() {
  int val = digitalRead(pirPin);
  digitalWrite(ledPin, val);
}
