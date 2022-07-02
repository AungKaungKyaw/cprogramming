/* SIM Institute
 * 7/2/2022
 * loop exercises
 */
#include <stdio.h>

int main(){

    int pin=0;
    int i = 0;

    do {
        printf("enter PIN:");
        scanf("%d",&pin);
        if(pin == 555){
            break;  // cracked code
        }
    }while(pin!=123);

    for(int i = 0; i < 1;){
        printf("enter PIN:");
        scanf("%d",&pin);
        if(pin == 255){
            printf("valid PIN");
            i = 2;
        }
        else{
            printf("invalid PIN\n");
        }
    }

}
