#include <SanUsb.h>
#define pin_a0 btn

void main () {
set_tris_a(0x00);
set_tris_b(0x00);
output_b(0);

while(true){

Output_high(pin_b7);
delay_ms(5000);
output_low(pin_b7);
delay_ms(250);

}
}