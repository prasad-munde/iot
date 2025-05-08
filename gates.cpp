int led = 13;

// Manually set inputs here: 0 = LOW, 1 = HIGH
int a = 1;
int b = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);

  // Display input states
  Serial.print("Input A: ");
  Serial.println(a);
  Serial.print("Input B: ");
  Serial.println(b);

  // AND Gate Logic
  if (a == 1 && b == 1) {
    digitalWrite(led, HIGH);
    Serial.println("AND Gate Output: HIGH");
  } else {
    digitalWrite(led, LOW);
    Serial.println("AND Gate Output: LOW");
  }

  delay(2000);  // Pause before next gate

  // OR Gate Logic
  if (a == 1 || b == 1) {
    digitalWrite(led, HIGH);
    Serial.println("OR Gate Output: HIGH");
  } else {
    digitalWrite(led, LOW);
    Serial.println("OR Gate Output: LOW");
  }

  delay(2000);

  // XOR Gate Logic
  if (a != b) {
    digitalWrite(led, HIGH);
    Serial.println("XOR Gate Output: HIGH");
  } else {
    digitalWrite(led, LOW);
    Serial.println("XOR Gate Output: LOW");
  }
}

void loop() {
  // Do nothing in loop since test runs in setup()
}
