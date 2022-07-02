#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("random number:%d \n",rand());
    printf("random number:%d \n",rand());
    printf("random number:%d \n",rand());
    printf("random number:%d \n",rand());
    
    //
    srand(time(NULL));  // starting point of random depends on current
    time_t s;       //signed integer
    s = time(NULL);
    printf("the time is : %lld\n",s);
    //random range
    
    int max_num = 10, min_num = 0; 
    int result=0;
    result = rand() % (max_num + 1 - min_num) + min_num;  //random range equation
    printf("random number is : %d",result);
    printf("\n");
    

}