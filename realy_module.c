/*
    Project name : Relay Module
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-relay-module
*/

const int relayPin = 7; // Pin connected to the relay module
const int buttonPin = 2; // Pin connected to the button
bool relayState = false; // Variable to store relay state
bool lastButtonState = HIGH; // Last state of the button
unsigned long debounceTime = 50; // Debounce time in milliseconds
unsigned long lastDebounceTime = 0; // Last time the output was toggled

void setup() {
  pinMode(relayPin, OUTPUT); // Set relay pin as output
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with internal pull-up resistor
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  bool buttonState = digitalRead(buttonPin); // Read the state of the button

  // Check if the button state has changed
  if (buttonState != lastButtonState) {
    lastDebounceTime = millis(); // Reset the debouncing timer
  }

  if ((millis() - lastDebounceTime) > debounceTime) {
    // If the button state has changed and it's stable
    if (buttonState == LOW && lastButtonState == HIGH) {
      relayState = !relayState; // Toggle relay state
      digitalWrite(relayPin, relayState); // Set relay pin
      Serial.print("Relay state: ");
      Serial.println(relayState ? "ON" : "OFF");
    }
  }

  lastButtonState = buttonState; // Update last button state
  delay(10); // Small delay to avoid rapid toggling
}
