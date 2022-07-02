/*SIM Institute
 * 7/2/2022
 * function without argument (function without parameter)
*/

#include <stdio.h>

void print_poem();
int return_value();
float return_float_value();

int main(){

    // void

    print_poem();
    printf("\n\n");

    // return integer value

    int value = 0;
    value = return_value();
    printf("the integer value is :%d",value);
    printf("\n\n");

    //return float value
    float float_value = 0;
    float_value = return_float_value();
    printf("the float value is :%f",float_value);


}
// void ကို ဘာလိုသုံးလဲဆိုတော့ void က value return မပြန်လို့
void print_poem(){
    printf("Because i could not stop fro Death,\n"
           "He kindly stopped for me;\n"
           "the carriage held but just ourselves\n"
           "And immortality.");
}
int return_value(){
    return 10;  // this will return value 10
}
float return_float_value(){
    return 10.5;
}
