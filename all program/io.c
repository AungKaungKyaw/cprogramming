/*SIM Institute
 * 6-23-2022
 * i/o program
 */

#include <stdio.h>
int main( ) {

    int num1;
    char str1[10];
    //scanf
    printf("enter number:");
    scanf("%d",&num1);            // take integer value
    printf("your number is :%d\n",num1);  //print the token value
    printf("enter character:");
    scanf("%s",str1);       //take string !note:take one word at a time
    printf("the character is :%s\n",str1);
    //gets
    printf("enter character:");
    gets(str1);     //take string !note: take full string
    printf("%s",str1);
    //getchar
    printf("enter single char:");
    num1 = getchar();           //to take single character
    printf("output as integer:%d\n",num1);  //output as integer
    printf("output as char:%c\n",num1);  //output as character , %s မသုံးဘူး is not string and character
    return 0;
}