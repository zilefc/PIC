#include <SanUsb.h>

void main(){
set_tris_b(0x00);
output_b(0);

   while(true){
   
   output_high(pin_b7);  //liga vermelho
   delay_ms(5000);
   output_low(pin_b7);   // desliga vermelho
   output_high(pin_b6); //liga verde
   delay_ms(5000);
   output_low(pin_b6);  //desliga verde
   output_high(pin_b5);  //liga liga amarelo
   delay_ms(1000);
   output_low(pin_b5);  //deliga amarelo
   
   }
}
