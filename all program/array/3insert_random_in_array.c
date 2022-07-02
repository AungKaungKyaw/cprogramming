#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    time_t s;   // signed integer
    int max_num = 100, min_num = 0, result=0;
    int arr[10]={0};
    
    for(int i=0;i<10;i++){  
        arr[i]= rand() % (max_num + 1 - min_num) + min_num;
        printf("the array[%d]:%d\n",i,arr[i]);
    }

}