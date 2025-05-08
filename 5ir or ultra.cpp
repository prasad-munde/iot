\#define echoPin 2
\#define trigPin 3
\#define ledPin5 13

long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(ledPin5, OUTPUT);
Serial.begin(9600);
Serial.println("Distance measurement using Arduino Uno:");
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance = duration \* 0.0344 / 2;

Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");

if (distance <= 100) {
digitalWrite(ledPin5, HIGH);
} else {
digitalWrite(ledPin5, LOW);
}
delay(200);
}



or



