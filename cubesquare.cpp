void setup() {
  Serial.begin(9600); // Start Serial communication
  Serial.println("Enter a number to find its square, square root, cube, or cube root:");
}

void loop() {
  if (Serial.available() > 0) {
    float number = Serial.parseFloat(); // Read the number
    // If you want to enable one operation, simply comment/uncomment as needed.

    // Calculate Square
    int square = number * number;
    Serial.print("The square of ");
    Serial.print(number);
    Serial.print(" is ");
    Serial.println(square);
    
    // Calculate Square Root
    if (number >= 0) {
      float squareRoot = sqrt(number);
      Serial.print("The square root of ");
      Serial.print(number);
      Serial.print(" is ");
      Serial.println(squareRoot);
    } else {
      Serial.println("Please enter a non-negative number for square root.");
    }

    // Calculate Cube
    float cube = number * number * number;
    Serial.print("The cube of ");
    Serial.print(number);
    Serial.print(" is ");
    Serial.println(cube);
    
    // Calculate Cube Root
    if (number >= 0) {
      float cubeRoot = cbrt(number);
      Serial.print("The cube root of ");
      Serial.print(number);
      Serial.print(" is ");
      Serial.println(cubeRoot);
    } else {
      Serial.println("Please enter a non-negative number for cube root.");
    }

    Serial.println("Enter another number to continue.");
    delay(100); // Small delay to debounce Serial input
  }
}
