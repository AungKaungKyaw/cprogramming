/*SIM Institute
 * 6-23-2022
 * decision program
 * else if...,else...
 */

#include <stdio.h>

int main(){
    /* local variable definition */
    char grade = 'j';

    switch(grade) {
        case 'A' :
            printf("between 100-80\n" );
            break;
        case 'B' :
            printf("between 79-60\n");
            break;
        case 'C' :
            printf("between 59-40\n" );
            break;
        case 'D' :
            printf("between 39-20\n" );
            break;
        case 'F' :
            printf("between 19-0\n" );
            break;
        default :
            printf("put valid number" );
    }
    return 0;
}


