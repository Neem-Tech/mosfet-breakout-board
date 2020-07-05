void setup() {
  pinMode(3, OUTPUT); // Configure D3 as an output
}

void loop() {
  digitalWrite(3, HIGH); // Turn on the MOSFET
  sleep(1000); // Wait 1 second
  digitalWrite(3, LOW); // Turn off the MOSFET
  sleep(1000); // Wait 1 second
  analogWrite(3, map(26, 0, 100, 0, 255); // PWM the output to achieve 26% brightness
  sleep(1000); // Wait 1 second
}
