const int pinUpperMotor = 6;

void setup() {
  pinMode(pinUpperMotor, OUTPUT);
}

void loop() {
  // Use PWM to run the motor at a lower speed.
  analogWrite(pinUpperMotor, 180);
}
