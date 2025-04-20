const int greenPin = 8;
const int yellowPin = 9;
const int redPin = 10;
void setup() {
 pinMode(greenPin, OUTPUT);
 pinMode(yellowPin, OUTPUT);
 pinMode(redPin, OUTPUT);
Serial.begin(9600);
 Serial.println("Enter 'b' (blink green), 'g' (green), 'y' (yellow), 'r' (red)");
}
void loop() {
 if (Serial.available() > 0) {
 char command = Serial.read();
 digitalWrite(greenPin, LOW);
 digitalWrite(yellowPin, LOW);
 digitalWrite(redPin, LOW);
 if (command == 'b') {
 for (int i = 0; i < 5; i++) {
 digitalWrite(greenPin, HIGH);
 delay(500);
 digitalWrite(greenPin, LOW);
 delay(500);
 }
 } else if (command == 'g') {
 digitalWrite(greenPin, HIGH);
 } else if (command == 'y') {
 digitalWrite(yellowPin, HIGH);
 } else if (command == 'r') {
 digitalWrite(redPin, HIGH);
 } else {
 Serial.println("Invalid input. Use 'b', 'g', 'y', or 'r'.");
 }
 }
}
