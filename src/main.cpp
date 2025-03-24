#include <Arduino.h>


void setup() {
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(31,OUTPUT);
  pinMode(32,OUTPUT);
}

void loop() {
  Serial.println("HIGH");
  analogWrite(26,255);
  analogWrite(27,255);
  analogWrite(31,255);
  analogWrite(32,255);
  sleep(1000);
  Serial.println("LOW");
  analogWrite(26,0);
  analogWrite(27,0);
  analogWrite(31,0);
  analogWrite(32,0);
  sleep(1000);
}
