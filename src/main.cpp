#include <Arduino.h>

#define lysPin0 A0

void setup() {
  pinMode(lysPin0, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(analogRead(lysPin0) > 120 && analogRead(lysPin0) < 140){
    Serial.println("du er der naesten: " + String(analogRead(lysPin0)));
  }
  else if (analogRead(lysPin0) < 120){
    Serial.println("der er lys");
  }
  else{
    Serial.println("giv mig lys");
  }
}

