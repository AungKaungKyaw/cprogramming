#include <stdio.h>
#include "stdbool.h"

int main(){
    int bus_stop, still, leave, sleeping_man =0;
    bool accept = true, check_1 = false;

    printf("enter the number of bus stop");
    scanf("%d", &bus_stop);
    for (int i = 1; i <= bus_stop; i++){
        do {
            if(i == 1){
                do {
                    printf("bus stop no: %d\n", i);
                    printf("enter incoming : ");
                    scanf("%d", &still);
                }while(still < 0);
                    sleeping_man += still;
                    accept = true;
            }
            else{
                do {
                    printf("bus stop no: %d\n", i);
                    printf("enter incoming : ");
                    scanf("%d", &still);
                }while(still < 0);
                sleeping_man += still;
                do{
                    printf("enter leave    : ");
                    scanf("%d", &leave);
                }while(leave > sleeping_man);
                sleeping_man -= leave;
                accept = true;
            }
        } while (!accept);
        printf("sleeping man : %d\n",sleeping_man);
    }

}
