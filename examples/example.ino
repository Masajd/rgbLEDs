#include <LEDs.h>

LEDs led(1, 1000, "Example LED");

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  Serial.println(led.getLEDState());
}
