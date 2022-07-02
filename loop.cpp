/*SIM Institute
 * 6-23-2022
 * while loop program
 */

#include <stdio.h>
int main( ) {
    int i = 0;
    while(i < 10){
        printf("i:%d\n",i);
        i++;
    }
    i = 0;
    do {
        printf("statement--\n");
        i++;
    }while(i<5);
    printf("\n");
    for(int i = 0; i <10; i++){
        printf("hello-/");
    }
    return 0;
}