const int pirsensorpin = 7;  // PIR sensor connected to pin 7
const int ledpin14 = 13;      // LED connected to pin 13

void setup() {
  pinMode(pirsensorpin, INPUT);  // Set PIR sensor pin as input
  pinMode(ledpin14, OUTPUT);     // Set LED pin as output
  Serial.begin(9600);            // Start Serial communication at 9600 baud
}

void loop() {
  int motionDetected = digitalRead(pirsensorpin);  // Read PIR sensor
  Serial.print("PIR sensor state: ");
  Serial.println(motionDetected);   // Print PIR sensor state to Serial Monitor

  if (motionDetected == HIGH) {
    digitalWrite(ledpin14, HIGH);  // Turn on LED if motion is detected
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledpin14, LOW);   // Turn off LED if no motion detected
    Serial.println("No motion detected.");
  }
  delay(100);  // Short delay to prevent overwhelming the Serial Monitor
}
