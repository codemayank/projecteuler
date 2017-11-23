#include <stdio.h>

int main(void){
    int a = 6857;
    int b = 2;
    long result = 0;
    for (int i = 0; i < a; i++){
        if(a % b == 0){
            result = a / b;
            printf("%lu", result);
            break;
        }else{
            printf("the number is prime\n");
            break;
        }
    }
}