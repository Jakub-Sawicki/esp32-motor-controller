#include "pin_config.h"
#include "PID.h"
#include "PID.cpp"

#include <Arduino.h>


PID pid(1, 1, 1, 1);

void setup() {
  Serial.begin(115200);
  while(!Serial) {
    ; // waiting for serial port to connect
  }

  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  //Serial.println("Hello BeagleBone!");

  if(Serial.available() > 0) {
    char message = Serial.read();
    Serial.print(message);

    if(message = 'h') {
      digitalWrite(LED_PIN, LOW);
    }
    else if(message = 'l') {
      digitalWrite(LED_PIN, HIGH);
    }
  }
  else {
    ;
  }
}