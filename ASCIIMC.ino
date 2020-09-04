//Preoperator directives
#include "Arduino.h"
#include "ASCIIMC.h"

ASCIIMC asciimc(true);

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

String phrase;

void loop() {
 if (Serial.available() > 0) {    // is text available?
    phrase = Serial.readString();       // get phrase
    Serial.println(phrase);
    asciimc.translating(phrase);//translate
 }
}
