#define __SFR_OFFSET 0x00
#include <avr/io.h>

.global my_config
.global asmloop

my_config:
  ldi r18, 0x20
  out DDRB, r18
  ret
asmloop:
  cbi PORTB, 5
  sbi PORTB, 5
  rjmp asmloop
