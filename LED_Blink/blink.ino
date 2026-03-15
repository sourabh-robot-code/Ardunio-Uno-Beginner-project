# Arduino Uno Beginner Projects
This repository contains my beginner Arduino learning experiments.

## Project 1 – LED Blink
This project blinks an LED connected to pin 12.

  ### Components
- Arduino Uno
- LED
- 220Ω resistor
- Breadboard
- Jumper wires

### Circuit
Pin 12 → Resistor → LED → GND

  ##Code
void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(12, LOW);
  delay(200);
}
### Code
The LED turns ON and OFF every 200 milliseconds.

