/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    int64_t number = 600851475143;
    int64_t maxPrimeFactor = 0;
    while(number>1)
    {
    int64_t factor;
    for(factor = 2;factor<600851475143;factor++)
    {
        if(number%factor == 0)
        {
        if(factor >maxPrimeFactor) maxPrimeFactor = factor;
        number = number/factor;
        break;
        }
    }
}
printf("%" PRId64 "\n", maxPrimeFactor);
return 0;
}
