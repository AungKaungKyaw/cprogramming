#include <stdio.h>

int main(){
    int array1[5] = {10,20,35,66,50};
    
    //print single array
    printf("array index 0 :%d",array1[0]);
    printf("\n");
    printf("array index 1 :%d",array1[1]);
    printf("\n");

    // size of array
    int array_size = sizeof(array1)/sizeof(array1[0]);
    printf("array size :%d",array_size);
    printf("\n");

    // print all array
    for(int i = 0; i < array_size; i++){
        printf("array[%d]=%d",i,array1[i]);
        printf("\n");
    }

    // find largest value in array
    int largest_value=0, sma_val = 0;
    for(int i = 0; i < 5; i++){
        if(largest_value < array1[i]){
            largest_value = array1[i];
        }
    }
    // find smallest value in array
    sma_val = array1[4];
    for(int i = 0; i < 5; i++){
        if(sma_val > array1[i]){
            sma_val = array1[i];
        }
    }
    printf("largest_value:%d",largest_value);
    printf("largest_value:%d",sma_val);
    // FIND THE SMALLEST OR LARGEST ARRAY

}