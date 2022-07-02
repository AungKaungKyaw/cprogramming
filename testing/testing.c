/*
6/29/2022
SIM Institute
modify pointer value
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float width,length,area;
    printf("enter width,length");
    scanf("%f%f",width,length);
    area = width * length;
    printf("the area is :%f",area);
    return 0;
}
