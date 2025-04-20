int greenLED = 13;
int yellowLED = 12;
int redLED = 11;
int counter = 0;
void setup() {
 pinMode(greenLED, OUTPUT);
 pinMode(yellowLED, OUTPUT);
 pinMode(redLED, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 counter++;
 Serial.print("Counter: ");
 Serial.println(counter);
 if (counter < 100) {
 digitalWrite(greenLED, HIGH);
 digitalWrite(yellowLED, LOW);
 digitalWrite(redLED, LOW);
 }
 else if (counter >= 101 && counter <= 200) {
 digitalWrite(greenLED, LOW);
 digitalWrite(yellowLED, HIGH);
 digitalWrite(redLED, LOW);
 }
 else {
 digitalWrite(greenLED, LOW);
 digitalWrite(yellowLED, LOW);
 digitalWrite(redLED, HIGH);
 }
 delay(1000);
 if (counter > 250) {
 counter = 0;
 }
}
