// Created by ChatGPT and Lucas Fernando.
// Feel free to use and modify this code the way you want and need.

// Pin connected to the LED
const int ledPin = 3;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn on the LED
  digitalWrite(ledPin, HIGH);
  
  // Wait for 0.5 seconds
  delay(500);
  
  // Turn off the LED
  digitalWrite(ledPin, LOW);
  
  // Wait for 0.5 seconds
  delay(500);
}

