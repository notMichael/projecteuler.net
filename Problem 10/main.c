/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>


int main()
{
    bool * primeBits = malloc(2000000*sizeof(bool));
    int64_t i;
    int64_t j;
    int64_t sum = 0;
    for(i = 2;i<2000000;i++)
        {
           for(j = 2*i;j<2000000;j+=i)
            {
                *(primeBits+j)=1;
            }
        }
    for(i = 2; i<2000000;i++)
        {
            if(*(primeBits+i)==0)
                {
                    sum+=i;
                }
        }
    printf("result: %"PRId64,sum);
    return 0;
}
