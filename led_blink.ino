// pin number where the LED is connected
int ledPin = 13;

// runs once when the Arduino starts
void setup() {
  pinMode(ledPin, OUTPUT);
}

// runs repeatedly 
void loop() {
  digitalWrite(ledPin, HIGH); // turn the LED on by sending HIGH voltage to ledPin
  delay(1000); // wait for 1000ms (1s)
  digitalWrite(ledPin, LOW); // turn the LED off y sending LOW voltage to ledPin
  delay(1000); // wait for another 1000ms (1s)
}
