const unsigned int LED {
  17
};
// add these
const unsigned int MTR_HI {
  13
};

const unsigned int MTR_LO{14};

void setup() {
  pinMode(LED, OUTPUT);
  // and these
  pinMode(MTR_HI, OUTPUT);
  pinMode(MTR_LO, OUTPUT);
  // configure pins to spin the motor in a direction
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(MTR_HI, i);
    analogWrite(MTR_LO, 0);
    delay(20);
  }
  analogWrite(MTR_HI, 0);
  analogWrite(MTR_LO, 0);
  delay(20);
  for (int i = 255; i >= 0; i--) {
    analogWrite(MTR_HI, i);
    analogWrite(MTR_LO, 0);
    delay(20);
  }
  analogWrite(MTR_HI, 0);
  analogWrite(MTR_LO, 0);
  delay(20);
  for (int i = 0; i <= 255; i++) {
    analogWrite(MTR_HI, 0);
    analogWrite(MTR_LO, i);
    delay(20);
  }
  analogWrite(MTR_HI, 0);
  analogWrite(MTR_LO, 0);
  delay(20);
  for (int i = 255; i >= 0; i--) {
    analogWrite(MTR_HI, 0);
    analogWrite(MTR_LO, i);
    delay(20);
  }
  analogWrite(MTR_HI, 0);
  analogWrite(MTR_LO, 0);
  delay(20);


}
