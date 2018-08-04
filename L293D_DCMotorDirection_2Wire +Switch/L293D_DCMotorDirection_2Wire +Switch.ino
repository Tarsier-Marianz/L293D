
int ledPin    = 13; // Pin 2 on L293D
int motorPin1 = 3;  // Pin 2 on L293D
int motorPin2 = 4;  // Pin 7 on L293D
int switchPin = 2;  // switch input

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(switchPin) == HIGH) { // if the switch button is HIGH then reverse direction of the motor
    digitalWrite(motorPin1, LOW);   // set pin 2 on L293D low
    digitalWrite(motorPin2, HIGH);  // set pin 7 on L293D high
    digitalWrite(ledPin, HIGH);     // set to HIGH which indicate that switch being push
  } else {                          // by default forward direction of the motor if switch is LOW or not being push
    digitalWrite(motorPin1, HIGH);  // set pin 2 on L293D high
    digitalWrite(motorPin2, LOW);   // set pin 7 on L293D low
    digitalWrite(ledPin, LOW);      // set to HIGH which indicate that switch not being push
  }
}
