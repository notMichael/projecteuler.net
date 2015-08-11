/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int multiples = 3;
    //Add multiples of 3 except %5
    while(multiples<1000)
        {
            if(multiples%5!=0)
                {
                    sum+=multiples;
                }
            multiples+=3;
        }
    //Add multiples of 5
    multiples = 5;
    while(multiples<1000)
        {
            sum+=multiples;
            multiples +=5;
        }
    printf("result: %d",sum);
    return 0;
}
