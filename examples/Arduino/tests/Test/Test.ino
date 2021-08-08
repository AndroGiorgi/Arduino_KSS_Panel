#include "characters.h"
  
byte digit[4] = {
  B11010000,  // 4
  B11000100,  // 3
  B01010100,  // 2
  B10010100   // 1
  };

void setup() {
  DDRB = B11010100;
  DDRD = B11111111;
}

void loop() {
  for(byte dig = 0; dig < 4; dig++) {
    PORTB = digit[dig];
    for(byte num = 0; num < 41; num++) {
      PORTD = pgm_read_byte_near(character + num);
      delay(1000);
    };
  };
}
