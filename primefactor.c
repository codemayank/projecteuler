/***
 * This program calculates the largest prime factor of a given number (just replace the number at variable c with your number.
 * This program calculates the solution to this problem https://projecteuler.net/problem=3.
 * most of the logic is very easy this program runs a for loop and checks if the mod of the given number is 0 when divided by successively
 * incrementing numbers starting from 3.
 * since the given number is odd i am incrementing the divisor by 4 or 2 so that the last digit of each successive divisor is either 1,3,7 or 9.
 * This increases the efficiency of the code as we do not have to unnecessarily check the divisibility of the number by even numbers.
 *
 ***/

#include <stdio.h>

int main(void)
{
    int b = 3;
    long c = 600851475143;
    int counter = 0;
    long result = 0;
    for (int i = 0; i < c/2 ; i++){
            if(c % b == 0 && c != b){
                    c = c / b;
                    i = 0;
                    printf("%lu\n", c);
            }
            else if(c % b != 0 && c !=b && c > b){
                if( counter == 0){
                        b += 4;
                    }
                else{
                        b +=2;
                    }
            }else{
                result = c;
                break;
            }
        counter +=1;
        if(counter == 3){
            counter = 0;
        }


    }
    printf("This is the result: %lu\n", result);
}