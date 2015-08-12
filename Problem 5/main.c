/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    long number = 2520;
    bool evenlyDivisible = false;
    int i;
    while(1)
        {
            evenlyDivisible = true;
            for(i = 1;i<=20&&evenlyDivisible==true;i++)
                {
                    if(number%i!=0)
                        {
                            evenlyDivisible = false;
                            break;
                        }
                }
            if(evenlyDivisible) break;
            number++;
        }
    printf("%ld",number);
    getchar();
    return 0;
}
