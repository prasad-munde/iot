int button1 = 2;
int button2 = 3;
int led = 13;
void setup() {
 pinMode(button1, INPUT);
 pinMode(button2, INPUT);
 pinMode(led, OUTPUT);
}
void loop() {
 int a = digitalRead(button1);
 int b = digitalRead(button2);
//For the AND GATE
 if (a == HIGH && b == HIGH) {
 digitalWrite(led, HIGH);
 } else {
 digitalWrite(led, LOW);
 }
//For The OR GATE
if (a == HIGH || b == HIGH) {
 digitalWrite(led, HIGH);
} else {
 digitalWrite(led, LOW);
}
//For the XOR GATE
if (a != b) { // XOR logic
 digitalWrite(led, HIGH);
} else {
 digitalWrite(led, LOW);
}
}
