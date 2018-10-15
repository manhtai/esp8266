int ledState = 0;
int btnPin = 0;
int myLeds[] = {D1, D2, D5, D7};

void blink() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(myLeds[i], HIGH);
    delay(1000);
    digitalWrite(myLeds[i], LOW);
    delay(1000);  
  }
}

void off() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(myLeds[i], LOW);
  }
}

void toggle() {
  ledState = !ledState;
}

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(myLeds[i], OUTPUT);
  }

  // Attach Flash button to input
  pinMode(btnPin, INPUT_PULLUP);
  attachInterrupt(btnPin, toggle, FALLING);
  
  Serial.begin(115200);
  Serial.setDebugOutput(true);
}

void loop() {
  Serial.println(ledState);
  if (ledState) {
    blink();
  } else {
    off();
  }
}
