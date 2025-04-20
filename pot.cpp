const int redPin=9;
const int greenPin=10;
const int bluePin=11;
const int potPin=A0;
void setup() {
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
Serial.begin (9600);
}
void loop() {
int potValue = analogRead(potPin);
 int brightness= map(potValue ,0,1023,0,255);
analogWrite(redPin , brightness);
analogWrite(greenPin , brightness/6);
analogWrite(bluePin , brightness);
delay(50);
}
