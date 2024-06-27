/*
    Project name : Relay Module
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-relay-module
*/

const int relayPin = 7; // Pin connected to the relay module
bool relayState = false; // Variable to store relay state

void setup() {
  pinMode(relayPin, OUTPUT); // Set relay pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Toggle relay state
  relayState = !relayState;
  digitalWrite(relayPin, relayState); // Set relay pin

  Serial.print("Relay state: ");
  Serial.println(relayState ? "ON" : "OFF");

  delay(1000); // Delay for 1 second between toggles
}
