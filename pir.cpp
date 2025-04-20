const int pirSensorPin = A0; // Match case here
const int ledPin = 13;

void setup(){
  pinMode(pirSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int motionDetected = digitalRead(pirSensorPin);
  if (motionDetected == HIGH){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
