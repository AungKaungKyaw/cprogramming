#include <stdio.h>

int main(){
    int array1[5] = {10,32,50,60,54};
    int array2[5];
    int array3[5] = {0};
    //
    for(int i = 0; i < 5; i++){
        printf("array[%d]:%d\n",i,array1[i]);
    }
    // print array without value
    for(int i = 0; i < 5; i++){
        printf("array2[%d]:%d",i,array2[i]);
        printf("\n");
    }
    // assign all array value as 0
    for(int i = 0; i < 5; i++){
        printf("array3[%d]:%d",i,array3[i]);
        printf("\n");
    }
    // calculate average user input vlaue and calculate average

    // sort hight to low low to high

    return 0;

}