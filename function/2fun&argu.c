/*SIM Institute
 * 7/2/2022
 * 2 function with argument
*/
#include <stdio.h>

int sum(int i, int j);
int multi(int i, int j);

int main(){
    int x = 5;
    int y = 10;
    int add, multiple;
    add = sum(x,y);
    multiple = multi(x,y);
    printf("the sum is :%d",add);
}
int sum(int i, int j){
    int result = 0;
    result = i + j;
    return result;
}
int multi(int i, int j){
    int result = 0;
    result = i * j;
    return result;
}