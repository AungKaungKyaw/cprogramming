/*
6/29/2022
SIM Institute
modify pointer value
*/

#include <stdio.h>
#include <math.h>
int main(){
    const float deg_to_rad = M_PI/ 180;
    int deg = 0;
    float radian;
    printf("Degrees                     Sin(Degree)");
    while (deg <= 90){
        radian = deg * deg_to_rad;
        printf("%d                              %f", deg, sin(radian));
        deg += 2;
    }
}
