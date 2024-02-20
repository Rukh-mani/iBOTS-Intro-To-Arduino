// Development Plan:  Check off each step with an 'x' as you complete each one:
// [x] Showed up to the workshop.
// [ ] This file is open in VSCode.
// [ ] View the simulated Arduino by opening the diagram.json file (shows up when PlatformIO and WokWi Simulator extensions are installed).
// [ ] The Red LED is turned on.
// [ ] The Green LED is also turned on.
// [ ] The Blue LED is also turned on.
// [ ] 300 milliseconds after all the LEDs turn on, the Blue LED turns off.
// [ ] The Red LED then turns on and off every second, forever.
// [ ] The Green LED simultaneously turns on and off every half-second, forever.
// [ ] The Blue LED is on whenever the Green LED is off, and vice-versa.



#include <Arduino.h>

void setup() {
    pinMode(3, OUTPUT); //red
    digitalWrite(3, HIGH);
    pinMode(4, OUTPUT); //green
    digitalWrite(4, HIGH);
    pinMode(5, OUTPUT); //blue
    digitalWrite(5, HIGH);
}

void loop() {
    delay(300);
    digitalWrite(5, LOW);

    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(3, HIGH);

}
