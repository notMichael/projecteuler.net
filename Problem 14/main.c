/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int countTerms(int64_t number);

int main()
{
    int maxTerms = 0;
    int number;
    int terms = 0;
    int i;
    for(i = 1; i<1000000; i++)
    {
        terms = countTerms(i);
        if(terms>maxTerms)
        {
            maxTerms = terms;
            number = i;
        }
    }
    printf("result: %d\n",number);
    return 0;
}
int countTerms(int64_t number)
{
    //Included origin
    int counter = 1;
    //"do" includes last number "1"
    do
    {
        //Even
        if(number%2==0)
        {
            number /=2;
        }
        //Odd
        else
        {
            number = 3*number + 1;
        }
        counter++;
    }
    while(number !=1);
    return counter;
}
