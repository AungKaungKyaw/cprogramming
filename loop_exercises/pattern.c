/* SIM Institute
 * 7/2/2022
 * loop exercises
 */
#include <stdio.h>

int main() {

    int pin = 0;
    int i = 0, m = 0;
    for (int i = 0; i < 10; i++) {
        printf(" *\n ");
        for (int j = 0; j < 10; j++) {
            printf(" * ");
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i - 1; j++) {
            printf("   ");
        }
        for (int k = 1; k <= m; k++) {
            printf(" * ");
        }
        printf("\n");
        m++;
    }
    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}