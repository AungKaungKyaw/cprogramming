/*SIM Institute
 * 6-21-2022
 * Operators program
 */

#include <stdio.h>

int main(){
    int num1=10,num2=5;
    int sum,sub,mul;
    float div;
    // sum အပေါင်း
    sum = num1+num2;
    printf("add        :%d\n",sum);

    //subtracts အနုတ်
    sub = num1-num2;
    printf("subtracts  :%d\n",sub);

    //multiples အမြောက်
    mul = num1 * num2;
    printf("multiples  :%d\n",mul);

    //divides စားလဒ်
    div = num1 / num2;
    printf("divides    :%f\n",div);

    // increment decrement
    num1++;
    num2--;
    printf("num1:%d and num2:%d\n",num1,num2);

    //modulus အကြွင်း
    div = num1 % num2;
    printf("divides    :%f\n",div);
    return 0;
}


