/*SIM Team
 *7/2/2022
 *function by value
 */

#include <stdio.h>
void swap(int x, int y);
int main () {

   int a = 123;
   int b = 456;
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );

   swap(a, b);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
 
   return 0;
}
void swap(int x, int y) {

   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put temp into y */
  
   return;
}
