#include "flipperLED.h"

void flipperLED::RunSetup() {
  pinMode(B_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(R_PIN, OUTPUT);

  if (!settings_obj.loadSetting<bool>("EnableLED")) {
    digitalWrite(B_PIN, LOW);
    digitalWrite(G_PIN, LOW);
    digitalWrite(R_PIN, LOW);
    return;
  }
    
  delay(50);

  digitalWrite(B_PIN, LOW);
  delay(500);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(G_PIN, LOW);
  delay(500);
  digitalWrite(G_PIN, HIGH);
  digitalWrite(R_PIN, LOW);
  delay(500);
  digitalWrite(R_PIN, HIGH);

  delay(500);
  digitalWrite(B_PIN, LOW);
  digitalWrite(G_PIN, HIGH);
  digitalWrite(R_PIN, LOW);
}

void flipperLED::attackLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
    
  digitalWrite(B_PIN, LOW);
  digitalWrite(G_PIN, HIGH);
  digitalWrite(R_PIN, LOW); 
  delay(10);
  digitalWrite(R_PIN, HIGH);
}

void flipperLED::sniffLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
    
  digitalWrite(B_PIN, LOW);
  digitalWrite(G_PIN, HIGH);
  digitalWrite(R_PIN, LOW);
  delay(10);
  digitalWrite(B_PIN, HIGH);
}

void flipperLED::offLED() {
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;
    
  digitalWrite(B_PIN, LOW);
  digitalWrite(G_PIN, HIGH);
  digitalWrite(R_PIN, LOW);
}

void flipperLED::main() {
  // do nothing
}