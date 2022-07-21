#include "DigiKeyboard.h"
const byte buttonPin = 2;    // connected switch (normally open)

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  if (!digitalRead(buttonPin)) {
    DigiKeyboard.println("supersecurepassword"); //change your password here
   // DigiKeyboard.sendKeyStroke(KEY_R); // just an example
    // DigiKeyboard.delay(50); // wait
  }
}
