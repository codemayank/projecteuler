#include<stdio.h>

int main(void){
    int a, b, remain, product, largest, lavalue, lbvalue;

    a = 999;
    b = 100;
    remain = 0;
    product = 0;
    largest = 0;
    lavalue = 0;
    lbvalue = 0;
    int computations = 0;

    for (int j = 0; j <= 899; j++){
        for(int i = 0; i <= 899; i++){
            product = a * b;
            int product1 = product;
            int c = 0;
            while(product != 0){
                remain = product%10;
                c = c*10 + remain;
                product = product/10;
            }
            if(product1 == c){
                if ( c > largest){
                    largest = c;
                    lavalue = a;
                    lbvalue = b;
                }
                b += 1;
            }else{
                // printf("%i\n", b);
                b += 1;
            }
            computations += 1;
        }
        a -= 1;
        b = 100;
    }
printf("the largest palindrome is %i X %i = %i\n", lavalue, lbvalue, largest);
printf("Number of computations required %i\n", computations);
}