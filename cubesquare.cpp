void setup() {
 Serial.begin(9600); // Start Serial communication
 Serial.println("Enter a number to find its cube:");
}
void loop() {
 if (Serial.available() > 0) {
 float number = Serial.parseFloat();
 float cube = number * number * number; // Calculate cube
 Serial.print("The cube of ");
 Serial.print(number);
 Serial.print(" is ");
 Serial.println(cube);
 Serial.println("Enter another number:");
 delay(100);
 }
}
