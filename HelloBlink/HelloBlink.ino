/*
 * The classic blink sketch using ATMega328p Registers
 * A good way to learn how arduino really works
 */

void setup() {
  // Initialize registers for blinking
  DDRB = (1 << 5);
  PORTB = (0 << 5);
}

void loop() {
  // THe main blinking node
  PORTB = (1 << 5);
  delay(500);

  PORTB = (0 << 5);
  delay(500);
}
