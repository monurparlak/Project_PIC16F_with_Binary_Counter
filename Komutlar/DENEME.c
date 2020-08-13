#include <DENEME.h>
#use fast_io(d)
#use fast_io(b)
#define button pin_D0
//Okul numaram 54
int i=108;
void main()
{
 set_tris_d(0x01);
   set_tris_b(0x00);
   
   output_b(0x00);
   
   while(TRUE)
   {
      if(input(button))
         {
            output_b(i);
            delay_ms(15);
            i=i-1;
            
            while (input(button));
            
            if(i==10)
            {
               i=0;
            }
         }
   }

}





