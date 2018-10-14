void setup() {
  Serial.begin(9600);
  pinMode(D1, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D7, OUTPUT);  
}

void loop() {
  digitalWrite(D1, HIGH);
  delay(1000);
  digitalWrite(D1, LOW);
  delay(1000);

  digitalWrite(D3, HIGH);
  delay(1000);
  digitalWrite(D3, LOW);
  delay(1000);
   
  digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
  delay(1000);

  digitalWrite(D7, HIGH);
  delay(1000);
  digitalWrite(D7, LOW);
  delay(1000);
}
