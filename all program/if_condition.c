/*SIM Institute
 * 6-23-2022
 * decision program
 * if condition
 */

#include <stdio.h>

int main(){
    int num1 = 10, num2 = 5,num3 = 0;

    // condition တွေကိုစစ်ချင်ရင် if ကိုသုံးတယ်။
    if(num1 == 10){                 // num1 == 10 မှာ ' == ' က num1 value နဲ့ 10 နဲ့ထပ်တူညီလားဆိုတာကြည့်တာပါ
        printf("number1 is 10\n");    // value တူတော့အော code အလုပ်လုပတယ် မတူရင်ကျော်သွားတယ်။
    }
    if(num2 != 4){                       // != ဆိုတာက num2 က 4 နဲ့မညီ ရင် true ညီရင် false
        printf("number2 isn't 5\n");
    }
    if(num1 > num2){                        // num1 က num2 ထက်ကြီးလားစစ်တယ်
        printf("num1 is greater than num2\n");
    }
    if(num1 <= num2){                       // num1 က num2 ထက်ငယ်လား (သို့) တူလား?
        printf("never print\n");        // num1 က num2 ထက် ငယ်လည်းမငယ်ဘူး တူလည်းမတူဘူ:
    }
    if(num1){                               // num1 မှာ value ရှိလားမရှိလားစစ်တာ
        printf("num1 has value\n");
    }
    if(num3){                               // num3 မှာ value က '0'
        printf("num1 has value\n");     //print မထုတ်ပေးဘူး
    }
    if(!num3){                               // num3 မှာ value မရှိဘူးဆိုတဲ့ statement က true
        printf("num1 has value\n");     //print
    }
    // အပေါ်က condition တစ်ခုကိုပဲစစ်တာပါ

    //----------------------------------------------------------------------------------------------

    /*Logical AND Operator ( && )
     * condition နှစ်ခုလုံးမှန်နေမှ true
     * truth table
     * A    B   R       0 = false
     * 0    0   0       1 = true
     * 0    1   0
     * 1    0   0
     * 1    1   1
     */
    if(( num1 > num2 ) && ( num2 < num1 )){ // && က condition နှစ်ခုကိုဆက်ပေးတယ် condition နှစ်ခုစလုံးမှန် ရင် true
        printf("num1 is greater than num2 \n num2 is less than num1");// num1 က num2 ထက်ကြီးတယ် num2 က num1 ထက်ငယ်တယ်
    }

    //----------------------------------------------------------------------------------------------

    /*Logical OR Operator   ( || )
     * condition နှစ်ခုထဲက တစ်ခုခုမှန်နေရင် true
     * truth table
     * A    B   R
     * 0    0   0       0 = false
     * 0    1   1       1 = true
     * 1    0   1
     * 1    1   1
     */

    if((num1 < num2) || (num1 > num2) || (num1==6)){
        printf("True");                     // second condition မှာ num1 က num2 ထက်ကြီးတယ် ဆိုတာမှန်လို့ print 'True'
    }                                // num1 ရှေ့မှာ '!' ထည့်လိုက်ရင် condition က false ဖြစ်ပြီး အကုန် false လို့ print မထုတ်တော့ဘူး

    return 0;
}


