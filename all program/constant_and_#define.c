/*SIM Institute
 * 6-21-2022
 * constant & #define
 */

#include <stdio.h>

#define num1 5
#define num2 6
#define pi 3.1415926
#define who "Moe Swe"

int main()  {
    const int num3 = 5;
    const int num4 = 6;
    int add = 0,multi;
    add = num1 + num2;
    printf("the add is :%d\n", add);
    printf("pi         :%f\n", pi);     // float value %f
    multi = num3 + num4;
    printf("multiplex  :%d\n",multi);
    printf("character  :%s\n",who);     // string value %s
    return 0;
}