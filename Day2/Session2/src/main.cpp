#include<Arduino.h>
const int redLED =3;
bool isOn = true;
int redbuttonstate = digitalRead(9);
int REDBUTTON = 11;

void setup(){
    pinMode(redLED , OUTPUT);
    pinMode(REDBUTTON , INPUT_PULLUP);
}
void loop(){
    digitalWrite(redLED, LOW);
    delay(50);
    digitalWrite(redLED, HIGH);
    delay(50);
}

void loop2(){
    if (redbuttonstate==isOn){
    pinMode(5, INPUT_PULLUP);
    digitalWrite(5, HIGH);
    }
}